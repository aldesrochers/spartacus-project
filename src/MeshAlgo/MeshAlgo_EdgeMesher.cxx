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
#include <MeshAlgo_EdgeMesher.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshAlgo_EdgeMesher::MeshAlgo_EdgeMesher()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshAlgo_EdgeMesher::~MeshAlgo_EdgeMesher()
{

}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const TopoDS_Edge& MeshAlgo_EdgeMesher::Edge() const
{
    return myEdge;
}

// ============================================================================
/*!
 *  \brief SetEdge()
*/
// ============================================================================
void MeshAlgo_EdgeMesher::SetEdge(const TopoDS_Edge &theEdge)
{
    myEdge = theEdge;
}

