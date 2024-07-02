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


#ifndef __FE_ElementModel_hxx__
#define __FE_ElementModel_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <Mech1d_Model.hxx>

// Forward declarations
class FE_ElementModel;

// Handles
DEFINE_STANDARD_HANDLE(FE_ElementModel, Standard_Transient)


// ============================================================================
/*!
 *  \brief FE_ElementModel
*/
// ============================================================================
class FE_ElementModel : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT FE_ElementModel();
    // destructors
    Standard_EXPORT ~FE_ElementModel();

public:

    virtual Standard_EXPORT Standard_Boolean                IsMechanicalModel1d() const;
    virtual Standard_EXPORT Standard_Boolean                IsMechanicalModel2d() const;
    virtual Standard_EXPORT Standard_Boolean                IsMechanicalModel3d() const;
    virtual Standard_EXPORT Standard_Boolean                IsThermalModel1d() const;
    virtual Standard_EXPORT Standard_Boolean                IsThermalModel2d() const;
    virtual Standard_EXPORT Standard_Boolean                IsThermalModel3d() const;
    virtual Standard_EXPORT const Handle(Mech1d_Model)&   MechanicalModel1d() const;

public:

    DEFINE_STANDARD_RTTIEXT(FE_ElementModel, Standard_Transient)

};


#endif // __FE_ElementModel_hxx__
