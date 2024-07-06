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
#include <Cell1d_LinearLine.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell1d_LinearLine::Cell1d_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cell1d_LinearLine::Cell1d_LinearLine(const gp_Pnt1d& thePoint1,
                                     const gp_Pnt1d& thePoint2)
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
Cell1d_LinearLine::~Cell1d_LinearLine()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
Standard_Boolean Cell1d_LinearLine::Build()
{

}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Cell1d_LinearLine, Cell1d_Shape)
IMPLEMENT_STANDARD_RTTIEXT(Cell1d_LinearLine, Cell1d_Shape)
