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


#ifndef __Triangle_Region_hxx__
#define __Triangle_Region_hxx__

// Spartacus
#include <Triangle_Object.hxx>

// OpenCascade
#include <gp_Pnt2d.hxx>

// Forward declarations
class Triangle_Region;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_Region, Triangle_Object)


// ============================================================================
/*!
 *  \brief Triangle_Region
*/
// ============================================================================
class Triangle_Region : public Triangle_Object
{

public:
    // constructors
    Standard_EXPORT Triangle_Region();
    Standard_EXPORT Triangle_Region(const gp_Pnt2d& thePoint);
    // destructors
    Standard_EXPORT ~Triangle_Region();

public:

    Standard_EXPORT Standard_Integer    Attribute() const;
    Standard_EXPORT gp_Pnt2d&           ChangePoint();
    Standard_EXPORT Standard_Real       MaxArea() const;
    Standard_EXPORT const gp_Pnt2d&     Point() const;
    Standard_EXPORT void                SetAttribute(const Standard_Integer theAttribute);
    Standard_EXPORT void                SetMaxArea(const Standard_Real theMaxArea);
    Standard_EXPORT void                SetPoint(const gp_Pnt2d& thePoint);

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_Region, Triangle_Object)

private:

    Standard_Integer    myAttribute;
    Standard_Real       myMaxArea;
    gp_Pnt2d            myPoint;

};


#endif // __Triangle_Region_hxx__
