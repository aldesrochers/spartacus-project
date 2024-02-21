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
#include <BRepPoly_MakeLine.hxx>

// OpenCascade
#include <BRepLib_MakeEdge.hxx>
#include <TopoDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPoly_MakeLine::BRepPoly_MakeLine(const TopoDS_Vertex& theVertex1,
                                     const TopoDS_Vertex& theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepPoly_MakeLine::~BRepPoly_MakeLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepPoly_MakeLine::Initialize(const TopoDS_Vertex &theVertex1,
                                   const TopoDS_Vertex &theVertex2)
{
    myVertices.Resize(1, 2, Standard_False);
    myEdges.Resize(1, 1, Standard_False);

    // setup vertices
    myVertices.SetValue(1, theVertex1);
    myVertices.SetValue(2, theVertex2);

    // build edge
    BRepLib_MakeEdge aBuilder(theVertex1, theVertex2);
    if(!aBuilder.IsDone()) {
        if(aBuilder.Error() == BRepLib_LineThroughIdenticPoints) {
            myError = BRepPoly_LineThroughIdenticPointsError;
        } else {
            myError = BRepPoly_UnknownError;
        }
        return;
    }
    TopoDS_Edge anEdge = aBuilder.Edge();
    myEdges.SetValue(1, anEdge);

    // set shape, internal state
    myShape = anEdge;
    myIsDone = Standard_True;
}
