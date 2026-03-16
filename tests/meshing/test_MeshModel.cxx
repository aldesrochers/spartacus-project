// Tests for MeshModel<ShapeType>
//
// Uses a lightweight SimpleShape stub so tests do not require OpenCASCADE.

#include "MeshModel.hxx"

#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

// ============================================================================
// Minimal shape stub used in tests (no OpenCASCADE dependency needed)
// ============================================================================

struct SimpleShape
{
    std::string id;
    explicit SimpleShape(const std::string& theId = "") : id(theId) {}
    bool operator==(const SimpleShape& other) const { return id == other.id; }
};

using TestModel = MeshModel<SimpleShape>;

// ============================================================================
// Shape management
// ============================================================================

TEST(MeshModel, EmptyModelHasNoShapes)
{
    TestModel model;
    EXPECT_EQ(model.NbShapes(), 0);
    EXPECT_EQ(model.NbGroups(), 0);
}

TEST(MeshModel, AddShapeReturnsIndex)
{
    TestModel model;
    int i0 = model.AddShape(SimpleShape("a"));
    int i1 = model.AddShape(SimpleShape("b"));
    EXPECT_EQ(i0, 0);
    EXPECT_EQ(i1, 1);
    EXPECT_EQ(model.NbShapes(), 2);
}

TEST(MeshModel, ShapeAccessByIndex)
{
    TestModel model;
    model.AddShape(SimpleShape("foo"));
    EXPECT_EQ(model.Shape(0).id, "foo");
}

TEST(MeshModel, ShapeAccessOutOfRangeThrows)
{
    TestModel model;
    model.AddShape(SimpleShape("x"));
    EXPECT_THROW(model.Shape(-1), std::out_of_range);
    EXPECT_THROW(model.Shape(1),  std::out_of_range);
}

TEST(MeshModel, MutableShapeAccess)
{
    TestModel model;
    model.AddShape(SimpleShape("before"));
    model.Shape(0).id = "after";
    EXPECT_EQ(model.Shape(0).id, "after");
}

// ============================================================================
// AddShape with explicit attributes
// ============================================================================

TEST(MeshModel, AddShapeWithAttributes)
{
    TestModel model;
    MeshModel_Attributes attrs(0.01, 0.3, true);
    int idx = model.AddShape(SimpleShape("s"), attrs);
    EXPECT_EQ(idx, 0);
    EXPECT_DOUBLE_EQ(model.Attributes(0).LinearDeflection(),  0.01);
    EXPECT_DOUBLE_EQ(model.Attributes(0).AngularDeflection(), 0.3);
    EXPECT_TRUE(model.Attributes(0).IsRelative());
}

// ============================================================================
// Attribute management
// ============================================================================

TEST(MeshModel, DefaultAttributesAfterAdd)
{
    TestModel model;
    model.AddShape(SimpleShape("s"));
    // Default attributes
    EXPECT_DOUBLE_EQ(model.Attributes(0).LinearDeflection(), 1.0e-3);
    EXPECT_EQ(model.Attributes(0).MeshOrder(), 1);
}

TEST(MeshModel, SetAttributes)
{
    TestModel model;
    model.AddShape(SimpleShape("s"));
    MeshModel_Attributes custom(0.005, 0.25);
    model.SetAttributes(0, custom);
    EXPECT_DOUBLE_EQ(model.Attributes(0).LinearDeflection(), 0.005);
}

TEST(MeshModel, SetAttributesOutOfRangeThrows)
{
    TestModel model;
    EXPECT_THROW(model.SetAttributes(0, MeshModel_Attributes()), std::out_of_range);
}

TEST(MeshModel, MutableAttributesAccess)
{
    TestModel model;
    model.AddShape(SimpleShape("s"));
    model.Attributes(0).SetMeshOrder(2);
    EXPECT_EQ(model.Attributes(0).MeshOrder(), 2);
}

// ============================================================================
// Group management
// ============================================================================

TEST(MeshModel, AddGroup)
{
    TestModel model;
    model.AddShape(SimpleShape("s1"));
    model.AddShape(SimpleShape("s2"));

    MeshModel_Group& grp = model.AddGroup("walls");
    grp.Add(0);
    grp.Add(1);

    EXPECT_EQ(model.NbGroups(), 1);
    EXPECT_EQ(model.Group(0).Name(), "walls");
    EXPECT_EQ(model.Group(0).NbShapes(), 2);
}

TEST(MeshModel, AddGroupReturnsSameGroupIfNameExists)
{
    TestModel model;
    MeshModel_Group& g1 = model.AddGroup("floors");
    MeshModel_Group& g2 = model.AddGroup("floors");
    EXPECT_EQ(&g1, &g2); // same object
    EXPECT_EQ(model.NbGroups(), 1);
}

TEST(MeshModel, FindGroupReturnsPointerWhenFound)
{
    TestModel model;
    model.AddGroup("roofs");
    EXPECT_NE(model.FindGroup("roofs"), nullptr);
    EXPECT_EQ(model.FindGroup("roofs")->Name(), "roofs");
}

TEST(MeshModel, FindGroupReturnsNullptrWhenNotFound)
{
    TestModel model;
    EXPECT_EQ(model.FindGroup("missing"), nullptr);
}

TEST(MeshModel, HasGroup)
{
    TestModel model;
    EXPECT_FALSE(model.HasGroup("walls"));
    model.AddGroup("walls");
    EXPECT_TRUE(model.HasGroup("walls"));
}

TEST(MeshModel, GroupIndexAccessOutOfRangeThrows)
{
    TestModel model;
    EXPECT_THROW(model.Group(-1), std::out_of_range);
    EXPECT_THROW(model.Group(0),  std::out_of_range);
}

TEST(MeshModel, MultipleGroupsIndependentMembership)
{
    TestModel model;
    model.AddShape(SimpleShape("a"));
    model.AddShape(SimpleShape("b"));
    model.AddShape(SimpleShape("c"));

    auto& walls  = model.AddGroup("walls");
    auto& floors = model.AddGroup("floors");

    walls.Add(0);
    walls.Add(1);
    floors.Add(2);

    EXPECT_EQ(model.NbGroups(), 2);
    EXPECT_TRUE(walls.Contains(0));
    EXPECT_TRUE(walls.Contains(1));
    EXPECT_FALSE(walls.Contains(2));
    EXPECT_TRUE(floors.Contains(2));
    EXPECT_FALSE(floors.Contains(0));
}

// ============================================================================
// Clear
// ============================================================================

TEST(MeshModel, Clear)
{
    TestModel model;
    model.AddShape(SimpleShape("x"));
    model.AddGroup("g");
    model.Clear();
    EXPECT_EQ(model.NbShapes(), 0);
    EXPECT_EQ(model.NbGroups(), 0);
}

// ============================================================================
// Copy and move semantics
// ============================================================================

TEST(MeshModel, CopyConstruction)
{
    TestModel original;
    original.AddShape(SimpleShape("copy_shape"));
    original.AddGroup("copy_group");

    TestModel copy = original;
    EXPECT_EQ(copy.NbShapes(), 1);
    EXPECT_EQ(copy.NbGroups(), 1);
    EXPECT_EQ(copy.Shape(0).id, "copy_shape");
    EXPECT_EQ(copy.Group(0).Name(), "copy_group");
}

TEST(MeshModel, MoveConstruction)
{
    TestModel source;
    source.AddShape(SimpleShape("move_shape"));
    source.AddGroup("move_group");

    TestModel moved = std::move(source);
    EXPECT_EQ(moved.NbShapes(), 1);
    EXPECT_EQ(moved.NbGroups(), 1);
    EXPECT_EQ(moved.Shape(0).id, "move_shape");
}
