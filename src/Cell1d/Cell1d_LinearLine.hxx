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


#ifndef __Cell1d_LinearLine_hxx__
#define __Cell1d_LinearLine_hxx__

// Spartacus
#include <Cell1d_Shape.hxx>

// Forward declarations
class Cell1d_LinearLine;

// Handles
DEFINE_STANDARD_HANDLE(Cell1d_LinearLine, Cell1d_Shape)


// ============================================================================
/*!
 *  \brief Cell1d_LinearLine
*/
// ============================================================================
class Cell1d_LinearLine : public Cell1d_Shape
{

public:
    // constructors
    Standard_EXPORT Cell1d_LinearLine();
    Standard_EXPORT Cell1d_LinearLine(const gp_Pnt1d& thePoint1,
                                      const gp_Pnt1d& thePoint2);
    // destructors
    Standard_EXPORT ~Cell1d_LinearLine();

public:

    Standard_EXPORT Standard_Boolean    Build() Standard_OVERRIDE;

public:

    DEFINE_STANDARD_RTTIEXT(Cell1d_LinearLine, Cell1d_Shape)

};


#endif // __Cell1d_LinearLine_hxx__
