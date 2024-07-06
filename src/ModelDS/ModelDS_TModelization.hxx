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


#ifndef __ModelDS_TModelization_hxx__
#define __ModelDS_TModelization_hxx__

// Spartacus
#include <FE_Element.hxx>
#include <ModelDS_TObject.hxx>
#include <ModelDS_SequenceOfObject.hxx>

// Forward declarations
class ModelDS_TModelization;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TModelization, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TModelization
*/
// ============================================================================
class ModelDS_TModelization : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TModelization();
    // destructors
    Standard_EXPORT ~ModelDS_TModelization();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_SequenceOfObject& DOFs()  const;
    Standard_EXPORT ModelDS_SequenceOfObject&       DOFs();
    Standard_EXPORT const Handle(FE_Element)&         Model() const;
    Standard_EXPORT void                            SetModel(const Handle(FE_Element)& theModel);

private:

    ModelDS_SequenceOfObject    myDOFs;
    Handle(FE_Element)            myModel;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TModelization, ModelDS_TObject)

};


#endif // __ModelDS_TModelization_hxx__
