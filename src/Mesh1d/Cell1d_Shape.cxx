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
#include <Cell1d_Shape.hxx>

// OpenCascade
#include <Precision.hxx>
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell1d_Shape::Cell1d_Shape()
    : myIsModified(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cell1d_Shape::~Cell1d_Shape()
{

}

// ============================================================================
/*!
 *  \brief Clear()
*/
// ============================================================================
void Cell1d_Shape::Clear()
{
    myEdges.Clear();
    myVertices.Clear();
    myShape.Nullify();
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& Cell1d_Shape::Edge(const Standard_Integer theIndex) const
{
    const TopoDS_Edge& aEdge = TopoDS::Edge(myEdges.Value(theIndex));
    return aEdge;
}

// ============================================================================
/*!
 *  \brief IsDegenerated()
*/
// ============================================================================
Standard_Boolean Cell1d_Shape::IsDegenerated() const
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
Standard_Boolean Cell1d_Shape::IsModified() const
{
    return myIsModified;
}

// ============================================================================
/*!
 *  \brief MustBeUpdated()
*/
// ============================================================================
Standard_Boolean Cell1d_Shape::MustBeUpdated() const
{
    return IsModified();
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer Cell1d_Shape::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbPoints()
*/
// ============================================================================
Standard_Integer Cell1d_Shape::NbPoints() const
{
    return myPoints.Size();
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer Cell1d_Shape::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt1d& Cell1d_Shape::Point(const Standard_Integer theIndex) const
{
    return myPoints.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief SetModified()
*/
// ============================================================================
void Cell1d_Shape::SetModified()
{
    myIsModified = Standard_True;
    Clear();
}

// ============================================================================
/*!
 *  \brief SetNotModified()
*/
// ============================================================================
void Cell1d_Shape::SetNotModified()
{
    myIsModified = Standard_False;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Cell1d_Shape::SetPoint(const Standard_Integer theIndex,
                            const gp_Pnt1d &thePoint)
{
    const gp_Pnt1d& aPoint = myPoints.Value(theIndex);
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
Standard_Boolean Cell1d_Shape::Update()
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
const TopoDS_Vertex& Cell1d_Shape::Vertex(const Standard_Integer theIndex) const
{
    const TopoDS_Vertex& aVertex = TopoDS::Vertex(myVertices.Value(theIndex));
    return aVertex;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Cell1d_Shape, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Cell1d_Shape, Standard_Transient)
