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


#ifndef __XS_Circle_hxx__
#define __XS_Circle_hxx__

// Spartacus
#include <XS_Section.hxx>
#include <xsp_Circle.hxx>

// Forward declarations
class XS_Circle;

// Handles
DEFINE_STANDARD_HANDLE(XS_Circle, XS_Section)


// ============================================================================
/*!
 *  \brief XS_Circle
*/
// ============================================================================
class XS_Circle : public XS_Section
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT XS_Circle();
    Standard_EXPORT XS_Circle(const Standard_Real theRadius);
    Standard_EXPORT XS_Circle(const xsp_Circle& theProperties);
    // destructors
    Standard_EXPORT ~XS_Circle();

public:

    Standard_EXPORT Standard_Real       Area() const;
    Standard_EXPORT Standard_Real       Diameter() const;
    Standard_EXPORT Standard_Real       ElasticModulous() const;
    Standard_EXPORT Standard_Real       MomentOfInertia() const;
    Standard_EXPORT Standard_Real       PlasticModulous() const;
    Standard_EXPORT const xsp_Circle&   Properties() const;
    Standard_EXPORT Standard_Real       Radius() const;
    Standard_EXPORT void                SetArea(const Standard_Real theArea);
    Standard_EXPORT void                SetProperties(const xsp_Circle& theProperties);
    Standard_EXPORT void                SetRadius(const Standard_Real theRadius);

private:

    xsp_Circle      myProperties;

public:

    DEFINE_STANDARD_RTTIEXT(XS_Circle, XS_Section);

};


#endif // __XS_Circle_hxx__
