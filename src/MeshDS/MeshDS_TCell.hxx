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


#ifndef __MeshDS_TCell_hxx__
#define __MeshDS_TCell_hxx__

// Spartacus
#include <MeshAbs_TypeOfCell.hxx>
#include <MeshDS_ListOfObject.hxx>
#include <MeshDS_SequenceOfObject.hxx>
#include <MeshDS_TObject.hxx>

// OpenCascade
#include <TopoDS_Shape.hxx>

// Forward declarations
class MeshDS_TCell;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject)


// ============================================================================
/*!
 *  \brief MeshDS_TCell
*/
// ============================================================================
class MeshDS_TCell : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TCell();
    // destructors
    Standard_EXPORT ~MeshDS_TCell();

public:

    Standard_EXPORT MeshAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_SequenceOfObject&  Edges() const;
    Standard_EXPORT MeshDS_SequenceOfObject&        Edges();
    Standard_EXPORT const MeshDS_SequenceOfObject&  Faces() const;
    Standard_EXPORT MeshDS_SequenceOfObject&        Faces();
    Standard_EXPORT const MeshDS_ListOfObject&      LinkedGroups() const;
    Standard_EXPORT MeshDS_ListOfObject&            LinkedGroups();
    Standard_EXPORT const MeshDS_SequenceOfObject&  Polygons() const;
    Standard_EXPORT MeshDS_SequenceOfObject&        Polygons();
    Standard_EXPORT const MeshDS_SequenceOfObject&  Vertices() const;
    Standard_EXPORT MeshDS_SequenceOfObject&        Vertices();

private:

    MeshDS_SequenceOfObject         myEdges;
    MeshDS_SequenceOfObject         myFaces;
    MeshDS_ListOfObject             myLinkedGroups;
    MeshDS_SequenceOfObject         myPolygons;
    MeshDS_SequenceOfObject         myVertices;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject)

};


#endif // __MeshDS_TCell_hxx__
