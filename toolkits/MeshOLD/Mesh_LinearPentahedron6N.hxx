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


#ifndef __Mesh_LinearPentahedron6N_hxx__
#define __Mesh_LinearPentahedron6N_hxx__

// Spartacus
#include <Mesh_Cell.hxx>


// ============================================================================
/*!
 *  \brief Mesh_LinearPentahedron6N
*/
// ============================================================================
class Mesh_LinearPentahedron6N : public Mesh_Cell
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_LinearPentahedron6N();
    Standard_EXPORT Mesh_LinearPentahedron6N(const Standard_Integer theNode1,
                                             const Standard_Integer theNode2,
                                             const Standard_Integer theNode3,
                                             const Standard_Integer theNode4,
                                             const Standard_Integer theNode5,
                                             const Standard_Integer theNode6);
    // destructors
    Standard_EXPORT ~Mesh_LinearPentahedron6N();

public:

    Standard_EXPORT MeshAbs_TypeOfCell      Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Integer        Node1() const;
    Standard_EXPORT Standard_Integer        Node2() const;
    Standard_EXPORT Standard_Integer        Node3() const;
    Standard_EXPORT Standard_Integer        Node4() const;
    Standard_EXPORT Standard_Integer        Node5() const;
    Standard_EXPORT Standard_Integer        Node6() const;
    Standard_EXPORT void                    SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                    SetNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                    SetNode3(const Standard_Integer theNode3);
    Standard_EXPORT void                    SetNode4(const Standard_Integer theNode4);
    Standard_EXPORT void                    SetNode5(const Standard_Integer theNode5);
    Standard_EXPORT void                    SetNode6(const Standard_Integer theNode6);

private:

    Standard_Integer        myNode1;
    Standard_Integer        myNode2;
    Standard_Integer        myNode3;
    Standard_Integer        myNode4;
    Standard_Integer        myNode5;
    Standard_Integer        myNode6;

};


#endif // __Mesh_LinearPentahedron6N_hxx__
