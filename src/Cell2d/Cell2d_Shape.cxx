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
#include <Cell2d_Shape.hxx>

// OpenCascade
#include <Precision.hxx>
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell2d_Shape::Cell2d_Shape()
    : myIsModified(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cell2d_Shape::~Cell2d_Shape()
{

}

// ============================================================================
/*!
 *  \brief Clear()
*/
// ============================================================================
void Cell2d_Shape::Clear()
{
    myEdges.Clear();
    myFaces.Clear();
    myVertices.Clear();
    myWires.Clear();
    myShape.Nullify();
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& Cell2d_Shape::Edge(const Standard_Integer theIndex) const
{
    const TopoDS_Edge& aEdge = TopoDS::Edge(myEdges.Value(theIndex));
    return aEdge;
}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
const TopoDS_Face& Cell2d_Shape::Face(const Standard_Integer theIndex) const
{
    const TopoDS_Face& aFace = TopoDS::Face(myFaces.Value(theIndex));
    return aFace;
}

// ============================================================================
/*!
 *  \brief IsDegenerated()
*/
// ============================================================================
Standard_Boolean Cell2d_Shape::IsDegenerated() const
{
    if(myShape.IsNull())
        return Standard_True;
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsModified()
*/
// ============================================================================
Standard_Boolean Cell2d_Shape::IsModified() const
{
    return myIsModified;
}

// ============================================================================
/*!
 *  \brief MustBeUpdated()
*/
// ============================================================================
Standard_Boolean Cell2d_Shape::MustBeUpdated() const
{
    return IsModified();
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer Cell2d_Shape::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbFaces()
*/
// ============================================================================
Standard_Integer Cell2d_Shape::NbFaces() const
{
    return myFaces.Size();
}

// ============================================================================
/*!
 *  \brief NbPoints()
*/
// ============================================================================
Standard_Integer Cell2d_Shape::NbPoints() const
{
    return myPoints.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer Cell2d_Shape::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief NbWires()
*/
// ============================================================================
Standard_Integer Cell2d_Shape::NbWires() const
{
    return myWires.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& Cell2d_Shape::Point(const Standard_Integer theIndex) const
{
    return myPoints.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief SetModified()
*/
// ============================================================================
void Cell2d_Shape::SetModified()
{
    myIsModified = Standard_True;
    Clear();
}

// ============================================================================
/*!
 *  \brief SetNotModified()
*/
// ============================================================================
void Cell2d_Shape::SetNotModified()
{
    myIsModified = Standard_False;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Cell2d_Shape::SetPoint(const Standard_Integer theIndex,
                            const gp_Pnt2d &thePoint)
{
    const gp_Pnt2d& aPoint = myPoints.Value(theIndex);
    if(!thePoint.IsEqual(aPoint, Precision::Confusion())) {
        myPoints.SetValue(theIndex, thePoint);
        SetModified();
    }
}

// ============================================================================
/*!
 *  \brief Update()
*/
// ============================================================================
Standard_Boolean Cell2d_Shape::Update()
{
    if(!IsModified())
        return Standard_True;
    return Build();
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& Cell2d_Shape::Vertex(const Standard_Integer theIndex) const
{
    const TopoDS_Vertex& aVertex = TopoDS::Vertex(myVertices.Value(theIndex));
    return aVertex;
}

// ============================================================================
/*!
 *  \brief Wire()
*/
// ============================================================================
const TopoDS_Wire& Cell2d_Shape::Wire(const Standard_Integer theIndex) const
{
    const TopoDS_Wire& aWire = TopoDS::Wire(myVertices.Value(theIndex));
    return aWire;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Cell2d_Shape, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Cell2d_Shape, Standard_Transient)
