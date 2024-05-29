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


#ifndef __ModelRep_TranslationDOF_hxx__
#define __ModelRep_TranslationDOF_hxx__

// Spartacus
#include <DOF_Translation.hxx>
#include <ModelRep_DOF.hxx>

// Forward declarations
class ModelRep_TranslationDOF;

// Handles
DEFINE_STANDARD_HANDLE(ModelRep_TranslationDOF, ModelRep_DOF)


// ============================================================================
/*!
 *  \brief ModelRep_TranslationDOF
*/
// ============================================================================
class ModelRep_TranslationDOF : public ModelRep_DOF
{

public:
    // constructors
    Standard_EXPORT ModelRep_TranslationDOF();
    Standard_EXPORT ModelRep_TranslationDOF(const Handle(DOF_Translation)& theTranslation);
    // destructors
    Standard_EXPORT ~ModelRep_TranslationDOF();

public:

    Standard_EXPORT Standard_Boolean                IsTranslation() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(DOF_Translation)&  Translation() const Standard_OVERRIDE;

private:

    Handle(DOF_Translation)     myTranslation;

public:

    DEFINE_STANDARD_RTTIEXT(ModelRep_TranslationDOF, ModelRep_DOF)

};


#endif // __ModelRep_TranslationDOF_hxx__
