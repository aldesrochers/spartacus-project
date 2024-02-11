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
#include <BRepCell_MakeShape.hxx>

// OpenCascade
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeShape::BRepCell_MakeShape()
    : myError(BRepCell_NoError),
    myIsDone(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeShape::~BRepCell_MakeShape()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
BRepCell_Error BRepCell_MakeShape::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief IsDone()
*/
// ============================================================================
Standard_Boolean BRepCell_MakeShape::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief NbVertices()
*/
// ============================================================================
Standard_Integer BRepCell_MakeShape::NbVertices() const
{
    return myVertices.Size();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Shape()
*/
// ============================================================================
BRepCell_MakeShape::operator TopoDS_Shape() const
{
    return Shape();
}

// ============================================================================
/*!
 *  \brief ResizeVertices()
*/
// ============================================================================
void BRepCell_MakeShape::ResizeVertices(const Standard_Integer theNbVertices,
                                        const Standard_Boolean toCopyData)
{
    myVertices.Resize(1, theNbVertices, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetDone()
*/
// ============================================================================
void BRepCell_MakeShape::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetError()
*/
// ============================================================================
void BRepCell_MakeShape::SetError(const BRepCell_Error &theError)
{
    myError = theError;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
*/
// ============================================================================
void BRepCell_MakeShape::SetNotDone()
{
    myIsDone = Standard_False;
}

// ============================================================================
/*!
 *  \brief SetShape()
*/
// ============================================================================
void BRepCell_MakeShape::SetShape(const TopoDS_Shape &theShape)
{
    myShape = theShape;
}

// ============================================================================
/*!
 *  \brief SetVertex()
*/
// ============================================================================
void BRepCell_MakeShape::SetVertex(const Standard_Integer theIndex,
                                   const TopoDS_Vertex &theVertex)
{
    myVertices.SetValue(theIndex, theVertex);
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& BRepCell_MakeShape::Shape() const
{
    return myShape;
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& BRepCell_MakeShape::Vertex(const Standard_Integer theIndex) const
{
    return TopoDS::Vertex(myVertices.Value(theIndex));
}


