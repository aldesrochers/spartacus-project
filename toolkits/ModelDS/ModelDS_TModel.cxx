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
#include <ModelDS_TModel.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TModel::ModelDS_TModel()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TModel::~ModelDS_TModel()
{

}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
const ModelDS_ListOfElement& ModelDS_TModel::Elements() const
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
ModelDS_ListOfElement& ModelDS_TModel::Elements()
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer ModelDS_TModel::NbElements() const
{
    return myElements.Size();
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TModel, ModelDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TModel, ModelDS_TObject);
