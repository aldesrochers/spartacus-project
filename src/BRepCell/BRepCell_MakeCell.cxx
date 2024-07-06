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
#include <BRepCell_MakeCell.hxx>

// OpenCascade
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeCell::BRepCell_MakeCell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeCell::~BRepCell_MakeCell()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void BRepCell_MakeCell::Build()
{

}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbFaces()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbFaces() const
{
    return myFaces.Size();
}

// ============================================================================
/*!
 *  \brief NbShells()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbShells() const
{
    return myShells.Size();
}

// ============================================================================
/*!
 *  \brief NbSolids()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbSolids() const
{
    return mySolids.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief NbWires()
*/
// ============================================================================
Standard_Integer BRepCell_MakeCell::NbWires() const
{
    return myWires.Size();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Shape()
*/
// ============================================================================
BRepCell_MakeCell::operator TopoDS_Shape() const
{
    return Shape();
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& BRepCell_MakeCell::Shape() const
{
    if (!IsDone()) {
        ((BRepCell_MakeCell*) (void*) this)->Build();
        Check();
    }
    return myShape;
}


