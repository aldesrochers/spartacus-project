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


#ifndef __Mesh1d_LinearLine2N_hxx__
#define __Mesh1d_LinearLine2N_hxx__

// Spartacus
#include <Mesh1d_Cell.hxx>
#include <mp_LinearLine2N.hxx>

// Forward declarations
class Mesh1d_LinearLine2N;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_LinearLine2N, Mesh1d_Cell)


// ============================================================================
/*!
 *  \brief Mesh1d_LinearLine2N
*/
// ============================================================================
class Mesh1d_LinearLine2N : public Mesh1d_Cell
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh1d_LinearLine2N();
    Standard_EXPORT Mesh1d_LinearLine2N(const mp_LinearLine2N& theConnectivity);
    // destructors
    Standard_EXPORT ~Mesh1d_LinearLine2N();

public:

    Standard_EXPORT MeshAbs_TypeOfCell      Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT const mp_LinearLine2N&  Connectivity() const;
    Standard_EXPORT void                    SetConnectivity(const mp_LinearLine2N& theConnectivity);

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT void                SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetNode2(const Standard_Integer theNode2);

private:

    mp_LinearLine2N     myConnectivity;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_LinearLine2N, Mesh1d_Cell);

};


#endif // __Mesh1d_LinearLine2N_hxx__
