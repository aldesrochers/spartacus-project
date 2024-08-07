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


#ifndef __Model_Point1d_hxx__
#define __Model_Point1d_hxx__

// Spartacus
#include <Model_Point.hxx>

// Forward declarations
class Model_Point1d;

// Handles
DEFINE_STANDARD_HANDLE(Model_Point1d, Model_Point)


// ============================================================================
/*!
 *  \brief Model_Point1d
*/
// ============================================================================
class Model_Point1d : public Model_Point
{

public:
    // constructors
    Standard_EXPORT Model_Point1d(const gp_Pnt1d& thePoint);
    // destructors
    Standard_EXPORT ~Model_Point1d();

public:

    Standard_EXPORT Standard_Boolean    IsPoint1d() const Standard_OVERRIDE;
    Standard_EXPORT const gp_Pnt1d&     Point1d() const Standard_OVERRIDE;

private:

    gp_Pnt1d    myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Point1d, Model_Point)

};


#endif // __Model_Point1d_hxx__
