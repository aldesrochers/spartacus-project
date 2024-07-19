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


#ifndef __cp_QuadraticLine_hxx__
#define __cp_QuadraticLine_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Lin.hxx>

// ============================================================================
/*!
 *  \brief cp_QuadraticLine
*/
// ============================================================================
class cp_QuadraticLine
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT cp_QuadraticLine();
    // destructors
    Standard_EXPORT ~cp_QuadraticLine();

public:

    Standard_EXPORT gp_Dir          Direction() const;
    Standard_EXPORT Standard_Real   Length() const;
    Standard_EXPORT gp_Pnt          Location() const;
    Standard_EXPORT gp_Lin          Line() const;

public:

    Standard_EXPORT const gp_Pnt&   Point1() const {return myPoints[0];}
    Standard_EXPORT const gp_Pnt&   Point2() const {return myPoints[1];}
    Standard_EXPORT void    SetPoint1(const gp_Pnt& thePoint) {myPoints[0] = thePoint;}
    Standard_EXPORT void    SetPoint2(const gp_Pnt& thePoint) {myPoints[1] = thePoint;}

private:

    gp_Pnt  myPoints[2];

};


#endif // __cp_QuadraticLine_hxx__
