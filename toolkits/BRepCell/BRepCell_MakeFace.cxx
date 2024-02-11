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
#include <BRepCell_MakeFace.hxx>

// OpenCascade
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeFace::BRepCell_MakeFace()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeFace::~BRepCell_MakeFace()
{

}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& BRepCell_MakeFace::Edge(const Standard_Integer theIndex) const
{
    return TopoDS::Edge(myEdges.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Face()
*/
// ============================================================================
const TopoDS_Face& BRepCell_MakeFace::Face() const
{
    return TopoDS::Face(Shape());
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer BRepCell_MakeFace::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Face()
*/
// ============================================================================
BRepCell_MakeFace::operator TopoDS_Face() const
{
    return Face();
}

// ============================================================================
/*!
 *  \brief operator TopoDS_Wire()
*/
// ============================================================================
BRepCell_MakeFace::operator TopoDS_Wire() const
{
    return Wire();
}

// ============================================================================
/*!
 *  \brief ResizeEdges()
*/
// ============================================================================
void BRepCell_MakeFace::ResizeEdges(const Standard_Integer theNbEdges,
                                    const Standard_Boolean toCopyData)
{
    myEdges.Resize(1, theNbEdges, Standard_False);
}

// ============================================================================
/*!
 *  \brief SetEdge()
*/
// ============================================================================
void BRepCell_MakeFace::SetEdge(const Standard_Integer theIndex,
                                const TopoDS_Edge &theEdge)
{
    myEdges.SetValue(theIndex, theEdge);
}

// ============================================================================
/*!
 *  \brief Wire()
*/
// ============================================================================
const TopoDS_Wire& BRepCell_MakeFace::Wire() const
{
    return myWire;
}

