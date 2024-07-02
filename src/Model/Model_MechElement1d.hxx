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


#ifndef __Model_MechElement1d_hxx__
#define __Model_MechElement1d_hxx__

// Spartacus
#include <Model_Element.hxx>

// Forward declarations
class Model_MechElement1d;

// Handles
DEFINE_STANDARD_HANDLE(Model_MechElement1d, Model_Element)


// ============================================================================
/*!
 *  \brief Model_MechElement1d
*/
// ============================================================================
class Model_MechElement1d : public Model_Element
{

public:
    // constructors
    Standard_EXPORT Model_MechElement1d(const Handle(Mech1d_Model)& theModel);
    // destructors
    Standard_EXPORT ~Model_MechElement1d();

public:

    Standard_EXPORT Standard_Boolean                IsMechanical1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mech1d_Model)&     Mechanical1d() const Standard_OVERRIDE;

private:

    Handle(Mech1d_Model)  myModel;

public:

    DEFINE_STANDARD_RTTIEXT(Model_MechElement1d, Model_Element)

};


#endif // __Model_MechElement1d_hxx__
