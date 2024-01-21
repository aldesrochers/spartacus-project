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


#ifndef __mp_Tetrahedron4N_hxx__
#define __mp_Tetrahedron4N_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <mp_Node.hxx>
#include <mp_TriangularFace3N.hxx>


// ============================================================================
/*!
 *  \brief mp_Tetrahedron4N
*/
// ============================================================================
class mp_Tetrahedron4N
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    Standard_EXPORT mp_Tetrahedron4N();
    Standard_EXPORT mp_Tetrahedron4N(const mp_Node& theNode1,
                                     const mp_Node& theNode2,
                                     const mp_Node& theNode3,
                                     const mp_Node& theNode4);
    // destructors
    Standard_EXPORT ~mp_Tetrahedron4N();

public:

    Standard_EXPORT mp_TriangularFace3N     Face1() const;
    Standard_EXPORT mp_TriangularFace3N     Face2() const;
    Standard_EXPORT mp_TriangularFace3N     Face3() const;
    Standard_EXPORT mp_TriangularFace3N     Face4() const;
    Standard_EXPORT const mp_Node&          Node1() const;
    Standard_EXPORT const mp_Node&          Node2() const;
    Standard_EXPORT const mp_Node&          Node3() const;
    Standard_EXPORT const mp_Node&          Node4() const;
    Standard_EXPORT void                    SetNode1(const mp_Node& theNode1);
    Standard_EXPORT void                    SetNode2(const mp_Node& theNode2);
    Standard_EXPORT void                    SetNode3(const mp_Node& theNode3);
    Standard_EXPORT void                    SetNode4(const mp_Node& theNode4);

private:

    mp_Node         myNode1;
    mp_Node         myNode2;
    mp_Node         myNode3;
    mp_Node         myNode4;

};

#endif // __mp_Tetrahedron4N_hxx__
