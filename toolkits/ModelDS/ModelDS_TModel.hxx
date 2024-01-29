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


#ifndef __ModelDS_TModel_hxx__
#define __ModelDS_TModel_hxx__

// Spartacus
#include <MeshDS_Mesh.hxx>
#include <ModelDS_ListOfElement.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TModel;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TModel, ModelDS_TObject);


// ============================================================================
/*!
 *  \brief ModelDS_TModel
*/
// ============================================================================
class ModelDS_TModel : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TModel();
    // destructors
    Standard_EXPORT ~ModelDS_TModel();

public:

    Standard_EXPORT const ModelDS_ListOfElement&    Elements() const;
    Standard_EXPORT ModelDS_ListOfElement&          Elements();
    Standard_EXPORT Standard_Integer                NbElements() const;

private:

    ModelDS_ListOfElement   myElements;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TModel, ModelDS_TObject);

};


#endif // __ModelDS_TModel_hxx__
