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


#ifndef __xsp_Rectangle_hxx__
#define __xsp_Rectangle_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief xsp_Rectangle
*/
// ============================================================================
class xsp_Rectangle
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT xsp_Rectangle();
    Standard_EXPORT xsp_Rectangle(const Standard_Real theWidth,
                                  const Standard_Real theHeight);
    // destructors
    Standard_EXPORT ~xsp_Rectangle();

public:

    Standard_EXPORT Standard_Real   Area() const;
    Standard_EXPORT Standard_Real   Height() const;
    Standard_EXPORT Standard_Real   ElasticModulousY() const;
    Standard_EXPORT Standard_Real   ElasticModulousZ() const;
    Standard_EXPORT Standard_Real   MomentOfInertiaY() const;
    Standard_EXPORT Standard_Real   MomentOfInertiaZ() const;
    Standard_EXPORT Standard_Real   PlasticModulousY() const;
    Standard_EXPORT Standard_Real   PlasticModulousZ() const;
    Standard_EXPORT Standard_Real   RadiusOfGyrationY() const;
    Standard_EXPORT Standard_Real   RadiusOfGyrationZ() const;
    Standard_EXPORT Standard_Real   Width() const;


public:

    Standard_EXPORT void            SetHeight(const Standard_Real theHeight);
    Standard_EXPORT void            SetWidth(const Standard_Real theWidth);

private:

    Standard_Real       myHeight;
    Standard_Real       myWidth;

};

#endif // __xsp_Rectangle_hxx__
