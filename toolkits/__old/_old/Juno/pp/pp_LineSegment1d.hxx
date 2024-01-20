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


#ifndef __pp_LineSegment1d_hxx__
#define __pp_LineSegment1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <gp_Pnt2d.hxx>

// ============================================================================
/*!
 *  \brief pp_LineSegment1d
*/
// ============================================================================
class pp_LineSegment1d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT pp_LineSegment1d(const Standard_Real thePoint1,
                                     const Standard_Real thePoint2);
    // destructors
    Standard_EXPORT ~pp_LineSegment1d();

public:

    Standard_EXPORT Standard_Real       Length() const;
    Standard_EXPORT Standard_Real       Point1() const;
    Standard_EXPORT Standard_Real       Point2() const;
    Standard_EXPORT void                SetPoint1(const Standard_Real thePoint1);
    Standard_EXPORT void                SetPoint2(const Standard_Real thePoint2);

private:

    Standard_Real   myPoint1;
    Standard_Real   myPoint2;

};

#endif // __pp_LineSegment1d_hxx__
