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


#ifndef __FE_Mechanical1d_hxx__
#define __FE_Mechanical1d_hxx__


// Spartacus
#include <FE_Mechanical.hxx>
#include <Mech1d_Model.hxx>

// Forward declarations
class FE_Mechanical1d;

// Handles
DEFINE_STANDARD_HANDLE(FE_Mechanical1d, FE_Mechanical)


// ============================================================================
/*!
 *  \brief FE_Mechanical1d
*/
// ============================================================================
class FE_Mechanical1d : public FE_Mechanical
{

public:
    // constructors
    Standard_EXPORT FE_Mechanical1d();
    Standard_EXPORT FE_Mechanical1d(const Handle(Mech1d_Model)& theModel);
    // destructors
    Standard_EXPORT ~FE_Mechanical1d();

public:

    Standard_EXPORT math_Matrix                     ElasticStiffness() const Standard_OVERRIDE;

public:

    Standard_EXPORT const Handle(Mech1d_Model)&   Model() const;
    Standard_EXPORT void                            SetModel(const Handle(Mech1d_Model)& theModel);

private:

    Handle(Mech1d_Model)      myModel;

public:

    DEFINE_STANDARD_RTTIEXT(FE_Mechanical1d, FE_Mechanical)

};


#endif // __FE_Mechanical1d_hxx__
