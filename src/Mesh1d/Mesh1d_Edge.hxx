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


#ifndef __Mesh1d_Edge_hxx__
#define __Mesh1d_Edge_hxx__

// Spartacus
#include <Mesh1d_Object.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>

// Forward declarations
class Mesh1d_Edge;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_Edge, Mesh1d_Object)


// ============================================================================
/*!
 *  \brief Mesh1d_Edge
*/
// ============================================================================
class Mesh1d_Edge : public Mesh1d_Object
{

public:
    // constructors
    Standard_EXPORT Mesh1d_Edge();
    // destructors
    Standard_EXPORT ~Mesh1d_Edge();

public:

    Standard_EXPORT const TopoDS_Edge&      Edge() const;
    Standard_EXPORT Standard_Boolean        IsDeprecated() const;

protected:

    TopoDS_Edge     myEdge;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_Edge, Mesh1d_Object)

};


#endif // __Mesh1d_Edge_hxx__
