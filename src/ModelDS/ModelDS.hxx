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


#ifndef __ModelDS_hxx__
#define __ModelDS_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <ModelAbs_TypeOfObject.hxx>
#include <ModelDS_Boundary.hxx>
#include <ModelDS_DOF.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Equation.hxx>
#include <ModelDS_DOFGroup.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_Modelization.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_Object.hxx>



// ============================================================================
/*!
 *  \brief ModelDS
*/
// ============================================================================
class ModelDS
{

public:

    DEFINE_STANDARD_ALLOC

public:

    static Standard_EXPORT const ModelDS_Boundary&          Boundary(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Boundary&                Boundary(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_DOF&               DOF(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_DOF&                     DOF(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_DOFGroup&          DOFGroup(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_DOFGroup&                DOFGroup(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_Element&           Element(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Element&                 Element(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_Equation&          Equation(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Equation&                Equation(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_Model&             Model(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Model&                   Model(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_Modelization&      Modelization(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Modelization&            Modelization(ModelDS_Object& theObject);

    static Standard_EXPORT const ModelDS_Node&              Node(const ModelDS_Object& theObject);
    static Standard_EXPORT ModelDS_Node&                    Node(ModelDS_Object& theObject);

protected:

    static Standard_EXPORT Standard_Boolean         TypeMismatch(const ModelDS_Object& theObject,
                                                                 const ModelAbs_TypeOfObject theObjectType);



};


#endif // __ModelDS_hxx__
