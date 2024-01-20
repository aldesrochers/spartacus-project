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
#include <mp_QuadraticLine1d.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>


// ***
// Cell description
// ***
//
// Line defined by two end nodes and one mid node in 1d space.
//
// N1      N3      N2
// + ----- + ----- +


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticLine1d::mp_QuadraticLine1d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_QuadraticLine1d::mp_QuadraticLine1d(const mp_Node1d& theNode1,
                                       const mp_Node1d& theNode2)
    : myNode1(theNode1),
      myNode2(theNode2)
{
    Standard_Real aLength = theNode1.Distance(theNode2);
    Standard_Real X3 = theNode1.X() + 0.5 * aLength;
    myNode3 = mp_Node1d(X3);
    Check();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_QuadraticLine1d::~mp_QuadraticLine1d()
{

}

// ============================================================================
/*!
 *  \brief Check()
*/
// ============================================================================
void mp_QuadraticLine1d::Check() const
{
    Standard_Real aLength = myNode1.Distance(myNode2);
    Standard_ConstructionError_Raise_if(aLength <= 0.,
                                        "mp_QuadraticLine1d::Check() -> Length must be > 0.");
    Standard_ConstructionError_Raise_if(myNode1.X() > myNode3.X() || myNode2.X() < myNode3.X(),
                                        "mp_QuadraticLine1d() -> Node 3 must be between 1 and 2.");
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
const mp_Node1d& mp_QuadraticLine1d::Node1() const
{
    return myNode1;
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
const mp_Node1d& mp_QuadraticLine1d::Node2() const
{
    return myNode2;
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
const mp_Node1d& mp_QuadraticLine1d::Node3() const
{
    return myNode3;
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_QuadraticLine1d::SetNode1(const mp_Node1d &theNode1)
{
    myNode1 = theNode1;
    Check();
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_QuadraticLine1d::SetNode2(const mp_Node1d &theNode2)
{
    myNode2 = theNode2;
    Check();
}



