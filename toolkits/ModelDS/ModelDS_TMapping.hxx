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


#ifndef __ModelDS_TMapping_hxx__
#define __ModelDS_TMapping_hxx__

// Spartacus
#include <ModelDS_SequenceOfObject.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TMapping;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TMapping, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TMapping
*/
// ============================================================================
class ModelDS_TMapping : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TMapping();
    // destructors
    Standard_EXPORT ~ModelDS_TMapping();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_SequenceOfObject& Equations() const;
    Standard_EXPORT ModelDS_SequenceOfObject&       Equations();

private:

    ModelDS_SequenceOfObject        myEquations;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TMapping, ModelDS_TObject)

};


#endif // __ModelDS_TMapping_hxx__
