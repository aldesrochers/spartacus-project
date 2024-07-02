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


#ifndef __FE_MechanicalModel1d_hxx__
#define __FE_MechanicalModel1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <FE_ElementModel.hxx>

// Spartacus
#include <Mech1d_Model.hxx>

// Forward declarations
class FE_MechanicalModel1d;

// Handles
DEFINE_STANDARD_HANDLE(FE_MechanicalModel1d, FE_ElementModel)


// ============================================================================
/*!
 *  \brief FE_MechanicalModel1d
*/
// ============================================================================
class FE_MechanicalModel1d : public FE_ElementModel
{

public:
    // constructors
    Standard_EXPORT FE_MechanicalModel1d();
    Standard_EXPORT FE_MechanicalModel1d(const Handle(Mech1d_Model)& theModel);
    // destructors
    Standard_EXPORT ~FE_MechanicalModel1d();

public:

    Standard_EXPORT Standard_Boolean                IsMechanicalModel1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mech1d_Model)&   MechanicalModel1d() const Standard_OVERRIDE;

private:

    Handle(Mech1d_Model)      myModel;

public:

    DEFINE_STANDARD_RTTIEXT(FE_MechanicalModel1d, FE_ElementModel)

};


#endif // __FE_MechanicalModel1d_hxx__
