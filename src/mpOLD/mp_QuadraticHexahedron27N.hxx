// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
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


#ifndef __mp_QuadraticHexahedron27N_hxx__
#define __mp_QuadraticHexahedron27N_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <mp_QuadrangleFace9N.hxx>


// ============================================================================
/*!
 *  \brief mp_QuadraticHexahedron27N
*/
// ============================================================================
class mp_QuadraticHexahedron27N
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_QuadraticHexahedron27N();
    Standard_EXPORT mp_QuadraticHexahedron27N(const Standard_Integer theNode1,
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
                                              const Standard_Integer theNode13,
                                              const Standard_Integer theNode14,
                                              const Standard_Integer theNode15,
                                              const Standard_Integer theNode16,
                                              const Standard_Integer theNode17,
                                              const Standard_Integer theNode18,
                                              const Standard_Integer theNode19,
                                              const Standard_Integer theNode20,
                                              const Standard_Integer theNode21,
                                              const Standard_Integer theNode22,
                                              const Standard_Integer theNode23,
                                              const Standard_Integer theNode24,
                                              const Standard_Integer theNode25,
                                              const Standard_Integer theNode26,
                                              const Standard_Integer theNode27);
    // destructors
    Standard_EXPORT ~mp_QuadraticHexahedron27N();

public:

    Standard_EXPORT mp_QuadrangleFace9N     Face1() const;
    Standard_EXPORT mp_QuadrangleFace9N     Face2() const;
    Standard_EXPORT mp_QuadrangleFace9N     Face3() const;
    Standard_EXPORT mp_QuadrangleFace9N     Face4() const;
    Standard_EXPORT mp_QuadrangleFace9N     Face5() const;
    Standard_EXPORT mp_QuadrangleFace9N     Face6() const;
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
    Standard_EXPORT Standard_Integer        Node14() const;
    Standard_EXPORT Standard_Integer        Node15() const;
    Standard_EXPORT Standard_Integer        Node16() const;
    Standard_EXPORT Standard_Integer        Node17() const;
    Standard_EXPORT Standard_Integer        Node18() const;
    Standard_EXPORT Standard_Integer        Node19() const;
    Standard_EXPORT Standard_Integer        Node20() const;
    Standard_EXPORT Standard_Integer        Node21() const;
    Standard_EXPORT Standard_Integer        Node22() const;
    Standard_EXPORT Standard_Integer        Node23() const;
    Standard_EXPORT Standard_Integer        Node24() const;
    Standard_EXPORT Standard_Integer        Node25() const;
    Standard_EXPORT Standard_Integer        Node26() const;
    Standard_EXPORT Standard_Integer        Node27() const;
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
    Standard_EXPORT void                    SetNode14(const Standard_Integer theNode14);
    Standard_EXPORT void                    SetNode15(const Standard_Integer theNode15);
    Standard_EXPORT void                    SetNode16(const Standard_Integer theNode16);
    Standard_EXPORT void                    SetNode17(const Standard_Integer theNode17);
    Standard_EXPORT void                    SetNode18(const Standard_Integer theNode18);
    Standard_EXPORT void                    SetNode19(const Standard_Integer theNode19);
    Standard_EXPORT void                    SetNode20(const Standard_Integer theNode20);
    Standard_EXPORT void                    SetNode21(const Standard_Integer theNode21);
    Standard_EXPORT void                    SetNode22(const Standard_Integer theNode22);
    Standard_EXPORT void                    SetNode23(const Standard_Integer theNode23);
    Standard_EXPORT void                    SetNode24(const Standard_Integer theNode24);
    Standard_EXPORT void                    SetNode25(const Standard_Integer theNode25);
    Standard_EXPORT void                    SetNode26(const Standard_Integer theNode26);
    Standard_EXPORT void                    SetNode27(const Standard_Integer theNode27);

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
    Standard_Integer        myNode14;
    Standard_Integer        myNode15;
    Standard_Integer        myNode16;
    Standard_Integer        myNode17;
    Standard_Integer        myNode18;
    Standard_Integer        myNode19;
    Standard_Integer        myNode20;
    Standard_Integer        myNode21;
    Standard_Integer        myNode22;
    Standard_Integer        myNode23;
    Standard_Integer        myNode24;
    Standard_Integer        myNode25;
    Standard_Integer        myNode26;
    Standard_Integer        myNode27;

};


#endif // __mp_QuadraticHexahedron27N_hxx__
