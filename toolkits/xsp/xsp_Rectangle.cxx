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
#include <xsp_Rectangle.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Rectangle::xsp_Rectangle()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Rectangle::xsp_Rectangle(const Standard_Real theWidth,
                             const Standard_Real theHeight)
    : myWidth(theWidth),
    myHeight(theHeight)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
xsp_Rectangle::~xsp_Rectangle()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real xsp_Rectangle::Area() const
{
    return myWidth * myHeight;
}

// ============================================================================
/*!
 *  \brief ElasticModulousY()
*/
// ============================================================================
Standard_Real xsp_Rectangle::ElasticModulousY() const
{
    return myWidth * Pow(myHeight, 2.) / 6.;
}

// ============================================================================
/*!
 *  \brief ElasticModulousZ()
*/
// ============================================================================
Standard_Real xsp_Rectangle::ElasticModulousZ() const
{
    return myHeight * Pow(myWidth, 2.) / 6.;
}

// ============================================================================
/*!
 *  \brief Height()
*/
// ============================================================================
Standard_Real xsp_Rectangle::Height() const
{
    return myHeight;
}


// ============================================================================
/*!
 *  \brief MomentOfInertiaY()
*/
// ============================================================================
Standard_Real xsp_Rectangle::MomentOfInertiaY() const
{
    return myWidth * Pow(myHeight, 3.) / 12.;
}

// ============================================================================
/*!
 *  \brief MomentOfInertiaZ()
*/
// ============================================================================
Standard_Real xsp_Rectangle::MomentOfInertiaZ() const
{
    return myHeight * Pow(myWidth, 3.) / 12.;
}

// ============================================================================
/*!
 *  \brief PlasticModulousY()
*/
// ============================================================================
Standard_Real xsp_Rectangle::PlasticModulousY() const
{
    return myWidth * Pow(myHeight, 2.) / 4.;
}

// ============================================================================
/*!
 *  \brief PlasticModulousZ()
*/
// ============================================================================
Standard_Real xsp_Rectangle::PlasticModulousZ() const
{
    return myHeight * Pow(myWidth, 2.) / 4.;
}

// ============================================================================
/*!
 *  \brief RadiusOfGyrationY()
*/
// ============================================================================
Standard_Real xsp_Rectangle::RadiusOfGyrationY() const
{
    return myWidth / Sqrt(12.);
}

// ============================================================================
/*!
 *  \brief RadiusOfGyrationZ()
*/
// ============================================================================
Standard_Real xsp_Rectangle::RadiusOfGyrationZ() const
{
    return myHeight / Sqrt(12.);
}

// ============================================================================
/*!
 *  \brief SetHeight()
*/
// ============================================================================
void xsp_Rectangle::SetHeight(const Standard_Real theHeight)
{
    myHeight = theHeight;
}

// ============================================================================
/*!
 *  \brief SetWidth()
*/
// ============================================================================
void xsp_Rectangle::SetWidth(const Standard_Real theWidth)
{
    myWidth = theWidth;
}

// ============================================================================
/*!
 *  \brief Width()
*/
// ============================================================================
Standard_Real xsp_Rectangle::Width() const
{
    return myWidth;
}


