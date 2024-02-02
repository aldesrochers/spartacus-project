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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshLib_MakeNode.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode::MeshLib_MakeNode(const Standard_Real theX,
                                   const Standard_Real theY,
                                   const Standard_Real theZ)
{
    Initialize(theX, theY, theZ);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode::MeshLib_MakeNode(const gp_Pnt& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode::MeshLib_MakeNode(const Handle(Mesh_Node)& theNode)
{
    Initialize(theNode);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeNode::~MeshLib_MakeNode()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshLib_MakeNode::Build()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode::Initialize(const Standard_Real theX,
                                  const Standard_Real theY,
                                  const Standard_Real theZ)
{
    gp_Pnt aPoint(theX, theY, theZ);
    Initialize(aPoint);
}


// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode::Initialize(const gp_Pnt &thePoint)
{
    Handle(Mesh_Node) aNode = new Mesh_Node(thePoint);
    Initialize(aNode);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode::Initialize(const Handle(Mesh_Node)& theNode)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeNode(MeshDS::Node(myObject), theNode);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node&  MeshLib_MakeNode::Node()
{
    return MeshDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Node()
*/
// ============================================================================
MeshLib_MakeNode::operator MeshDS_Node()
{
    return Node();
}

