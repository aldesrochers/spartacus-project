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
#include <ModelDS_Point.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_Point::ModelDS_Point()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_Point::~ModelDS_Point()
{

}

// ============================================================================
/*!
 *  \brief IsPoint1d()
*/
// ============================================================================
Standard_Boolean ModelDS_Point::IsPoint1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsPoint2d()
*/
// ============================================================================
Standard_Boolean ModelDS_Point::IsPoint2d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean ModelDS_Point::IsPoint3d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
const gp_Pnt1d& ModelDS_Point::Point1d() const
{
    throw Standard_DomainError("ModelDS_Point::Point1d()");
}

// ============================================================================
/*!
 *  \brief Point2d()
*/
// ============================================================================
const gp_Pnt2d& ModelDS_Point::Point2d() const
{
    throw Standard_DomainError("ModelDS_Point::Point2d()");
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
const gp_Pnt& ModelDS_Point::Point3d() const
{
    throw Standard_DomainError("ModelDS_Point::Point3d()");
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_Point, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_Point, Standard_Transient)
