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
#include <MeshDS_Builder.hxx>
#include <MeshLib_MeshBuilder1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::~MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::AddNode(const gp_Pnt1d &thePoint)
{
    MeshDS_Node aNode;
    myBuilder.MakeNode(aNode, thePoint);
    return myNodes.Add(aNode);
}


