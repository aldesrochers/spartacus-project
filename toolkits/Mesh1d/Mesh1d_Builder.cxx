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
#include <Mesh1d_Builder.hxx>
#include <Mesh1d_Point.hxx>
#include <MeshDS_TNode.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Builder::Mesh1d_Builder()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_Builder::~Mesh1d_Builder()
{

}

// ============================================================================
/*!
 *  \brief MakeNode()
*/
// ============================================================================
void Mesh1d_Builder::MakeNode(MeshDS_Node &theNode,
                              const gp_Pnt1d &thePoint) const
{
    //MakeNode(theNode);
    UpdateNode(theNode, thePoint);
}


// ============================================================================
/*!
 *  \brief UpdateNode()
*/
// ============================================================================
void Mesh1d_Builder::UpdateNode(const MeshDS_Node &theNode,
                                const gp_Pnt1d& thePoint) const
{
    const Handle(MeshDS_TNode)& aTNode = *((Handle(MeshDS_TNode)*) &theNode.TObject());
    Handle(Mesh1d_Point) aPoint = new Mesh1d_Point(thePoint);
    aTNode->SetPoint(aPoint);
}
