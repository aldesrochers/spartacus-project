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
#include <ModelDS_Builder.hxx>
#include <ModelDS_TDegreeOfFreedom.hxx>
#include <ModelDS_TElement.hxx>
#include <ModelDS_TMaterial.hxx>
#include <ModelDS_TModel.hxx>
#include <ModelDS_TNode.hxx>
#include <ModelDS_Tool.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_Builder::ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_Builder::~ModelDS_Builder()
{

}

// ============================================================================
/*!
 *  \brief AddDegreeOfFreedom()
 *  Add a new degree of freedom in node.
*/
// ============================================================================
void ModelDS_Builder::AddDegreeOfFreedom(ModelDS_Node &theNode,
                                         const ModelDS_DegreeOfFreedom &theDOF) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("ModelDS_Builder::AddDegreeOfFreedom()");

}

// ============================================================================
/*!
 *  \brief MakeDegreeOfFreedom()
 *  Make a new invalid degree of freedom.
*/
// ============================================================================
void ModelDS_Builder::MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom &theDOF) const
{
    Handle(ModelDS_TDegreeOfFreedom) aTDOF = new ModelDS_TDegreeOfFreedom();
    MakeObject(theDOF, aTDOF);
}

// ============================================================================
/*!
 *  \brief MakeDegreeOfFreedom()
 *  Make a new degree of freedom.
*/
// ============================================================================
void ModelDS_Builder::MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom &theDOF,
                                          const ModelAbs_TypeOfDOF theDOFType) const
{
    MakeDegreeOfFreedom(theDOF);
    UpdateDegreeOfFreedom(theDOF, theDOFType);
}

// ============================================================================
/*!
 *  \brief MakeElement()
 *  Make a new invalid (null) element.
*/
// ============================================================================
void ModelDS_Builder::MakeElement(ModelDS_Element &theElement) const
{
    Handle(ModelDS_TElement) aTElement = new ModelDS_TElement();
    MakeObject(theElement, aTElement);
}

// ============================================================================
/*!
 *  \brief MakeElement()
 *  Make a new element with type.
*/
// ============================================================================
void ModelDS_Builder::MakeElement(ModelDS_Element &theElement,
                                  const ModelAbs_TypeOfElement theElementType) const
{
    MakeElement(theElement);
    UpdateElement(theElement, theElementType);
}

// ============================================================================
/*!
 *  \brief MakeMaterial()
 *  Make a new invalid (null) material.
*/
// ============================================================================
void ModelDS_Builder::MakeMaterial(ModelDS_Material &theMaterial) const
{
    Handle(ModelDS_TMaterial) aTMaterial = new ModelDS_TMaterial();
    MakeObject(theMaterial, aTMaterial);
}

// ============================================================================
/*!
 *  \brief MakeModel()
 *  Make a new model.
*/
// ============================================================================
void ModelDS_Builder::MakeModel(ModelDS_Model &theModel) const
{
    Handle(ModelDS_TModel) aTModel = new ModelDS_TModel();
    MakeObject(theModel, aTModel);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a new node at coordinates 0,0,0.
*/
// ============================================================================
void ModelDS_Builder::MakeNode(ModelDS_Node &theNode) const
{
    Handle(ModelDS_TNode) aTNode = new ModelDS_TNode();
    MakeObject(theNode, aTNode);
}

// ============================================================================
/*!
 *  \brief MakeNode()
 *  Make a new node at given coordinates.
*/
// ============================================================================
void ModelDS_Builder::MakeNode(ModelDS_Node &theNode,
                               const gp_Pnt &thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeObject()
 *  Make an object from a transient object.
*/
// ============================================================================
void ModelDS_Builder::MakeObject(ModelDS_Object &theObject,
                                 const Handle(ModelDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief RemoveDegreeOfFreedom()
*/
// ============================================================================
void ModelDS_Builder::RemoveDegreeOfFreedom(ModelDS_Node &theNode,
                                            const ModelDS_DegreeOfFreedom &theDOF) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("ModelDS_Builder::RemoveDegreeOfFreedom()");


}

// ============================================================================
/*!
 *  \brief SetAttributeValue()
*/
// ============================================================================
void ModelDS_Builder::SetAttributeValue(const ModelDS_Material &theMaterial,
                                        const ModelAbs_TypeOfMaterialAttribute theAttribute,
                                        const Standard_Real theValue) const
{
    const Handle(ModelDS_TMaterial)& aTMaterial = *((Handle(ModelDS_TMaterial)*) &theMaterial.TObject());
    if(aTMaterial.IsNull())
        throw Standard_NullObject("ModelDS_Builder::SetAttributeValue()");
    aTMaterial->SetAttributeValue(theAttribute, theValue);
    aTMaterial->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateDegreeOfFreedom()
*/
// ============================================================================
void ModelDS_Builder::UpdateDegreeOfFreedom(const ModelDS_DegreeOfFreedom &theDOF,
                                            const ModelAbs_TypeOfDOF theDOFType) const
{
    const Handle(ModelDS_TDegreeOfFreedom)& aTDOF = *((Handle(ModelDS_TDegreeOfFreedom)*) &theDOF.TObject());
    if(aTDOF.IsNull())
        throw Standard_NullObject("ModelDS_Builder::UpdateDegreeOfFreedom()");

    aTDOF->SetDOFType(theDOFType);
    aTDOF->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateElement()
*/
// ============================================================================
void ModelDS_Builder::UpdateElement(const ModelDS_Element &theElement,
                                    const ModelAbs_TypeOfElement theElementType) const
{
    const Handle(ModelDS_TElement)& aTElement = *((Handle(ModelDS_TElement)*) &theElement.TObject());
    if(aTElement.IsNull())
        throw Standard_NullObject("ModelDS_Builder::UpdateElement()");

    aTElement->SetElementType(theElementType);
    aTElement->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void ModelDS_Builder::UpdateNode(const ModelDS_Node &theNode,
                                 const gp_Pnt &thePoint) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    if(aTNode.IsNull())
        throw Standard_NullObject("ModelDS_Builder::UpdateNode()");

    aTNode->SetPoint(thePoint);
    aTNode->SetModified(Standard_True);
}

// ============================================================================
/*!
 *  \brief UpdateType()
 *  Update the type of a material.
*/
// ============================================================================
void ModelDS_Builder::UpdateType(const ModelDS_Material &theMaterial,
                                 const ModelAbs_TypeOfMaterial theType) const
{
    const Handle(ModelDS_TMaterial)& aTMaterial = *((Handle(ModelDS_TMaterial)*) &theMaterial.TObject());
    if(aTMaterial.IsNull())
        throw Standard_NullObject("ModelDS_Builder::UpdateType()");
    aTMaterial->SetMaterialType(theType);
    aTMaterial->SetModified(Standard_True);
}
