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
#include <Mech1d_Truss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mech1d_Truss::Mech1d_Truss(const Handle(Mech1d_Node)& theNode1,
                           const Handle(Mech1d_Node)& theNode2)
    : myNode1(theNode1), myNode2(theNode2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mech1d_Truss::~Mech1d_Truss()
{

}

// ============================================================================
/*!
 *  \brief Connectivity()
*/
// ============================================================================
TColDOF_SequenceOfDOF Mech1d_Truss::Connectivity() const
{
    TColDOF_SequenceOfDOF aSequence;
    aSequence.Append(myNode1->DX());
    aSequence.Append(myNode2->DX());
    return aSequence;
}

// ============================================================================
/*!
 *  \brief InitialLength()
*/
// ============================================================================
Standard_Real Mech1d_Truss::InitialLength() const
{
    return myNode1->Point().Distance(myNode2->Point());
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const Handle(Mech1d_Node)& Mech1d_Truss::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const Handle(Mech1d_Node)& Mech1d_Truss::Node2() const
{
    return myNode2;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mech1d_Truss, Mech1d_Element)
IMPLEMENT_STANDARD_RTTIEXT(Mech1d_Truss, Mech1d_Element)
