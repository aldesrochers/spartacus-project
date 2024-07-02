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


#ifndef __Model_Point_hxx__
#define __Model_Point_hxx__

// Spartacus
#include <gp_Pnt1d.hxx>
#include <Model_Object.hxx>

// Forward declarations
class Model_Point;

// Handles
DEFINE_STANDARD_HANDLE(Model_Point, Model_Object)


// ============================================================================
/*!
 *  \brief Model_Point
*/
// ============================================================================
class Model_Point : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Point();
    // destructors
    Standard_EXPORT ~Model_Point();

public:

    virtual Standard_EXPORT Standard_Boolean    IsPoint1d() const;
    virtual Standard_EXPORT const gp_Pnt1d&     Point1d() const;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Point, Model_Object)

};


#endif // __Model_Point_hxx__
