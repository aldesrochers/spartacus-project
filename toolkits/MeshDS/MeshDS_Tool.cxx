// ============================================================================
// Copyright (C) 2021-
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
//
// Alexis L. Desrochers (alexisdesrochers@gmail.com)
//
// ============================================================================


// Spartacus
#include <MeshDS_Point1d.hxx>
#include <MeshDS_Point2d.hxx>
#include <MeshDS_Point3d.hxx>
#include <MeshDS_TCell.hxx>
#include <MeshDS_TNode.hxx>
#include <MeshDS_Tool.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief CellType()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_Tool::CellType(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Dimensionality()->Invalid cell.");
    return aTCell->CellType();
}

// ============================================================================
/*!
 *  \brief Dimensionality()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshDS_Tool::Dimensionality(const MeshDS_Cell& theCell)
{
    const MeshDS_TCell* aTCell = static_cast<const MeshDS_TCell*>(theCell.TObject().get());
    if(aTCell == 0)
        throw Standard_NullObject("MeshDS_Tool::Dimensionality()->Invalid cell.");
    MeshAbs_TypeOfDimensionality aDimensionality = MeshAbs_DIM_0D;
    for(Standard_Integer i=1; i<=aTCell->NbNodes(); i++) {
        MeshDS_Node aNode = aTCell->Node(i);
        MeshAbs_TypeOfDimensionality aNodeDimensionality = MeshDS_Tool::Dimensionality(aNode);
        if(aNodeDimensionality > aDimensionality)
            aDimensionality = aNodeDimensionality;
    }
    return aDimensionality;
}

// ============================================================================
/*!
 *  \brief Dimensionality()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshDS_Tool::Dimensionality(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Dimensionality()->Invalid node.");
    const Handle(MeshDS_Point)& aPoint = aTNode->Point();
    if(aPoint->IsPoint1d())
        return MeshAbs_DIM_1D;
    else if(aPoint->IsPoint2d())
        return MeshAbs_DIM_2D;
    else if(aPoint->IsPoint3d())
        return MeshAbs_DIM_3D;
    else
        return MeshAbs_DIM_0D;
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
gp_Pnt MeshDS_Tool::Point(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Point()->Invalid node.");
    const Handle(MeshDS_Point)& aPoint = aTNode->Point();
    if(aPoint->IsPoint1d()) {
        const Handle(MeshDS_Point1d)& aPoint = Handle(MeshDS_Point1d)::DownCast(aPoint);
        const gp_Pnt1d& aPoint1d = aPoint->Point1d();
        return gp_Pnt(aPoint1d.X(), 0., 0.);
    } else if(aPoint->IsPoint2d()) {
        const Handle(MeshDS_Point2d)& aPoint = Handle(MeshDS_Point2d)::DownCast(aPoint);
        const gp_Pnt2d& aPoint2d = aPoint->Point2d();
        return gp_Pnt(aPoint2d.X(), aPoint2d.Y(), 0.);
    } else if(aPoint->IsPoint3d()) {
        const Handle(MeshDS_Point3d)& aPoint = Handle(MeshDS_Point3d)::DownCast(aPoint);
        return aPoint->Point3d();
    } else {
        return gp_Pnt(0., 0., 0.);
    }
}

// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
gp_Pnt1d MeshDS_Tool::Point1d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Point()->Invalid node.");
    const Handle(MeshDS_Point)& aPoint = aTNode->Point();
    if(!aPoint->IsPoint1d())
        throw Standard_DomainError("MeshDS_Node::Point()->Not a 1d point.");
    const Handle(MeshDS_Point1d)& aPoint1d = Handle(MeshDS_Point1d)::DownCast(aPoint);
    return aPoint1d->Point1d();
}

// ============================================================================
/*!
 *  \brief Point2d()
*/
// ============================================================================
gp_Pnt2d MeshDS_Tool::Point2d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Point()->Invalid node.");
    const Handle(MeshDS_Point)& aPoint = aTNode->Point();
    if(!aPoint->IsPoint2d())
        throw Standard_DomainError("MeshDS_Node::Point()->Not a 2d point.");
    const Handle(MeshDS_Point2d)& aPoint2d = Handle(MeshDS_Point2d)::DownCast(aPoint);
    return aPoint2d->Point2d();
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
gp_Pnt MeshDS_Tool::Point3d(const MeshDS_Node& theNode)
{
    const MeshDS_TNode* aTNode = static_cast<const MeshDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("MeshDS_Tool::Point()->Invalid node.");
    const Handle(MeshDS_Point)& aPoint = aTNode->Point();
    if(!aPoint->IsPoint3d())
        throw Standard_DomainError("MeshDS_Node::Point()->Not a 3d point.");
    const Handle(MeshDS_Point3d)& aPoint3d = Handle(MeshDS_Point3d)::DownCast(aPoint);
    return aPoint3d->Point3d();
}

