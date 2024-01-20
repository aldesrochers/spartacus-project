// ============================================================================
// Copyright (C) 2021-
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the ipplied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Tepple Place, Suite 330, Boston, MA  02111-1307 USA
//
// Alexis L. Desrochers (alexisdesrochers@gmail.com)
//
// ============================================================================


#ifndef __pp_Triangle_hxx__
#define __pp_Triangle_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>

// Spartacus
#include <pp_LineSegment.hxx>

// ============================================================================
/*!
 *  \brief pp_Triangle
*/
// ============================================================================
class pp_Triangle
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT pp_Triangle();
    Standard_EXPORT pp_Triangle(const gp_Pnt& thePoint1,
                                const gp_Pnt& thePoint2,
                                const gp_Pnt& thePoint3);
    // destructors
    Standard_EXPORT ~pp_Triangle();

public:

    Standard_EXPORT Standard_Real       Area() const;
    Standard_EXPORT gp_Pnt              Centroid() const;
    Standard_EXPORT Standard_Real       Distance(const gp_Pnt& thePoint) const;
    Standard_EXPORT pp_LineSegment      Edge1() const;
    Standard_EXPORT pp_LineSegment      Edge2() const;
    Standard_EXPORT pp_LineSegment      Edge3() const;
    Standard_EXPORT gp_Pln              Plane() const;
    Standard_EXPORT const gp_Pnt&       Point1() const;
    Standard_EXPORT const gp_Pnt&       Point2() const;
    Standard_EXPORT const gp_Pnt&       Point3() const;
    Standard_EXPORT void                SetPoint1(const gp_Pnt& thePoint1);
    Standard_EXPORT void                SetPoint2(const gp_Pnt& thePoint2);
    Standard_EXPORT void                SetPoint3(const gp_Pnt& thePoint3);

private:

    gp_Pnt        myPoint1;
    gp_Pnt        myPoint2;
    gp_Pnt        myPoint3;

};

#endif // __pp_Triangle_hxx__
