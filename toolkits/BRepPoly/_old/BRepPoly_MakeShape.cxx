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
#include <BRepPoly_MakeShape.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPoly_MakeShape::BRepPoly_MakeShape()
    : myIsDone(Standard_False),
    myError(BRepPoly_NoError)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepPoly_MakeShape::~BRepPoly_MakeShape()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void BRepPoly_MakeShape::Build()
{

}

// ============================================================================
/*!
 *  \brief Check()
*/
// ============================================================================
void BRepPoly_MakeShape::Check()const
{
    if (!myIsDone)
        throw StdFail_NotDone("BRepPoly_MakeShape::Check() -> Not done.");
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& BRepPoly_MakeShape::Edge(const Standard_Integer theIndex) const
{
    return TopoDS::Edge(myEdges.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepPoly_Error BRepPoly_MakeShape::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
const TopoDS_Face& BRepPoly_MakeShape::Face(const Standard_Integer theIndex) const
{
    return TopoDS::Face(myFaces.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief IsDone()
*/
// ============================================================================
Standard_Boolean BRepPoly_MakeShape::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbFaces()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbFaces() const
{
    return myFaces.Size();
}

// ============================================================================
/*!
 *  \brief NbShells()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbShells() const
{
    return myShells.Size();
}

// ============================================================================
/*!
 *  \brief NbSolids()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbSolids() const
{
    return mySolids.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief NbWires()
*/
// ============================================================================
Standard_Integer BRepPoly_MakeShape::NbWires() const
{
    return myWires.Size();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Shape()
*/
// ============================================================================
BRepPoly_MakeShape::operator TopoDS_Shape()
{
    return Shape();
}

// ============================================================================
/*!
 *  \brief SetDone()
*/
// ============================================================================
void BRepPoly_MakeShape::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
*/
// ============================================================================
void BRepPoly_MakeShape::SetNotDone()
{
    myIsDone = Standard_False;
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& BRepPoly_MakeShape::Shape() const
{
    if (!IsDone()) {
        ((BRepPoly_MakeShape*) (void*) this)->Build();
        Check();
    }
    return myShape;
}

// ============================================================================
/*!
 *  \brief Shell()
*/
// ============================================================================
const TopoDS_Shell& BRepPoly_MakeShape::Shell(const Standard_Integer theIndex) const
{
    return TopoDS::Shell(myShells.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Solid()
*/
// ============================================================================
const TopoDS_Solid& BRepPoly_MakeShape::Solid(const Standard_Integer theIndex) const
{
    return TopoDS::Solid(mySolids.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Vertice()
*/
// ============================================================================
const TopoDS_Vertex& BRepPoly_MakeShape::Vertex(const Standard_Integer theIndex) const
{
    return TopoDS::Vertex(myVertices.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Wire()
*/
// ============================================================================
const TopoDS_Wire& BRepPoly_MakeShape::Wire(const Standard_Integer theIndex) const
{
    return TopoDS::Wire(myWires.Value(theIndex));
}
