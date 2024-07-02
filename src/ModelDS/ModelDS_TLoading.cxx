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
#include <ModelDS_TLoading.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TLoading::ModelDS_TLoading()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TLoading::~ModelDS_TLoading()
{

}

// ============================================================================
/*!
 *  \brief Boundaries()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_TLoading::Boundaries() const
{
    return myBoundaries;
}

// ============================================================================
/*!
 *  \brief Boundaries()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TLoading::Boundaries()
{
    return myBoundaries;
}

// ============================================================================
/*!
 *  \brief Loads()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_TLoading::Loads() const
{
    return myLoads;
}

// ============================================================================
/*!
 *  \brief Loads()
*/
// ============================================================================
ModelDS_ListOfObject& ModelDS_TLoading::Loads()
{
    return myLoads;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TLoading::ObjectType() const
{
    return ModelAbs_OBJ_Loading;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TLoading, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TLoading, ModelDS_TObject)
