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
#include <MeshDS.hxx>
#include <MeshDS_TCell.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TCell::MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TCell::~MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief Edges()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TCell::Edges() const
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief Edges()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TCell::Edges()
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief Faces()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TCell::Faces() const
{
    return myFaces;
}

// ============================================================================
/*!
 *  \brief Faces()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TCell::Faces()
{
    return myFaces;
}

// ============================================================================
/*!
 *  \brief LinkedGroups()
*/
// ============================================================================
const MeshDS_ListOfObject& MeshDS_TCell::LinkedGroups() const
{
    return myLinkedGroups;
}

// ============================================================================
/*!
 *  \brief LinkedGroups()
*/
// ============================================================================
MeshDS_ListOfObject& MeshDS_TCell::LinkedGroups()
{
    return myLinkedGroups;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TCell::ObjectType() const
{
    return MeshAbs_OBJ_Cell;
}

// ============================================================================
/*!
 *  \brief Polygons()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TCell::Polygons() const
{
    return myPolygons;
}

// ============================================================================
/*!
 *  \brief Polygons()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TCell::Polygons()
{
    return myPolygons;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TCell::Vertices() const
{
    return myVertices;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TCell::Vertices()
{
    return myVertices;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject)
