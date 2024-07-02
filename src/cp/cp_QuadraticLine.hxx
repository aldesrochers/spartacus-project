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


#ifndef __cp_QuadraticLine_hxx__
#define __cp_QuadraticLine_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief cp_QuadraticLine
*/
// ============================================================================
class cp_QuadraticLine
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT cp_QuadraticLine() {}
    Standard_EXPORT cp_QuadraticLine(const Standard_Integer theNode1,
                                     const Standard_Integer theNode2,
                                     const Standard_Integer theNode3)
    {
        myNodes[0] = theNode1;
        myNodes[1] = theNode2;
        myNodes[2] = theNode3;
    }

    // destructors
    Standard_EXPORT ~cp_QuadraticLine() {}

public:

    Standard_EXPORT Standard_Integer        Node1() const {return myNodes[0];}
    Standard_EXPORT Standard_Integer        Node2() const {return myNodes[1];}
    Standard_EXPORT Standard_Integer        Node3() const {return myNodes[2];}
    Standard_EXPORT void                    SetNode1(const Standard_Integer theNode1) {myNodes[0] = theNode1;}
    Standard_EXPORT void                    SetNode2(const Standard_Integer theNode2) {myNodes[1] = theNode2;}
    Standard_EXPORT void                    SetNode3(const Standard_Integer theNode3) {myNodes[2] = theNode3;}

public:

    Standard_EXPORT void        Get(Standard_Integer& theNode1,
                                    Standard_Integer& theNode2,
                                    Standard_Integer& theNode3)
    {
        theNode1 = myNodes[0];
        theNode2 = myNodes[1];
        theNode3 = myNodes[2];
    }

    Standard_EXPORT void        Set(const Standard_Integer theNode1,
                                    const Standard_Integer theNode2,
                                    const Standard_Integer theNode3)
    {
        myNodes[0] = theNode1;
        myNodes[1] = theNode2;
        myNodes[2] = theNode3;
    }

private:

    Standard_Integer    myNodes[3];

};


#endif // __cp_QuadraticLine_hxx__
