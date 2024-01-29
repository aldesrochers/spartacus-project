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
#include <xsp_Square.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Square::xsp_Square()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Square::xsp_Square(const Standard_Real theWidth)
    : myWidth(theWidth)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
xsp_Square::~xsp_Square()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real xsp_Square::Area() const
{
    return Pow(myWidth, 2.);
}

// ============================================================================
/*!
 *  \brief ElasticModulous()
*/
// ============================================================================
Standard_Real xsp_Square::ElasticModulous() const
{
    return Pow(myWidth, 3.) / 6.;
}

// ============================================================================
/*!
 *  \brief MomentOfInertia()
*/
// ============================================================================
Standard_Real xsp_Square::MomentOfInertia() const
{
    return Pow(myWidth, 4.) / 12.;
}

// ============================================================================
/*!
 *  \brief PlasticModulous()
*/
// ============================================================================
Standard_Real xsp_Square::PlasticModulous() const
{
    return Pow(myWidth, 3.) / 4.;
}

// ============================================================================
/*!
 *  \brief RadiusOfGyration()
*/
// ============================================================================
Standard_Real xsp_Square::RadiusOfGyration() const
{
    return myWidth / Sqrt(12.);
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void xsp_Square::SetArea(const Standard_Real theArea)
{
    myWidth = Sqrt(theArea);
}

// ============================================================================
/*!
 *  \brief SetWidth()
*/
// ============================================================================
void xsp_Square::SetWidth(const Standard_Real theWidth)
{
    myWidth = theWidth;
}

// ============================================================================
/*!
 *  \brief Width()
*/
// ============================================================================
Standard_Real xsp_Square::Width() const
{
    return myWidth;
}


