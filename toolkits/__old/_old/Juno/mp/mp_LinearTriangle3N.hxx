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


#ifndef __mp_LinearTriangle3N_hxx__
#define __mp_LinearTriangle3N_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <mp_Triangle.hxx>


// ============================================================================
/*!
 *  \brief mp_LinearTriangle3N
*/
// ============================================================================
class mp_LinearTriangle3N
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_LinearTriangle3N();
    Standard_EXPORT mp_LinearTriangle3N(const Standard_Integer theNode1,
                                        const Standard_Integer theNode2,
                                        const Standard_Integer theNode3);
    // destructors
    Standard_EXPORT ~mp_LinearTriangle3N();

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT Standard_Integer    Node3() const;
    Standard_EXPORT void                SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                SetNode3(const Standard_Integer theNode3);
    Standard_EXPORT const mp_Triangle&  Triangle() const;

public:

    mp_Triangle     myTriangle;

};

#endif // __mp_LinearTriangle3N_hxx__
