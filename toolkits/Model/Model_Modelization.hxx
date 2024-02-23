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


#ifndef __Model_Modelization_hxx__
#define __Model_Modelization_hxx__

// Spartacus
#include <Model_Object.hxx>
#include <ModelAbs_Modelization.hxx>
#include <ModelAbs_Phenomenon.hxx>

// Forward declarations
class Model_Modelization;

// Handles
DEFINE_STANDARD_HANDLE(Model_Modelization, Model_Object)


// ============================================================================
/*!
 *  \brief Model_Modelization
*/
// ============================================================================
class Model_Modelization : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Modelization();
    Standard_EXPORT Model_Modelization(const ModelAbs_Phenomenon thePhenomenon,
                                       const ModelAbs_Modelization theModelization);
    // destructors
    Standard_EXPORT ~Model_Modelization();

public:

    Standard_EXPORT ModelAbs_Modelization   Modelization() const;
    Standard_EXPORT ModelAbs_Phenomenon     Phenomenon() const;
    Standard_EXPORT void                    SetModelization(const ModelAbs_Modelization theModelization);
    Standard_EXPORT void                    SetPhenomenon(const ModelAbs_Phenomenon thePhenomenon);

private:

    ModelAbs_Modelization   myModelization;
    ModelAbs_Phenomenon     myPhenomenon;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Modelization, Model_Object)

};


#endif // __Model_Modelization_hxx__
