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
#include <ModelDS_TBoundary.hxx>
#include <ModelDS_TElement.hxx>
#include <ModelDS_TEquation.hxx>
#include <ModelDS_TLoading.hxx>
#include <ModelDS_TMapping.hxx>
#include <ModelDS_TModel.hxx>
#include <ModelDS_TNode.hxx>
#include <ModelDS_Tool.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief Boundaries()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_Tool::Boundaries(const ModelDS_Loading& theLoading)
{
    const ModelDS_TLoading* aTLoading = static_cast<const ModelDS_TLoading*>(theLoading.TObject().get());
    if(aTLoading == 0)
        throw Standard_NullObject("ModelDS_Tool::Boundaries()->Invalid loading.");
    return aTLoading->Boundaries();
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_Tool::DOFs(const ModelDS_Boundary& theBoundary)
{
    const ModelDS_TBoundary* aTBoundary = static_cast<const ModelDS_TBoundary*>(theBoundary.TObject().get());
    if(aTBoundary == 0)
        throw Standard_NullObject("ModelDS_Tool::DOFs()->Invalid boundary.");
    return aTBoundary->DOFs();
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_Tool::DOFs(const ModelDS_Element& theElement)
{
    const ModelDS_TElement* aTElement = static_cast<const ModelDS_TElement*>(theElement.TObject().get());
    if(aTElement == 0)
        throw Standard_NullObject("ModelDS_Tool::DOFs()->Invalid element.");
    return aTElement->DOFs();
}

// ============================================================================
/*!
 *  \brief DOFs()
*/
// ============================================================================
const ModelDS_SequenceOfObject& ModelDS_Tool::DOFs(const ModelDS_Mapping& theMapping)
{
    const ModelDS_TMapping* aTMapping = static_cast<const ModelDS_TMapping*>(theMapping.TObject().get());
    if(aTMapping == 0)
        throw Standard_NullObject("ModelDS_Tool::DOFs()->Invalid mapping.");
    return aTMapping->DOFs();
}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
const ModelDS_ListOfObject& ModelDS_Tool::Elements(const ModelDS_Model& theModel)
{
    const ModelDS_TModel* aTModel = static_cast<const ModelDS_TModel*>(theModel.TObject().get());
    if(aTModel == 0)
        throw Standard_NullObject("ModelDS_Tool::Elements()->Invalid model.");
    return aTModel->Elements();
}

// ============================================================================
/*!
 *  \brief IsFree()
*/
// ============================================================================
Standard_Boolean ModelDS_Tool::IsFree(const ModelDS_Equation& theEquation)
{
    return !IsFixed(theEquation);
}

// ============================================================================
/*!
 *  \brief IsFixed()
*/
// ============================================================================
Standard_Boolean ModelDS_Tool::IsFixed(const ModelDS_Equation& theEquation)
{
    const ModelDS_TEquation* aTEquation = static_cast<const ModelDS_TEquation*>(theEquation.TObject().get());
    if(aTEquation == 0)
        throw Standard_NullObject("ModelDS_Tool::Vertex()->Invalid equation.");
    return aTEquation->IsFixed();
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const MeshDS_Vertex& ModelDS_Tool::Vertex(const ModelDS_Node& theNode)
{
    const ModelDS_TNode* aTNode = static_cast<const ModelDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("ModelDS_Tool::Vertex()->Invalid node.");
    return aTNode->Vertex();
}

