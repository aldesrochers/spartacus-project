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
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& BRepCell_MakeCell::Edge(const Standard_Integer theIndex) const
{
    const TopoDS_Edge& anEdge = TopoDS::Edge(myEdges.FindKey(theIndex));
    return anEdge;
}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
const TopoDS_Face& BRepCell_MakeCell::Face(const Standard_Integer theIndex) const
{
    const TopoDS_Face& anFace = TopoDS::Face(myFaces.FindKey(theIndex));
    return anFace;
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
 *  \brief Shell()
*/
// ============================================================================
const TopoDS_Shell& BRepCell_MakeCell::Shell(const Standard_Integer theIndex) const
{
    const TopoDS_Shell& anShell = TopoDS::Shell(myShells.FindKey(theIndex));
    return anShell;
}

// ============================================================================
/*!
 *  \brief Solid()
*/
// ============================================================================
const TopoDS_Solid& BRepCell_MakeCell::Solid(const Standard_Integer theIndex) const
{
    const TopoDS_Solid& anSolid = TopoDS::Solid(mySolids.FindKey(theIndex));
    return anSolid;
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

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& BRepCell_MakeCell::Vertex(const Standard_Integer theIndex) const
{
    const TopoDS_Vertex& anVertex = TopoDS::Vertex(myVertices.FindKey(theIndex));
    return anVertex;
}

// ============================================================================
/*!
 *  \brief Wire()
*/
// ============================================================================
const TopoDS_Wire& BRepCell_MakeCell::Wire(const Standard_Integer theIndex) const
{
    const TopoDS_Wire& anWire = TopoDS::Wire(myWires.FindKey(theIndex));
    return anWire;
}

