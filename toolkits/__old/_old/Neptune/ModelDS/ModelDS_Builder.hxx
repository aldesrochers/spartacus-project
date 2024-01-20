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


#ifndef __ModelDS_Builder_hxx__
#define __ModelDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Pnt.hxx>

// Spartacus
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelAbs_TypeOfElement.hxx>
#include <ModelAbs_TypeOfMaterial.hxx>
#include <ModelAbs_TypeOfMaterialAttribute.hxx>
#include <ModelDS_DegreeOfFreedom.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Material.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_Object.hxx>
#include <ModelDS_TObject.hxx>


// ============================================================================
/*!
 *  \brief ModelDS_Builder
*/
// ============================================================================
class ModelDS_Builder
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelDS_Builder();
    // destructors
    Standard_EXPORT ~ModelDS_Builder();

public:

    Standard_EXPORT void    AddDegreeOfFreedom(ModelDS_Node& theNode,
                                               const ModelDS_DegreeOfFreedom& theDOF) const;

    Standard_EXPORT void    MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom& theDOF) const;
    Standard_EXPORT void    MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom& theDOF,
                                                const ModelAbs_TypeOfDOF theDOFType) const;

    Standard_EXPORT void    MakeElement(ModelDS_Element& theElement) const;
    Standard_EXPORT void    MakeElement(ModelDS_Element& theElement,
                                        const ModelAbs_TypeOfElement theElementType) const;

    Standard_EXPORT void    MakeMaterial(ModelDS_Material& theMaterial) const;
    Standard_EXPORT void    MakeMaterial(ModelDS_Material& theMaterial,
                                         const ModelAbs_TypeOfMaterial theMaterialType) const;

    Standard_EXPORT void    MakeModel(ModelDS_Model& theModel) const;

    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode) const;
    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode,
                                     const gp_Pnt& thePoint) const;

    Standard_EXPORT void    RemoveDegreeOfFreedom(ModelDS_Node& theNode,
                                                  const ModelDS_DegreeOfFreedom& theDOF) const;

    Standard_EXPORT void    SetAttributeValue(const ModelDS_Material& theMaterial,
                                              const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                              const Standard_Real theValue) const;

    Standard_EXPORT void    UpdateDegreeOfFreedom(const ModelDS_DegreeOfFreedom& theDOF,
                                                  const ModelAbs_TypeOfDOF theDOFType) const;

    Standard_EXPORT void    UpdateElement(const ModelDS_Element& theElement,
                                          const ModelAbs_TypeOfElement theElementType) const;

    Standard_EXPORT void    UpdateNode(const ModelDS_Node& theNode,
                                       const gp_Pnt& thePoint) const;

    Standard_EXPORT void    UpdateType(const ModelDS_Material& theMaterial,
                                       const ModelAbs_TypeOfMaterial theType) const;

protected:

    Standard_EXPORT void    MakeObject(ModelDS_Object& theObject,
                                       const Handle(ModelDS_TObject)& theTObject) const;

};

#endif // __ModelDS_Builder_hxx__
