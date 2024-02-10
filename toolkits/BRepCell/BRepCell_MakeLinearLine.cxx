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
#include <BRepCell_MakeLinearLine.hxx>
#include <BRepPoly_MakeLine.hxx>

// OpenCascade
#include <BRepLib_MakeVertex.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const gp_Pnt& thePoint1,
                                                 const gp_Pnt& thePoint2)
{
    Initialize(thePoint1, thePoint2);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_MakeLinearLine::BRepCell_MakeLinearLine(const TopoDS_Vertex &theVertex1,
                                                 const TopoDS_Vertex &theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_MakeLinearLine::~BRepCell_MakeLinearLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void BRepCell_MakeLinearLine::Initialize(const gp_Pnt &thePoint1,
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
void BRepCell_MakeLinearLine::Initialize(const TopoDS_Vertex &theVertex1,
                                         const TopoDS_Vertex &theVertex2)
{
    myVertex1 = theVertex1;
    myVertex2 = theVertex2;

    BRepPoly_MakeLine aLineBuilder(myVertex1, myVertex2);
    if(!aLineBuilder.IsDone()) {
        if(aLineBuilder.Error() == BRepPoly_LineThroughIdenticPointsError) {
            myError = BRepCell_LineThroughIdenticPointsError;
        } else {
            myError = BRepCell_UnknownError;
        }
        return;
    }
    myEdge = aLineBuilder.Edge();

    myIsDone = Standard_True;
}
