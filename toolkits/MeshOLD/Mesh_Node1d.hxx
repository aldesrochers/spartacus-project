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


#ifndef __Mesh_Node1d_hxx__
#define __Mesh_Node1d_hxx__

// Spartacus
#include <Mesh_Node.hxx>


// ============================================================================
/*!
 *  \brief Mesh_Node1d
*/
// ============================================================================
class Mesh_Node1d : public Mesh_Node
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_Node1d();
    Standard_EXPORT Mesh_Node1d(const Standard_Real theX);
    // destructors
    Standard_EXPORT ~Mesh_Node1d();

public:

    Standard_EXPORT MeshAbs_TypeOfNode  Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real       Distance(const Mesh_Node1d& theNode) const;
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT Standard_Real       X() const;

private:

    Standard_Real       myX;



};


#endif // __Mesh_Node1d_hxx__
