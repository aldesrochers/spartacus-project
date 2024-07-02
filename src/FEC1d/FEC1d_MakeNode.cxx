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
#include <FEC1d_MakeNode.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEC1d_MakeNode::FEC1d_MakeNode()
{
    Initialize(gp_Pnt1d(0.));
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEC1d_MakeNode::FEC1d_MakeNode(const Standard_Real theX)
{
    Initialize(gp_Pnt1d(theX));
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEC1d_MakeNode::FEC1d_MakeNode(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEC1d_MakeNode::~FEC1d_MakeNode()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void FEC1d_MakeNode::AddDOF(const Handle(FE1d_DOF) &theDOF)
{
    // check if DOF with same type already bounded in node
    for(Standard_Integer i=1; i<=myNode->NbDOFs(); i++) {
        Handle(FE1d_DOF) aDOF = myNode->DOF(i);
        if(aDOF->DOFType() == theDOF->DOFType()) {
            myError = FEC1d_NodeExistingDOFError;
            SetNotDone();
            return;
        }
    }

    // add dof to node
    myNode->AddDOF(theDOF);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
FEC1d_NodeError FEC1d_MakeNode::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void FEC1d_MakeNode::Initialize(const gp_Pnt1d &thePoint)
{
    myError = FEC1d_NodeNoError;
    myNode = new FE1d_Node(thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(FE1d_Node)& FEC1d_MakeNode::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief operator const Handle(FE1d_Node)& ()
*/
// ============================================================================
FEC1d_MakeNode::operator const Handle(FE1d_Node)& () const
{
    return Node();
}

