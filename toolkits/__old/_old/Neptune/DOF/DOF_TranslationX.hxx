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


#ifndef __DOF_TranslationX_hxx__
#define __DOF_TranslationX_hxx__

// Spartacus
#include <DOF_Translation.hxx>

// Forward declarations
class DOF_TranslationX;

// Handles
DEFINE_STANDARD_HANDLE(DOF_TranslationX, DOF_Translation);


// ============================================================================
/*!
 *  \brief DOF_TranslationX
 *  Class implementation of a x-axis translation degree of freedom.
*/
// ============================================================================
class DOF_TranslationX : public DOF_Translation
{

public:
    // constructors
    Standard_EXPORT DOF_TranslationX();
    // destructors
    Standard_EXPORT ~DOF_TranslationX();

public:

    Standard_EXPORT DOFAbs_TypeOfDOF        Type() const Standard_OVERRIDE;

public:

    DEFINE_STANDARD_RTTIEXT(DOF_TranslationX, DOF_Translation);

};

#endif // __DOF_TranslationX_hxx__
