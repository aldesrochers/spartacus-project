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


#ifndef __mp_QuadraticPyramid13N_hxx__
#define __mp_QuadraticPyramid13N_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief mp_QuadraticPyramid13N
*/
// ============================================================================
class mp_QuadraticPyramid13N
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_QuadraticPyramid13N();
    Standard_EXPORT mp_QuadraticPyramid13N(const Standard_Integer theNode1,
                                           const Standard_Integer theNode2,
                                           const Standard_Integer theNode3,
                                           const Standard_Integer theNode4,
                                           const Standard_Integer theNode5,
                                           const Standard_Integer theNode6,
                                           const Standard_Integer theNode7,
                                           const Standard_Integer theNode8,
                                           const Standard_Integer theNode9,
                                           const Standard_Integer theNode10,
                                           const Standard_Integer theNode11,
                                           const Standard_Integer theNode12,
                                           const Standard_Integer theNode13);
    // destructors
    Standard_EXPORT ~mp_QuadraticPyramid13N();

public:

    Standard_EXPORT Standard_Integer        Node1() const;
    Standard_EXPORT Standard_Integer        Node2() const;
    Standard_EXPORT Standard_Integer        Node3() const;
    Standard_EXPORT Standard_Integer        Node4() const;
    Standard_EXPORT Standard_Integer        Node5() const;
    Standard_EXPORT Standard_Integer        Node6() const;
    Standard_EXPORT Standard_Integer        Node7() const;
    Standard_EXPORT Standard_Integer        Node8() const;
    Standard_EXPORT Standard_Integer        Node9() const;
    Standard_EXPORT Standard_Integer        Node10() const;
    Standard_EXPORT Standard_Integer        Node11() const;
    Standard_EXPORT Standard_Integer        Node12() const;
    Standard_EXPORT Standard_Integer        Node13() const;
    Standard_EXPORT void                    SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                    SetNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                    SetNode3(const Standard_Integer theNode3);
    Standard_EXPORT void                    SetNode4(const Standard_Integer theNode4);
    Standard_EXPORT void                    SetNode5(const Standard_Integer theNode5);
    Standard_EXPORT void                    SetNode6(const Standard_Integer theNode6);
    Standard_EXPORT void                    SetNode7(const Standard_Integer theNode7);
    Standard_EXPORT void                    SetNode8(const Standard_Integer theNode8);
    Standard_EXPORT void                    SetNode9(const Standard_Integer theNode9);
    Standard_EXPORT void                    SetNode10(const Standard_Integer theNode10);
    Standard_EXPORT void                    SetNode11(const Standard_Integer theNode11);
    Standard_EXPORT void                    SetNode12(const Standard_Integer theNode12);
    Standard_EXPORT void                    SetNode13(const Standard_Integer theNode13);

private:

    Standard_Integer        myNode1;
    Standard_Integer        myNode2;
    Standard_Integer        myNode3;
    Standard_Integer        myNode4;
    Standard_Integer        myNode5;
    Standard_Integer        myNode6;
    Standard_Integer        myNode7;
    Standard_Integer        myNode8;
    Standard_Integer        myNode9;
    Standard_Integer        myNode10;
    Standard_Integer        myNode11;
    Standard_Integer        myNode12;
    Standard_Integer        myNode13;

};


#endif // __mp_QuadraticPyramid13N_hxx__
