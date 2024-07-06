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


#ifndef __ModelAdaptor_Point_hxx__
#define __ModelAdaptor_Point_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Model_Point.hxx>
#include <ModelAbs_TypeOfDimensionality.hxx>


// ============================================================================
/*!
 *  \brief ModelAdaptor_Point
*/
// ============================================================================
class ModelAdaptor_Point
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelAdaptor_Point();
    Standard_EXPORT ModelAdaptor_Point(const Handle(Model_Point)& thePoint);
    // destructors
    Standard_EXPORT ~ModelAdaptor_Point();

public:

    Standard_EXPORT ModelAbs_TypeOfDimensionality   Dimensionality() const;
    Standard_EXPORT Standard_Boolean                IsPoint1d() const;
    Standard_EXPORT Standard_Boolean                IsPoint2d() const;
    Standard_EXPORT Standard_Boolean                IsPoint3d() const;
    Standard_EXPORT const gp_Pnt1d&                 Point1d() const;
    Standard_EXPORT const gp_Pnt2d&                 Point2d() const;
    Standard_EXPORT const gp_Pnt&                   Point3d() const;

public:

    Standard_EXPORT const Handle(Model_Point)&  Point() const;
    Standard_EXPORT void                        SetPoint(const Handle(Model_Point)& thePoint);

private:

    Handle(Model_Point)   myPoint;

};


#endif // __ModelAdaptor_Point_hxx__
