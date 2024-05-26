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
#include <ModelDS.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const ModelDS_Element& ModelDS::Element(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Element),
                                   "ModelDS::Element()->Type mismatch.");
    return *(ModelDS_Element*) &theObject;
}


// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
ModelDS_Element& ModelDS::Element(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Element),
                                   "ModelDS::Element()->Type mismatch.");
    return *(ModelDS_Element*) &theObject;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelDS::Node(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Node),
                                   "ModelDS::Node()->Type mismatch.");
    return *(ModelDS_Node*) &theObject;
}


// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
ModelDS_Node& ModelDS::Node(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Node),
                                   "ModelDS::Node()->Type mismatch.");
    return *(ModelDS_Node*) &theObject;
}

// ============================================================================
/*!
 *  \brief TypeMismatch()
*/
// ============================================================================
Standard_Boolean ModelDS::TypeMismatch(const ModelDS_Object &theObject,
                                      const ModelAbs_TypeOfObject theObjectType)
{
        return theObject.IsNull() ? Standard_False : theObject.ObjectType() != theObjectType;
}


