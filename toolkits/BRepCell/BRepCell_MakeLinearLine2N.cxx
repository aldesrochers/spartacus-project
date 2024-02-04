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
#include <BRepCell_MakeLinearLine2N.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeVertex.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine2N::BRepCell_MakeLinearLine2N(const gp_Pnt& thePoint1,
                                                     const gp_Pnt& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine2N::BRepCell_MakeLinearLine2N(const TopoDS_Vertex &theVertex1,
                                                     const TopoDS_Vertex &theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeLinearLine2N::~BRepCell_MakeLinearLine2N()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine2N::Initialize(const gp_Pnt &thePoint1,
                                           const gp_Pnt &thePoint2)
{
    TopoDS_Vertex aVertex1 = BRepLib_MakeVertex(thePoint1).Vertex();
    TopoDS_Vertex aVertex2 = BRepLib_MakeVertex(thePoint2).Vertex();
    Initialize(aVertex1, aVertex2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine2N::Initialize(const TopoDS_Vertex &theVertex1,
                                           const TopoDS_Vertex &theVertex2)
{
    // resize internal containers
    myVertices.Resize(1, 2, Standard_False);
    myEdges.Resize(1, 1, Standard_False);

    // define vertices
    myVertices.SetValue(1, theVertex1);
    myVertices.SetValue(2, theVertex2);

    // make edge
    BRepLib_MakeEdge aBuilder(theVertex1, theVertex2);
    if(!aBuilder.IsDone()) {
        if(aBuilder.Error() == BRepLib_EdgeError::BRepLib_LineThroughIdenticPoints)

    }
}
