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
#include <FEM_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Node::FEM_Node()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Node::FEM_Node(const Standard_Integer theNodeId,
                   const Standard_Integer theNbDegreesOfFreedom)
    : myNodeId(theNodeId)
{
    myDegreesOfFreedom.Resize(1, theNbDegreesOfFreedom, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FEM_Node::FEM_Node(const Standard_Integer theNodeId,
                   const TColFEAbs_Array1OfTypeOfDegreeOfFreedom &theDegreesOfFreedom)
    : myNodeId(theNodeId),
      myDegreesOfFreedom(theDegreesOfFreedom)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FEM_Node::~FEM_Node()
{

}

// ============================================================================
/*!
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
FEAbs_TypeOfDegreeOfFreedom FEM_Node::DegreeOfFreedom(const Standard_Integer theIndex) const
{
    return myDegreesOfFreedom.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief DegreesOfFreedom()
*/
// ============================================================================
const TColFEAbs_Array1OfTypeOfDegreeOfFreedom& FEM_Node::DegreesOfFreedom() const
{
    return myDegreesOfFreedom;
}

// ============================================================================
/*!
 *  \brief NbDegreesOfFreedom()
*/
// ============================================================================
Standard_Integer FEM_Node::NbDegreesOfFreedom() const
{
    return myDegreesOfFreedom.Size();
}

// ============================================================================
/*!
 *  \brief NodeId()
*/
// ============================================================================
Standard_Integer FEM_Node::NodeId() const
{
    return myNodeId;
}

// ============================================================================
/*!
 *  \brief SetDegreeOfFreedom()
*/
// ============================================================================
void FEM_Node::SetDegreeOfFreedom(const Standard_Integer theIndex,
                                  const FEAbs_TypeOfDegreeOfFreedom theDegreeOfFreedom)
{
    myDegreesOfFreedom.SetValue(theIndex, theDegreeOfFreedom);
}

// ============================================================================
/*!
 *  \brief SetDegreesOfFreedom()
*/
// ============================================================================
void FEM_Node::SetDegreesOfFreedom(const TColFEAbs_Array1OfTypeOfDegreeOfFreedom theDegreesOfFreedom)
{
    myDegreesOfFreedom = theDegreesOfFreedom;
}

// ============================================================================
/*!
 *  \brief SetNodeId()
*/
// ============================================================================
void FEM_Node::SetNodeId(const Standard_Integer theNodeId)
{
    myNodeId = theNodeId;
}
