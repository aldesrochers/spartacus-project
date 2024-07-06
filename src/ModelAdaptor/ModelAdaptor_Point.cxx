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
#include <Model_Point1d.hxx>
#include <Model_Point2d.hxx>
#include <Model_Point3d.hxx>
#include <ModelAdaptor_Point.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAdaptor_Point::ModelAdaptor_Point()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelAdaptor_Point::ModelAdaptor_Point(const Handle(Model_Point)& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelAdaptor_Point::~ModelAdaptor_Point()
{

}

// ============================================================================
/*!
 *  \brief Dimensionality()
*/
// ============================================================================
ModelAbs_TypeOfDimensionality ModelAdaptor_Point::Dimensionality() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType == STANDARD_TYPE(Model_Point1d)) {
        return ModelAbs_DIM_1d;
    } else if(aType == STANDARD_TYPE(Model_Point2d)) {
        return ModelAbs_DIM_2d;
    } else if(aType == STANDARD_TYPE(Model_Point3d)) {
        return ModelAbs_DIM_3d;
    } else {
        return ModelAbs_DIM_0d;
    }
}

// ============================================================================
/*!
 *  \brief IsPoint1d()
*/
// ============================================================================
Standard_Boolean ModelAdaptor_Point::IsPoint1d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType == STANDARD_TYPE(Model_Point1d)) {
        return Standard_True;
    } else {
        return Standard_False;
    }
}

// ============================================================================
/*!
 *  \brief IsPoint2d()
*/
// ============================================================================
Standard_Boolean ModelAdaptor_Point::IsPoint2d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType == STANDARD_TYPE(Model_Point2d)) {
        return Standard_True;
    } else {
        return Standard_False;
    }
}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean ModelAdaptor_Point::IsPoint3d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType == STANDARD_TYPE(Model_Point3d)) {
        return Standard_True;
    } else {
        return Standard_False;
    }
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const Handle(Model_Point)& ModelAdaptor_Point::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
const gp_Pnt1d& ModelAdaptor_Point::Point1d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType != STANDARD_TYPE(Model_Point1d)) {
        throw Standard_DomainError("ModelAdaptor_Point::Point1d()");
    }
    const Handle(Model_Point1d)& aPoint1d = Handle(Model_Point1d)::DownCast(myPoint);
    return aPoint1d->Point1d();
}

// ============================================================================
/*!
 *  \brief Point2d()
*/
// ============================================================================
const gp_Pnt2d& ModelAdaptor_Point::Point2d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType != STANDARD_TYPE(Model_Point2d)) {
        throw Standard_DomainError("ModelAdaptor_Point::Point2d()");
    }
    const Handle(Model_Point2d)& aPoint2d = Handle(Model_Point2d)::DownCast(myPoint);
    return aPoint2d->Point2d();
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
const gp_Pnt& ModelAdaptor_Point::Point3d() const
{
    Handle(Standard_Type) aType = myPoint->DynamicType();
    if(aType != STANDARD_TYPE(Model_Point3d)) {
        throw Standard_DomainError("ModelAdaptor_Point::Point3d()");
    }
    const Handle(Model_Point3d)& aPoint3d = Handle(Model_Point3d)::DownCast(myPoint);
    return aPoint3d->Point3d();
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void ModelAdaptor_Point::SetPoint(const Handle(Model_Point) &thePoint)
{
    myPoint = thePoint;
}



