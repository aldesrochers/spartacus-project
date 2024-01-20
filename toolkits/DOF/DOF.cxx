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


// Spartacus
#include <DOF.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ============================================================================
/*!
 *  \brief Rotation()
*/
// ============================================================================
Handle(DOF_Rotation) DOF::Rotation(const Handle(DOF_DegreeOfFreedom)& theDOF)
{
    Standard_TypeMismatch_Raise_if(DOF::TypeMismatch(theDOF, DOFAbs_DOF_Rotation),
                                   "DOF::Rotation()");
    return Handle(DOF_Rotation)::DownCast(theDOF);
}

// ============================================================================
/*!
 *  \brief Translation()
*/
// ============================================================================
Handle(DOF_Translation) DOF::Translation(const Handle(DOF_DegreeOfFreedom)& theDOF)
{
    Standard_TypeMismatch_Raise_if(DOF::TypeMismatch(theDOF, DOFAbs_DOF_Translation),
                                   "DOF::Translation()");
    return Handle(DOF_Translation)::DownCast(theDOF);
}

// ============================================================================
/*!
 *  \brief TypeMismatch()
*/
// ============================================================================
Standard_Boolean DOF::TypeMismatch(const Handle(DOF_DegreeOfFreedom) &theDOF,
                                   const DOFAbs_TypeOfDOF theType)
{
    return theDOF.IsNull() ? Standard_False : theDOF->Type() != theType;
}
