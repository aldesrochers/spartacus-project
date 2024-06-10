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


#ifndef __MeshBuilder_MakeNode_hxx__
#define __MeshBuilder_MakeNode_hxx__

// Spartacus
#include <MeshBuilder_MakeObject.hxx>
#include <MeshDS_Node.hxx>

// OpenCascade
#include <gp_Pnt.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeNode
*/
// ============================================================================
class MeshBuilder_MakeNode : public MeshBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeNode();
    Standard_EXPORT MeshBuilder_MakeNode(const gp_Pnt& thePoint);
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeNode();

public:

    Standard_EXPORT const MeshDS_Node&  Node() const;
    Standard_EXPORT operator            MeshDS_Node() const;

protected:

    Standard_EXPORT void        Initialize(const gp_Pnt& thePoint);

};


#endif // __MeshBuilder_MakeNode_hxx__
