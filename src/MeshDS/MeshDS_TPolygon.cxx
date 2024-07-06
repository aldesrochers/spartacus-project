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
#include <MeshDS_TPolygon.hxx>




// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TPolygon::MeshDS_TPolygon()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TPolygon::~MeshDS_TPolygon()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const MeshDS_Cell& MeshDS_TPolygon::Cell() const
{
    return myCell;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TPolygon::ObjectType() const
{
    return MeshAbs_OBJ_Vertex;
}

// ============================================================================
/*!
 *  \brief Wire()
*/
// ============================================================================
const TopoDS_Wire& MeshDS_TPolygon::Wire() const
{
    return myWire;
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void MeshDS_TPolygon::SetCell(const MeshDS_Cell& theCell)
{
    myCell = theCell;
}

// ============================================================================
/*!
 *  \brief SetWire()
*/
// ============================================================================
void MeshDS_TPolygon::SetWire(const TopoDS_Wire &theWire)
{
    myWire = theWire;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
const MeshDS_SequenceOfObject& MeshDS_TPolygon::Vertices() const
{
    return myVertices;
}

// ============================================================================
/*!
 *  \brief Vertices()
*/
// ============================================================================
MeshDS_SequenceOfObject& MeshDS_TPolygon::Vertices()
{
    return myVertices;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TPolygon, MeshDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TPolygon, MeshDS_TObject)
