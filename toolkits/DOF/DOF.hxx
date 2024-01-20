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


#ifndef __DOF_hxx__
#define __DOF_hxx__

// Spartacus
#include <DOF_Rotation.hxx>
#include <DOF_Translation.hxx>


// ============================================================================
/*!
 *  \brief DOF
 *  Class implementation of utility methods for the package.
*/
// ============================================================================
class DOF
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT Handle(DOF_Rotation)     Rotation(const Handle(DOF_DegreeOfFreedom)& theDOF);
    static Standard_EXPORT Handle(DOF_Translation)  Translation(const Handle(DOF_DegreeOfFreedom)& theDOF);

protected:

    static Standard_EXPORT Standard_Boolean     TypeMismatch(const Handle(DOF_DegreeOfFreedom)& theDOF,
                                                             const DOFAbs_TypeOfDOF theType);

};


#endif // __DOF_hxx__
