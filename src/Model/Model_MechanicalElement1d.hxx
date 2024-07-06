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


#ifndef __Model_MechanicalElement1d_hxx__
#define __Model_MechanicalElement1d_hxx__

// Spartacus
#include <Mech1d_Model.hxx>
#include <Model_MechanicalElement.hxx>

// Forward declarations
class Model_MechanicalElement1d;

// Handles
DEFINE_STANDARD_HANDLE(Model_MechanicalElement1d, Model_MechanicalElement)


// ============================================================================
/*!
 *  \brief Model_MechanicalElement1d
*/
// ============================================================================
class Model_MechanicalElement1d : public Model_MechanicalElement
{

public:
    // constructors
    Standard_EXPORT Model_MechanicalElement1d(const Handle(Mech1d_Model)& theModel);
    // destructors
    Standard_EXPORT ~Model_MechanicalElement1d();

private:

    Handle(Mech1d_Model)  myModel;

public:

    DEFINE_STANDARD_RTTIEXT(Model_MechanicalElement1d, Model_MechanicalElement)

};


#endif // __Model_MechanicalElement1d_hxx__
