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


#ifndef __Mesh_LinearHexahedron8N_hxx__
#define __Mesh_LinearHexahedron8N_hxx__

// Spartacus
#include <Mesh_Cell.hxx>
#include <mp_LinearHexahedron8N.hxx>

// Forward declarations
class Mesh_LinearHexahedron8N;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_LinearHexahedron8N, Mesh_Cell)


// ============================================================================
/*!
 *  \brief Mesh_LinearHexahedron8N
*/
// ============================================================================
class Mesh_LinearHexahedron8N : public Mesh_Cell
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_LinearHexahedron8N();
    Standard_EXPORT Mesh_LinearHexahedron8N(const mp_LinearHexahedron8N& theConnectivity);
    // destructors
    Standard_EXPORT ~Mesh_LinearHexahedron8N();

public:

    Standard_EXPORT MeshAbs_TypeOfCell      Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT const mp_LinearHexahedron8N&    Connectivity() const;
    Standard_EXPORT void                            SetConnectivity(const mp_LinearHexahedron8N& theConnectivity);

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT Standard_Integer    Node3() const;
    Standard_EXPORT Standard_Integer    Node4() const;
    Standard_EXPORT Standard_Integer    Node5() const;
    Standard_EXPORT Standard_Integer    Node6() const;
    Standard_EXPORT Standard_Integer    Node7() const;
    Standard_EXPORT Standard_Integer    Node8() const;
    Standard_EXPORT void                SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                SetNode3(const Standard_Integer theNode3);
    Standard_EXPORT void                SetNode4(const Standard_Integer theNode4);
    Standard_EXPORT void                SetNode5(const Standard_Integer theNode5);
    Standard_EXPORT void                SetNode6(const Standard_Integer theNode6);
    Standard_EXPORT void                SetNode7(const Standard_Integer theNode7);
    Standard_EXPORT void                SetNode8(const Standard_Integer theNode8);

private:

    mp_LinearHexahedron8N     myConnectivity;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_LinearHexahedron8N, Mesh_Cell);

};


#endif // __Mesh_LinearHexahedron8N_hxx__
