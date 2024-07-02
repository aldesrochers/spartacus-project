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


#ifndef __Model_TranslationDOF_hxx__
#define __Model_TranslationDOF_hxx__

// Spartacus
#include <Model_DOF.hxx>

// Forward declarations
class Model_TranslationDOF;

// Handles
DEFINE_STANDARD_HANDLE(Model_TranslationDOF, Model_DOF)


// ============================================================================
/*!
 *  \brief Model_TranslationDOF
*/
// ============================================================================
class Model_TranslationDOF : public Model_DOF
{

public:
    // constructors
    Standard_EXPORT Model_TranslationDOF(const Handle(DOF_Translation)& theModel);
    // destructors
    Standard_EXPORT ~Model_TranslationDOF();

public:

    Standard_EXPORT Standard_Boolean                IsTranslation() const;
    Standard_EXPORT const Handle(DOF_Translation)&  Translation() const;

private:

    Handle(DOF_Translation)     myModel;

public:

    DEFINE_STANDARD_RTTIEXT(Model_TranslationDOF, Model_DOF)

};


#endif // __Model_TranslationDOF_hxx__
