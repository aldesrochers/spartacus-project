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
#include <FE1d_Node.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_Node::FE1d_Node()
    : myX(0.)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
FE1d_Node::FE1d_Node(const Standard_Real theX)
    : myX(theX)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
FE1d_Node::~FE1d_Node()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
Standard_Boolean FE1d_Node::AddDOF(const Handle(DOF_Object) &theDOF)
{
    DOFAbs_TypeOfDOF aType = theDOF->Type();
    if(aType != DOFAbs_TranslationX || HasDOF(aType))
        // only support for X translation in 1d
        return Standard_False;
    myDOFs.Append(theDOF);
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real FE1d_Node::Distance(const Handle(FE1d_Node) &theOther) const
{
    return Abs(theOther->X() - myX);
}

// ============================================================================
/*!
 *  \brief HasDOF()
 *  Check if node contains a DOF with type.
*/
// ============================================================================
Standard_Boolean FE1d_Node::HasDOF(const DOFAbs_TypeOfDOF theType) const
{
    TColDOF_ListIteratorOfListOfObject anIterator(myDOFs);
    for(; anIterator.More(); anIterator.Next()) {
        DOFAbs_TypeOfDOF aType = anIterator.Value()->Type();
        if(aType == theType)
            return Standard_True;
    }
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void FE1d_Node::SetX(const Standard_Real theX)
{
    myX = theX;
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real FE1d_Node::X() const
{
    return myX;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(FE1d_Node, FE1d_Object);
IMPLEMENT_STANDARD_RTTIEXT(FE1d_Node, FE1d_Object);
