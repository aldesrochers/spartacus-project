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
#include <xsp_Circle.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Circle::xsp_Circle()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Circle::xsp_Circle(const Standard_Real theRadius)
    : myRadius(theRadius)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
xsp_Circle::~xsp_Circle()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real xsp_Circle::Area() const
{
    return 2. * M_PI * Pow(myRadius, 2.);
}

// ============================================================================
/*!
 *  \brief Diameter()
*/
// ============================================================================
Standard_Real xsp_Circle::Diameter() const
{
    return 2. * myRadius;
}

// ============================================================================
/*!
 *  \brief ElasticModulous()
*/
// ============================================================================
Standard_Real xsp_Circle::ElasticModulous() const
{
    return M_PI * Pow(myRadius, 3.) / 4.;
}

// ============================================================================
/*!
 *  \brief MomentOfInertia()
*/
// ============================================================================
Standard_Real xsp_Circle::MomentOfInertia() const
{
    return M_PI * Pow(myRadius, 4.) / 4.;
}

// ============================================================================
/*!
 *  \brief PlasticModulous()
*/
// ============================================================================
Standard_Real xsp_Circle::PlasticModulous() const
{
    return Pow(Diameter(), 3.) / 6.;
}

// ============================================================================
/*!
 *  \brief Radius()
*/
// ============================================================================
Standard_Real xsp_Circle::Radius() const
{
    return myRadius;
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void xsp_Circle::SetArea(const Standard_Real theArea)
{
    myRadius = Sqrt(theArea / (2. * M_PI));
}

// ============================================================================
/*!
 *  \brief SetDiameter()
*/
// ============================================================================
void xsp_Circle::SetDiameter(const Standard_Real theDiameter)
{
    myRadius = theDiameter / 2.;
}

// ============================================================================
/*!
 *  \brief SetRadius()
*/
// ============================================================================
void xsp_Circle::SetRadius(const Standard_Real theRadius)
{
    myRadius = theRadius;
}



