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
#include <Triangle_Region.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Region::Triangle_Region()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Region::Triangle_Region(const gp_Pnt2d& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Region::~Triangle_Region()
{

}

// ============================================================================
/*!
 *  \brief Attribute()
*/
// ============================================================================
Standard_Integer Triangle_Region::Attribute() const
{
    return myAttribute;
}

// ============================================================================
/*!
 *  \brief ChangePoint()
*/
// ============================================================================
gp_Pnt2d& Triangle_Region::ChangePoint()
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief MaximumArea()
*/
// ============================================================================
Standard_Real Triangle_Region::MaximumArea() const
{
    return myMaximumArea;
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& Triangle_Region::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetAttribute()
*/
// ============================================================================
void Triangle_Region::SetAttribute(const Standard_Integer theAttribute)
{
    myAttribute = theAttribute;
}

// ============================================================================
/*!
 *  \brief SetMaximumArea()
*/
// ============================================================================
void Triangle_Region::SetMaximumArea(const Standard_Real theMaximumArea)
{
    myMaximumArea = theMaximumArea;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Triangle_Region::SetPoint(const gp_Pnt2d& thePoint)
{
    myPoint = thePoint;
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Region, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Region, Triangle_Object)
