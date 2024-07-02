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


#ifndef __ModelDS_TFunction_hxx__
#define __ModelDS_TFunction_hxx__

// Spartacus
#include <ModelAbs_Parameter.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TFunction;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TFunction, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TFunction
*/
// ============================================================================
class ModelDS_TFunction : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TFunction();
    // destructors
    Standard_EXPORT ~ModelDS_TFunction();

private:

    ModelAbs_Parameter      myParameterType;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TFunction, ModelDS_TObject)

};


#endif // __ModelDS_TFunction_hxx__
