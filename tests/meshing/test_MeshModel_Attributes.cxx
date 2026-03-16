// Tests for MeshModel_Attributes

#include "MeshModel_Attributes.hxx"

#include <gtest/gtest.h>
#include <stdexcept>

// ============================================================================
// Default construction
// ============================================================================

TEST(MeshModel_Attributes, DefaultConstruction)
{
    MeshModel_Attributes attrs;
    EXPECT_DOUBLE_EQ(attrs.LinearDeflection(),  1.0e-3);
    EXPECT_DOUBLE_EQ(attrs.AngularDeflection(), 0.5);
    EXPECT_FALSE(attrs.IsRelative());
    EXPECT_DOUBLE_EQ(attrs.MinSize(), 0.0);
    EXPECT_DOUBLE_EQ(attrs.MaxSize(), 0.0);
    EXPECT_EQ(attrs.MeshOrder(), 1);
}

// ============================================================================
// Parameterised construction
// ============================================================================

TEST(MeshModel_Attributes, ParameterisedConstruction)
{
    MeshModel_Attributes attrs(0.01, 0.3, true);
    EXPECT_DOUBLE_EQ(attrs.LinearDeflection(),  0.01);
    EXPECT_DOUBLE_EQ(attrs.AngularDeflection(), 0.3);
    EXPECT_TRUE(attrs.IsRelative());
}

TEST(MeshModel_Attributes, ParameterisedConstructionDefaultRelative)
{
    MeshModel_Attributes attrs(0.005, 0.2);
    EXPECT_FALSE(attrs.IsRelative());
}

TEST(MeshModel_Attributes, ParameterisedConstructionThrowsOnBadLinear)
{
    EXPECT_THROW(MeshModel_Attributes(0.0, 0.5), std::invalid_argument);
    EXPECT_THROW(MeshModel_Attributes(-1.0, 0.5), std::invalid_argument);
}

TEST(MeshModel_Attributes, ParameterisedConstructionThrowsOnBadAngular)
{
    EXPECT_THROW(MeshModel_Attributes(0.01, 0.0), std::invalid_argument);
    EXPECT_THROW(MeshModel_Attributes(0.01, -0.1), std::invalid_argument);
}

// ============================================================================
// Setters
// ============================================================================

TEST(MeshModel_Attributes, SetLinearDeflection)
{
    MeshModel_Attributes attrs;
    attrs.SetLinearDeflection(0.005);
    EXPECT_DOUBLE_EQ(attrs.LinearDeflection(), 0.005);
}

TEST(MeshModel_Attributes, SetLinearDeflectionThrowsOnBadValue)
{
    MeshModel_Attributes attrs;
    EXPECT_THROW(attrs.SetLinearDeflection(0.0),  std::invalid_argument);
    EXPECT_THROW(attrs.SetLinearDeflection(-1.0), std::invalid_argument);
}

TEST(MeshModel_Attributes, SetAngularDeflection)
{
    MeshModel_Attributes attrs;
    attrs.SetAngularDeflection(0.2);
    EXPECT_DOUBLE_EQ(attrs.AngularDeflection(), 0.2);
}

TEST(MeshModel_Attributes, SetAngularDeflectionThrowsOnBadValue)
{
    MeshModel_Attributes attrs;
    EXPECT_THROW(attrs.SetAngularDeflection(0.0),  std::invalid_argument);
    EXPECT_THROW(attrs.SetAngularDeflection(-0.1), std::invalid_argument);
}

TEST(MeshModel_Attributes, SetRelative)
{
    MeshModel_Attributes attrs;
    EXPECT_FALSE(attrs.IsRelative());
    attrs.SetRelative(true);
    EXPECT_TRUE(attrs.IsRelative());
    attrs.SetRelative(false);
    EXPECT_FALSE(attrs.IsRelative());
}

TEST(MeshModel_Attributes, SetMinSize)
{
    MeshModel_Attributes attrs;
    attrs.SetMinSize(0.001);
    EXPECT_DOUBLE_EQ(attrs.MinSize(), 0.001);
    attrs.SetMinSize(0.0);
    EXPECT_DOUBLE_EQ(attrs.MinSize(), 0.0);
}

TEST(MeshModel_Attributes, SetMinSizeThrowsOnNegative)
{
    MeshModel_Attributes attrs;
    EXPECT_THROW(attrs.SetMinSize(-1.0), std::invalid_argument);
}

TEST(MeshModel_Attributes, SetMaxSize)
{
    MeshModel_Attributes attrs;
    attrs.SetMaxSize(1.0);
    EXPECT_DOUBLE_EQ(attrs.MaxSize(), 1.0);
    attrs.SetMaxSize(0.0);
    EXPECT_DOUBLE_EQ(attrs.MaxSize(), 0.0);
}

TEST(MeshModel_Attributes, SetMaxSizeThrowsOnNegative)
{
    MeshModel_Attributes attrs;
    EXPECT_THROW(attrs.SetMaxSize(-0.5), std::invalid_argument);
}

TEST(MeshModel_Attributes, SetMeshOrder)
{
    MeshModel_Attributes attrs;
    attrs.SetMeshOrder(2);
    EXPECT_EQ(attrs.MeshOrder(), 2);
    attrs.SetMeshOrder(1);
    EXPECT_EQ(attrs.MeshOrder(), 1);
}

TEST(MeshModel_Attributes, SetMeshOrderThrowsOnBadOrder)
{
    MeshModel_Attributes attrs;
    EXPECT_THROW(attrs.SetMeshOrder(0), std::invalid_argument);
    EXPECT_THROW(attrs.SetMeshOrder(3), std::invalid_argument);
}
