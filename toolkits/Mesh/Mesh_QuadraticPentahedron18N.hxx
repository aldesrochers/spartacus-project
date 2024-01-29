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


#ifndef __Mesh_QuadraticPentahedron18N_hxx__
#define __Mesh_QuadraticPentahedron18N_hxx__

// Spartacus
#include <Mesh_Cell.hxx>
#include <mp_QuadraticPentahedron18N.hxx>

// Forward declarations
class Mesh_QuadraticPentahedron18N;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_QuadraticPentahedron18N, Mesh_Cell)


// ============================================================================
/*!
 *  \brief Mesh_QuadraticPentahedron18N
*/
// ============================================================================
class Mesh_QuadraticPentahedron18N : public Mesh_Cell
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_QuadraticPentahedron18N();
    Standard_EXPORT Mesh_QuadraticPentahedron18N(const mp_QuadraticPentahedron18N& theConnectivity);
    // destructors
    Standard_EXPORT ~Mesh_QuadraticPentahedron18N();

public:

    Standard_EXPORT MeshAbs_TypeOfCell      Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT const mp_QuadraticPentahedron18N&   Connectivity() const;
    Standard_EXPORT void                                SetConnectivity(const mp_QuadraticPentahedron18N& theConnectivity);

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT Standard_Integer    Node3() const;
    Standard_EXPORT Standard_Integer    Node4() const;
    Standard_EXPORT Standard_Integer    Node5() const;
    Standard_EXPORT Standard_Integer    Node6() const;
    Standard_EXPORT Standard_Integer    Node7() const;
    Standard_EXPORT Standard_Integer    Node8() const;
    Standard_EXPORT Standard_Integer    Node9() const;
    Standard_EXPORT Standard_Integer    Node10() const;
    Standard_EXPORT Standard_Integer    Node11() const;
    Standard_EXPORT Standard_Integer    Node12() const;
    Standard_EXPORT Standard_Integer    Node13() const;
    Standard_EXPORT Standard_Integer    Node14() const;
    Standard_EXPORT Standard_Integer    Node15() const;
    Standard_EXPORT Standard_Integer    Node16() const;
    Standard_EXPORT Standard_Integer    Node17() const;
    Standard_EXPORT Standard_Integer    Node18() const;
    Standard_EXPORT void                SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                SetNode3(const Standard_Integer theNode3);
    Standard_EXPORT void                SetNode4(const Standard_Integer theNode4);
    Standard_EXPORT void                SetNode5(const Standard_Integer theNode5);
    Standard_EXPORT void                SetNode6(const Standard_Integer theNode6);
    Standard_EXPORT void                SetNode7(const Standard_Integer theNode7);
    Standard_EXPORT void                SetNode8(const Standard_Integer theNode8);
    Standard_EXPORT void                SetNode9(const Standard_Integer theNode9);
    Standard_EXPORT void                SetNode10(const Standard_Integer theNode10);
    Standard_EXPORT void                SetNode11(const Standard_Integer theNode11);
    Standard_EXPORT void                SetNode12(const Standard_Integer theNode12);
    Standard_EXPORT void                SetNode13(const Standard_Integer theNode13);
    Standard_EXPORT void                SetNode14(const Standard_Integer theNode14);
    Standard_EXPORT void                SetNode15(const Standard_Integer theNode15);
    Standard_EXPORT void                SetNode16(const Standard_Integer theNode16);
    Standard_EXPORT void                SetNode17(const Standard_Integer theNode17);
    Standard_EXPORT void                SetNode18(const Standard_Integer theNode18);

private:

    mp_QuadraticPentahedron18N     myConnectivity;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_QuadraticPentahedron18N, Mesh_Cell);

};


#endif // __Mesh_QuadraticPentahedron18N_hxx__
