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
#include <ModelAbs_TypeOfObject.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Object.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ============================================================================
/*!
 *  ModelDS_TypeMismatch()
*/
// ============================================================================
inline static Standard_Boolean ModelDS_TypeMismatch(const ModelDS_Object& theObject,
                                                    const ModelAbs_TypeOfObject theType)
{
    return theObject.IsNull() ? Standard_False : theObject.ObjectType() != theType;
}


// ============================================================================
/*!
 *  Mesh()
*/
// ============================================================================
const ModelDS_Mesh& ModelDS::Mesh(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS_TypeMismatch(theObject, ModelAbs_OBJ_Mesh), "ModelDS::Mesh()");
    return *(ModelDS_Mesh*) &theObject;
}

// ============================================================================
/*!
 *  Mesh()
*/
// ============================================================================
ModelDS_Mesh& ModelDS::Mesh(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS_TypeMismatch(theObject, ModelAbs_OBJ_Mesh), "ModelDS::Mesh()");
    return *(ModelDS_Mesh*) &theObject;
}
