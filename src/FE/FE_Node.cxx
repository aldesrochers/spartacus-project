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
#include <FE_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Node::FE_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE_Node::FE_Node(const Standard_Integer theNbDOFs)
{
    myDOFs.Resize(1, theNbDOFs, Standard_False);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE_Node::~FE_Node()
{

}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
Handle(FE_DOF) FE_Node::DOF(const Standard_Integer theIndex) const
{
    return Handle(FE_DOF)::DownCast(myDOFs.Value(theIndex));
}

// ============================================================================
/*!
 *  \brief NbDOFs()
*/
// ============================================================================
Standard_Integer FE_Node::NbDOFs() const
{
    return myDOFs.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const Handle(FE_Point)& FE_Node::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief ResizeDOFs()
*/
// ============================================================================
void FE_Node::ResizeDOFs(const Standard_Integer theNbDOFs,
                         const Standard_Boolean toCopyData)
{
    myDOFs.Resize(1, theNbDOFs, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetDOF()
*/
// ============================================================================
void FE_Node::SetDOF(const Standard_Integer theIndex,
                     const Handle(FE_DOF)& theDOF)
{
    myDOFs.SetValue(theIndex, theDOF);
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void FE_Node::SetPoint(const Handle(FE_Point) &thePoint)
{
    myPoint = thePoint;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE_Node, FE_Object)
IMPLEMENT_STANDARD_RTTIEXT(FE_Node, FE_Object)
