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
#include <ModelDS_Point1d.hxx>
#include <ModelDS_TDegreeOfFreedom.hxx>
#include <ModelDS_TDomain.hxx>
#include <ModelDS_TNode.hxx>


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
 *  \brief MakeDomain()
*/
// ============================================================================
void ModelDS_Builder::MakeDomain(ModelDS_Domain &theDomain) const
{
    Handle(ModelDS_TDomain) aTDomain = new ModelDS_TDomain();
    MakeObject(theDomain, aTDomain);
}

// ============================================================================
/*!
 *  \brief MakeNode()
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
*/
// ============================================================================
void ModelDS_Builder::MakeNode(ModelDS_Node &theNode,
                               const gp_Pnt1d &thePoint) const
{
    MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}

// ============================================================================
/*!
 *  \brief MakeObject()
*/
// ============================================================================
void ModelDS_Builder::MakeObject(ModelDS_Object &theObject,
                                 const Handle(ModelDS_TObject) &theTObject) const
{
    theObject.SetTObject(theTObject);
}

// ============================================================================
/*!
 *  \brief UpdateDegreeOfFreedom()
*/
// ============================================================================
void ModelDS_Builder::UpdateDegreeOfFreedom(const ModelDS_DegreeOfFreedom &theDegreeOfFreedom,
                                            const Handle(DOF_DegreeOfFreedom) &theDOF) const
{
    const Handle(ModelDS_TDegreeOfFreedom)& aTDegreeOfFreedom = *((Handle(ModelDS_TDegreeOfFreedom)*) &theDegreeOfFreedom.TObject());
}

// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void ModelDS_Builder::UpdateNode(const ModelDS_Node &theNode,
                                 const gp_Pnt1d &thePoint) const
{
    const Handle(ModelDS_TNode)& aTNode = *((Handle(ModelDS_TNode)*) &theNode.TObject());
    Handle(ModelDS_Point1d) aPoint1d = new ModelDS_Point1d(thePoint);
    aTNode->SetPoint(aPoint1d);
}
