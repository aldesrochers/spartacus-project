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
#include <mp_LinearLine3N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine3N::mp_LinearLine3N()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
mp_LinearLine3N::mp_LinearLine3N(const Standard_Integer theNode1,
                                 const Standard_Integer theNode2,
                                 const Standard_Integer theNode3)
    : myLine1(theNode1, theNode2),
      myLine2(theNode2, theNode3)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
mp_LinearLine3N::~mp_LinearLine3N()
{

}

// ============================================================================
/*!
 *  \brief Line1()
*/
// ============================================================================
const mp_Line& mp_LinearLine3N::Line1() const
{
    return myLine1;
}

// ============================================================================
/*!
 *  \brief Line2()
*/
// ============================================================================
const mp_Line& mp_LinearLine3N::Line2() const
{
    return myLine2;
}

// ============================================================================
/*!
 *  \brief Node1()
*/
// ============================================================================
Standard_Integer mp_LinearLine3N::Node1() const
{
    return myLine1.Node1();
}

// ============================================================================
/*!
 *  \brief Node2()
*/
// ============================================================================
Standard_Integer mp_LinearLine3N::Node2() const
{
    return myLine1.Node2();
}

// ============================================================================
/*!
 *  \brief Node3()
*/
// ============================================================================
Standard_Integer mp_LinearLine3N::Node3() const
{
    return myLine2.Node2();
}

// ============================================================================
/*!
 *  \brief SetNode1()
*/
// ============================================================================
void mp_LinearLine3N::SetNode1(const Standard_Integer theNode1)
{
    myLine1.SetNode1(theNode1);
}

// ============================================================================
/*!
 *  \brief SetNode2()
*/
// ============================================================================
void mp_LinearLine3N::SetNode2(const Standard_Integer theNode2)
{
    myLine1.SetNode2(theNode2);
    myLine2.SetNode1(theNode2);
}

// ============================================================================
/*!
 *  \brief SetNode3()
*/
// ============================================================================
void mp_LinearLine3N::SetNode3(const Standard_Integer theNode3)
{
    myLine2.SetNode2(theNode3);
}



