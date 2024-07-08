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
#include <Mesh1d_Vertex.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRep_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Vertex::Mesh1d_Vertex()
{
    Initialize(gp_Pnt1d(0.));
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Vertex::Mesh1d_Vertex(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_Vertex::~Mesh1d_Vertex()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void Mesh1d_Vertex::Initialize(const gp_Pnt1d &thePoint)
{
    const gp_Pnt& aPoint = gp_Pnt(thePoint.X(), 0., 0.);
    myVertex = BRepBuilderAPI_MakeVertex(aPoint).Vertex();
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const TopoDS_Vertex& Mesh1d_Vertex::Vertex() const
{
    return myVertex;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_Vertex, Mesh1d_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_Vertex, Mesh1d_Object)
