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
#include <BRepCell_MakeEdge.hxx>

// OpenCascade
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeEdge::BRepCell_MakeEdge()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeEdge::~BRepCell_MakeEdge()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void BRepCell_MakeEdge::Build()
{

}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer BRepCell_MakeEdge::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Edge()
*/
// ============================================================================
BRepCell_MakeEdge::operator TopoDS_Edge() const
{
    return Edge();
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& BRepCell_MakeEdge::Edge() const
{
    return TopoDS::Edge(Shape());
}

