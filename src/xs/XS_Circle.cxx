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
#include <XS_Circle.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Circle::XS_Circle()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Circle::XS_Circle(const Standard_Real theRadius)
{
    myProperties.SetRadius(theRadius);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Circle::XS_Circle(const xsp_Circle& theProperties)
    : myProperties(theProperties)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XS_Circle::~XS_Circle()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real XS_Circle::Area() const
{
    return myProperties.Area();
}

// ============================================================================
/*!
 *  \brief Diameter()
*/
// ============================================================================
Standard_Real XS_Circle::Diameter() const
{
    return myProperties.Diameter();
}

// ============================================================================
/*!
 *  \brief ElasticModulous()
*/
// ============================================================================
Standard_Real XS_Circle::ElasticModulous() const
{
    return myProperties.ElasticModulous();
}

// ============================================================================
/*!
 *  \brief MomentOfInertia()
*/
// ============================================================================
Standard_Real XS_Circle::MomentOfInertia() const
{
    return myProperties.MomentOfInertia();
}

// ============================================================================
/*!
 *  \brief PlasticModulous()
*/
// ============================================================================
Standard_Real XS_Circle::PlasticModulous() const
{
    return myProperties.PlasticModulous();
}

// ============================================================================
/*!
 *  \brief Properties()
*/
// ============================================================================
const xsp_Circle& XS_Circle::Properties() const
{
    return myProperties;
}

// ============================================================================
/*!
 *  \brief Radius()
*/
// ============================================================================
Standard_Real XS_Circle::Radius() const
{
    return myProperties.Radius();
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void XS_Circle::SetArea(const Standard_Real theArea)
{
    return myProperties.SetArea(theArea);
}

// ============================================================================
/*!
 *  \brief SetProperties()
*/
// ============================================================================
void XS_Circle::SetProperties(const xsp_Circle &theProperties)
{
    myProperties = theProperties;
}

// ============================================================================
/*!
 *  \brief SetRadius()
*/
// ============================================================================
void XS_Circle::SetRadius(const Standard_Real theRadius)
{
    return myProperties.SetRadius(theRadius);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(XS_Circle, XS_Section)
IMPLEMENT_STANDARD_RTTIEXT(XS_Circle, XS_Section)
