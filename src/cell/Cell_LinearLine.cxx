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

#include <iostream>
using namespace std;

// Spartacus
#include <BRepCell_MakeLine.hxx>
#include <Cell_LinearLine.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell_LinearLine::Cell_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell_LinearLine::Cell_LinearLine(const gp_Pnt& thePoint1,
                                     const gp_Pnt& thePoint2)
{
    myPoints.Append(thePoint1);
    myPoints.Append(thePoint2);
    Build();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cell_LinearLine::~Cell_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
Standard_Boolean Cell_LinearLine::Build()
{
    /*
    gp_Pnt aPoint1 = Point(1);
    gp_Pnt aPoint2 = Point(2);
    BRepCell_MakeLine aBuilder(aPoint1, aPoint2);
    if(!aBuilder.IsDone())
        return Standard_False;
    myEdges = aBuilder.Edges();
    myVertices = aBuilder.Vertices();
    myShape = aBuilder.Shape();
    SetNotModified();
    return Standard_True;
*/
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Cell_LinearLine, Cell_Shape)
IMPLEMENT_STANDARD_RTTIEXT(Cell_LinearLine, Cell_Shape)
