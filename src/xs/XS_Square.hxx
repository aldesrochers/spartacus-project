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


#ifndef __XS_Square_hxx__
#define __XS_Square_hxx__

// Spartacus
#include <XS_Section.hxx>
#include <xsp_Square.hxx>

// Forward declarations
class XS_Square;

// Handles
DEFINE_STANDARD_HANDLE(XS_Square, XS_Section)


// ============================================================================
/*!
 *  \brief XS_Square
*/
// ============================================================================
class XS_Square : public XS_Section
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT XS_Square();
    Standard_EXPORT XS_Square(const Standard_Real theWidth);
    Standard_EXPORT XS_Square(const xsp_Square& theProperties);
    // destructors
    Standard_EXPORT ~XS_Square();

public:

    Standard_EXPORT Standard_Real       Area() const;
    Standard_EXPORT Standard_Real       ElasticModulous() const;
    Standard_EXPORT Standard_Real       MomentOfInertia() const;
    Standard_EXPORT Standard_Real       PlasticModulous() const;
    Standard_EXPORT const xsp_Square&   Properties() const;
    Standard_EXPORT void                SetArea(const Standard_Real theArea);
    Standard_EXPORT void                SetProperties(const xsp_Square& theProperties);
    Standard_EXPORT void                SetWidth(const Standard_Real theWidth);
    Standard_EXPORT Standard_Real       Width() const;

private:

    xsp_Square      myProperties;

public:

    DEFINE_STANDARD_RTTIEXT(XS_Square, XS_Section);

};


#endif // __XS_Square_hxx__
