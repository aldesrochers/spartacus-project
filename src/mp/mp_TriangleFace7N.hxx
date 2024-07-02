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


#ifndef __mp_TriangleFace7N_hxx__
#define __mp_TriangleFace7N_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <mp_Edge3N.hxx>


// ============================================================================
/*!
 *  \brief mp_TriangleFace7N
*/
// ============================================================================
class mp_TriangleFace7N
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_TriangleFace7N(const Standard_Integer theNode1,
                                      const Standard_Integer theNode2,
                                      const Standard_Integer theNode3,
                                      const Standard_Integer theNode4,
                                      const Standard_Integer theNode5,
                                      const Standard_Integer theNode6,
                                      const Standard_Integer theNode7);
    // destructors
    Standard_EXPORT ~mp_TriangleFace7N();

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT Standard_Integer    Node3() const;
    Standard_EXPORT Standard_Integer    Node4() const;
    Standard_EXPORT Standard_Integer    Node5() const;
    Standard_EXPORT Standard_Integer    Node6() const;
    Standard_EXPORT Standard_Integer    Node7() const;
    Standard_EXPORT mp_Edge3N           Edge1() const;
    Standard_EXPORT mp_Edge3N           Edge2() const;
    Standard_EXPORT mp_Edge3N           Edge3() const;

private:

    Standard_Integer        myNode1;
    Standard_Integer        myNode2;
    Standard_Integer        myNode3;
    Standard_Integer        myNode4;
    Standard_Integer        myNode5;
    Standard_Integer        myNode6;
    Standard_Integer        myNode7;

};


#endif // __mp_TriangleFace7N_hxx__
