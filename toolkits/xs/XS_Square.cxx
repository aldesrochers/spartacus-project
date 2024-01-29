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
#include <XS_Square.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Square::XS_Square()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Square::XS_Square(const Standard_Real theWidth)
{
    myProperties.SetWidth(theWidth);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XS_Square::XS_Square(const xsp_Square& theProperties)
    : myProperties(theProperties)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XS_Square::~XS_Square()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real XS_Square::Area() const
{
    return myProperties.Area();
}

// ============================================================================
/*!
 *  \brief ElasticModulous()
*/
// ============================================================================
Standard_Real XS_Square::ElasticModulous() const
{
    return myProperties.ElasticModulous();
}

// ============================================================================
/*!
 *  \brief MomentOfInertia()
*/
// ============================================================================
Standard_Real XS_Square::MomentOfInertia() const
{
    return myProperties.MomentOfInertia();
}

// ============================================================================
/*!
 *  \brief PlasticModulous()
*/
// ============================================================================
Standard_Real XS_Square::PlasticModulous() const
{
    return myProperties.PlasticModulous();
}

// ============================================================================
/*!
 *  \brief Properties()
*/
// ============================================================================
const xsp_Square& XS_Square::Properties() const
{
    return myProperties;
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void XS_Square::SetArea(const Standard_Real theArea)
{
    return myProperties.SetArea(theArea);
}

// ============================================================================
/*!
 *  \brief SetProperties()
*/
// ============================================================================
void XS_Square::SetProperties(const xsp_Square &theProperties)
{
    myProperties = theProperties;
}

// ============================================================================
/*!
 *  \brief SetWidth()
*/
// ============================================================================
void XS_Square::SetWidth(const Standard_Real theWidth)
{
    return myProperties.SetWidth(theWidth);
}

// ============================================================================
/*!
 *  \brief Width()
*/
// ============================================================================
Standard_Real XS_Square::Width() const
{
    return myProperties.Width();
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(XS_Square, XS_Section)
IMPLEMENT_STANDARD_RTTIEXT(XS_Square, XS_Section)
