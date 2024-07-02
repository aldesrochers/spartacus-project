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


#ifndef __Mesh1d_Cell_hxx__
#define __Mesh1d_Cell_hxx__

// Spartacus
#include <Mesh1d_Entity.hxx>
#include <Mesh1d_Vertex.hxx>

// Forward declarations
class Mesh1d_Cell;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_Cell, Mesh1d_Entity)


// ============================================================================
/*!
 *  \brief Mesh1d_Cell
*/
// ============================================================================
class Mesh1d_Cell : public Mesh1d_Entity
{

public:
    // constructors
    Standard_EXPORT Mesh1d_Cell();
    // destructors
    Standard_EXPORT ~Mesh1d_Cell();

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_Cell, Mesh1d_Entity)

};


#endif // __Mesh1d_Cell_hxx__
