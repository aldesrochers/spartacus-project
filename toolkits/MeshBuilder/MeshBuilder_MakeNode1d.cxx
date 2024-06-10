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


// Spartacus
#include <MeshBuilder_MakeNode.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeNode::MeshBuilder_MakeNode(const gp_Pnt& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeNode::~MeshBuilder_MakeNode()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeNode::Initialize(const gp_Pnt &thePoint)
{
    MeshDS_Builder aBuilder;
    //aBuilder.MakeNode(MeshDS::Node(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node& MeshBuilder_MakeNode::Node() const
{
    return MeshDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator NodeDS_Node()
*/
// ============================================================================
MeshBuilder_MakeNode::operator MeshDS_Node() const
{
    return Node();
}
