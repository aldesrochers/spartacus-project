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


#ifndef __Mesh2d_LinearLine2N_hxx__
#define __Mesh2d_LinearLine2N_hxx__

// Spartacus
#include <Mesh2d_Cell.hxx>
#include <mp_LinearLine2N.hxx>

// Forward declarations
class Mesh2d_LinearLine2N;

// Handles
DEFINE_STANDARD_HANDLE(Mesh2d_LinearLine2N, Mesh2d_Cell);


// ============================================================================
/*!
 *  \brief Mesh2d_LinearLine2N
*/
// ============================================================================
class Mesh2d_LinearLine2N : public Mesh2d_Cell
{

public:
    // constructors
    Standard_EXPORT Mesh2d_LinearLine2N();
    Standard_EXPORT Mesh2d_LinearLine2N(const Standard_Integer theNode1,
                                        const Standard_Integer theNode2);
    // destructors
    Standard_EXPORT ~Mesh2d_LinearLine2N();

public:

    Standard_EXPORT const mp_LinearLine2N&  LinearLine() const;
    Standard_EXPORT Standard_Integer        Node1() const;
    Standard_EXPORT Standard_Integer        Node2() const;
    Standard_EXPORT void                    SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                    SetNode2(const Standard_Integer theNode2);

private:

    mp_LinearLine2N     myLinearLine;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh2d_LinearLine2N, Mesh2d_Cell);

};

#endif // __Mesh2d_LinearLine2N_hxx__
