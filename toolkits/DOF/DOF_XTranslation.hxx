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


#ifndef __DOF_XTranslation_hxx__
#define __DOF_XTranslation_hxx__

// Spartacus
#include <DOF_Translation.hxx>

// Forward declarations
class DOF_XTranslation;

// Handles
DEFINE_STANDARD_HANDLE(DOF_XTranslation, DOF_Translation)


// ============================================================================
/*!
 *  \brief DOF_XTranslation
*/
// ============================================================================
class DOF_XTranslation : public DOF_Translation
{

public:
    // constructors
    Standard_EXPORT DOF_XTranslation();
    Standard_EXPORT DOF_XTranslation(const DOF_TranslationState& theInitialState);
    // destructors
    Standard_EXPORT ~DOF_XTranslation();

public:

    Standard_EXPORT DOFAbs_TypeOfDOF        DOFType() const Standard_OVERRIDE;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_XTranslation, DOF_Translation)

};


#endif // __DOF_XTranslation_hxx__
