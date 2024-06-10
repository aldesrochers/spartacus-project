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


#ifndef __Mesh1d_TNode_hxx__
#define __Mesh1d_TNode_hxx__

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshDS_TNode.hxx>


// Forward declarations
class Mesh1d_TNode;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_TNode, MeshDS_TNode)


// ============================================================================
/*!
 *  \brief Mesh1d_TNode
*/
// ============================================================================
class Mesh1d_TNode : public MeshDS_TNode
{

public:
    // constructors
    Standard_EXPORT Mesh1d_TNode();
    Standard_EXPORT Mesh1d_TNode(const gp_Pnt1d& thePoint);
    // destructors
    Standard_EXPORT ~Mesh1d_TNode();

private:

    gp_Pnt1d        myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_TNode, MeshDS_TNode);

};


#endif // __Mesh1d_TNode_hxx__
