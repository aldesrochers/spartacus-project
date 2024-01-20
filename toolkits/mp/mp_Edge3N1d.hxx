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


#ifndef __mp_Edge3N1d_hxx__
#define __mp_Edge3N1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <mp_Node1d.hxx>


// ============================================================================
/*!
 *  \brief mp_Edge3N1d
*/
// ============================================================================
class mp_Edge3N1d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_Edge3N1d();
    Standard_EXPORT mp_Edge3N1d(const mp_Node1d& theNode1,
                                const mp_Node1d& theNode2);
    // destructors
    Standard_EXPORT ~mp_Edge3N1d();

public:

    Standard_EXPORT Standard_Real       Length() const;
    Standard_EXPORT const mp_Node1d&    Node1() const;
    Standard_EXPORT const mp_Node1d&    Node2() const;
    Standard_EXPORT const mp_Node1d&    Node3() const;
    Standard_EXPORT void                SetNode1(const mp_Node1d& theNode1);
    Standard_EXPORT void                SetNode2(const mp_Node1d& theNode2);

private:

    mp_Node1d       myNode1;
    mp_Node1d       myNode2;

};

#endif // __mp_Edge3N1d_hxx__
