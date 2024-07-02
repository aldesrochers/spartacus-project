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
#include <FE_Element.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Element::FE_Element()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Element::FE_Element(const Standard_Integer theNbNodes,
                       const Standard_Integer theNbDOFs)
{
    myDOFs.Resize(1, theNbDOFs, Standard_False);
    myNodes.Resize(1, theNbDOFs, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE_Element::~FE_Element()
{

}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
Handle(FE_DOF) FE_Element::DOF(const Standard_Integer theIndex) const
{
    return Handle(FE_DOF)::DownCast(myDOFs.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
Handle(FE_ElementModel) FE_Element::Model() const
{
    return myModel;
}

// ============================================================================
/*!
 *  \brief NbDOFs()
*/
// ============================================================================
Standard_Integer FE_Element::NbDOFs() const
{
    return myDOFs.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer FE_Element::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Handle(FE_Node) FE_Element::Node(const Standard_Integer theIndex) const
{
    return Handle(FE_Node)::DownCast(myNodes.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief ResizeDOFs()
*/
// ============================================================================
void FE_Element::ResizeDOFs(const Standard_Integer theNbDOFs,
                            const Standard_Boolean toCopyData)
{
    myDOFs.Resize(1, theNbDOFs, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void FE_Element::ResizeNodes(const Standard_Integer theNbNodes,
                            const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetDOF()
*/
// ============================================================================
void FE_Element::SetDOF(const Standard_Integer theIndex,
                        const Handle(FE_DOF) &theDOF)
{
    myDOFs.SetValue(theIndex, theDOF);
}

// ============================================================================
/*!
 *  \brief SetModel()
*/
// ============================================================================
void FE_Element::SetModel(const Handle(FE_ElementModel) &theModel)
{
    myModel = theModel;
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void FE_Element::SetNode(const Standard_Integer theIndex,
                         const Handle(FE_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE_Element, FE_Object)
IMPLEMENT_STANDARD_RTTIEXT(FE_Element, FE_Object)
