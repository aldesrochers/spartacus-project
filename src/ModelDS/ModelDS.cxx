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
 *  \brief Boundary()
*/
// ============================================================================
const ModelDS_Boundary& ModelDS::Boundary(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Boundary),
                                   "ModelDS::Boundary()->Type mismatch.");
    return *(ModelDS_Boundary*) &theObject;
}

// ============================================================================
/*!
 *  \brief Boundary()
*/
// ============================================================================
ModelDS_Boundary& ModelDS::Boundary(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Boundary),
                                   "ModelDS::Boundary()->Type mismatch.");
    return *(ModelDS_Boundary*) &theObject;
}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
const ModelDS_DOF& ModelDS::DOF(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_DOF),
                                   "ModelDS::DOF()->Type mismatch.");
    return *(ModelDS_DOF*) &theObject;
}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
ModelDS_DOF& ModelDS::DOF(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_DOF),
                                   "ModelDS::DOF()->Type mismatch.");
    return *(ModelDS_DOF*) &theObject;
}

// ============================================================================
/*!
 *  \brief DOFGroup()
*/
// ============================================================================
const ModelDS_DOFGroup& ModelDS::DOFGroup(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_DOFGroup),
                                   "ModelDS::DOFGroup()->Type mismatch.");
    return *(ModelDS_DOFGroup*) &theObject;
}

// ============================================================================
/*!
 *  \brief DOFGroup()
*/
// ============================================================================
ModelDS_DOFGroup& ModelDS::DOFGroup(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_DOFGroup),
                                   "ModelDS::DOFGroup()->Type mismatch.");
    return *(ModelDS_DOFGroup*) &theObject;
}

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
 *  \brief Equation()
*/
// ============================================================================
const ModelDS_Equation& ModelDS::Equation(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Equation),
                                   "ModelDS::Equation()->Type mismatch.");
    return *(ModelDS_Equation*) &theObject;
}

// ============================================================================
/*!
 *  \brief Equation()
*/
// ============================================================================
ModelDS_Equation& ModelDS::Equation(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Equation),
                                   "ModelDS::Equation()->Type mismatch.");
    return *(ModelDS_Equation*) &theObject;
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
const ModelDS_Model& ModelDS::Model(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Model),
                                   "ModelDS::Model()->Type mismatch.");
    return *(ModelDS_Model*) &theObject;
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
ModelDS_Model& ModelDS::Model(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Model),
                                   "ModelDS::Model()->Type mismatch.");
    return *(ModelDS_Model*) &theObject;
}

// ============================================================================
/*!
 *  \brief Modelization()
*/
// ============================================================================
const ModelDS_Modelization& ModelDS::Modelization(const ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Modelization),
                                   "ModelDS::Modelization()->Type mismatch.");
    return *(ModelDS_Modelization*) &theObject;
}

// ============================================================================
/*!
 *  \brief Modelization()
*/
// ============================================================================
ModelDS_Modelization& ModelDS::Modelization(ModelDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(ModelDS::TypeMismatch(theObject, ModelAbs_OBJ_Modelization),
                                   "ModelDS::Modelization()->Type mismatch.");
    return *(ModelDS_Modelization*) &theObject;
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


