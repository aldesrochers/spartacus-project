// Tests for MeshModel_Group

#include "MeshModel_Group.hxx"

#include <gtest/gtest.h>
#include <stdexcept>

// ============================================================================
// Construction
// ============================================================================

TEST(MeshModel_Group, Construction)
{
    MeshModel_Group grp("walls");
    EXPECT_EQ(grp.Name(), "walls");
    EXPECT_EQ(grp.NbShapes(), 0);
}

TEST(MeshModel_Group, ConstructionThrowsOnEmptyName)
{
    EXPECT_THROW(MeshModel_Group(""), std::invalid_argument);
}

// ============================================================================
// Name
// ============================================================================

TEST(MeshModel_Group, SetName)
{
    MeshModel_Group grp("initial");
    grp.SetName("renamed");
    EXPECT_EQ(grp.Name(), "renamed");
}

TEST(MeshModel_Group, SetNameThrowsOnEmptyName)
{
    MeshModel_Group grp("valid");
    EXPECT_THROW(grp.SetName(""), std::invalid_argument);
}

// ============================================================================
// Add / Contains / NbShapes
// ============================================================================

TEST(MeshModel_Group, AddAndContains)
{
    MeshModel_Group grp("g");
    grp.Add(0);
    grp.Add(3);
    grp.Add(7);
    EXPECT_EQ(grp.NbShapes(), 3);
    EXPECT_TRUE(grp.Contains(0));
    EXPECT_TRUE(grp.Contains(3));
    EXPECT_TRUE(grp.Contains(7));
    EXPECT_FALSE(grp.Contains(1));
}

TEST(MeshModel_Group, AddDuplicateIgnored)
{
    MeshModel_Group grp("g");
    grp.Add(5);
    grp.Add(5); // duplicate
    EXPECT_EQ(grp.NbShapes(), 1);
}

TEST(MeshModel_Group, AddThrowsOnNegativeIndex)
{
    MeshModel_Group grp("g");
    EXPECT_THROW(grp.Add(-1), std::invalid_argument);
}

// ============================================================================
// ShapeIndex
// ============================================================================

TEST(MeshModel_Group, ShapeIndex)
{
    MeshModel_Group grp("g");
    grp.Add(10);
    grp.Add(20);
    EXPECT_EQ(grp.ShapeIndex(0), 10);
    EXPECT_EQ(grp.ShapeIndex(1), 20);
}

TEST(MeshModel_Group, ShapeIndexOutOfRange)
{
    MeshModel_Group grp("g");
    grp.Add(0);
    EXPECT_THROW(grp.ShapeIndex(-1), std::out_of_range);
    EXPECT_THROW(grp.ShapeIndex(1),  std::out_of_range);
}

// ============================================================================
// Remove
// ============================================================================

TEST(MeshModel_Group, Remove)
{
    MeshModel_Group grp("g");
    grp.Add(1);
    grp.Add(2);
    grp.Add(3);
    grp.Remove(2);
    EXPECT_EQ(grp.NbShapes(), 2);
    EXPECT_FALSE(grp.Contains(2));
    EXPECT_TRUE(grp.Contains(1));
    EXPECT_TRUE(grp.Contains(3));
}

TEST(MeshModel_Group, RemoveAbsentIndexSilent)
{
    MeshModel_Group grp("g");
    grp.Add(1);
    // removing a non-existent index should be a no-op
    EXPECT_NO_THROW(grp.Remove(99));
    EXPECT_EQ(grp.NbShapes(), 1);
}

// ============================================================================
// Clear
// ============================================================================

TEST(MeshModel_Group, Clear)
{
    MeshModel_Group grp("g");
    grp.Add(0);
    grp.Add(1);
    grp.Clear();
    EXPECT_EQ(grp.NbShapes(), 0);
    EXPECT_FALSE(grp.Contains(0));
}

// ============================================================================
// Indices
// ============================================================================

TEST(MeshModel_Group, Indices)
{
    MeshModel_Group grp("g");
    grp.Add(4);
    grp.Add(8);
    const auto& idx = grp.Indices();
    ASSERT_EQ(idx.size(), 2u);
    EXPECT_EQ(idx[0], 4);
    EXPECT_EQ(idx[1], 8);
}
