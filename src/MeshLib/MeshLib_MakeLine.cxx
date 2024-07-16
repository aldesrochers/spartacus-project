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
#include <MeshDS_Tool.hxx>
#include <MeshLib_MakeLine.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeEdge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeLine::MeshLib_MakeLine(const MeshDS_Node& theNode1,
                                   const MeshDS_Node& theNode2)
{
    Initialize(theNode1, theNode2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeLine::~MeshLib_MakeLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeLine::Initialize(const MeshDS_Node &theNode1,
                                  const MeshDS_Node &theNode2)
{
    TopoDS_Vertex aVertex1 = MeshDS_Tool::Vertex(theNode1);
    TopoDS_Vertex aVertex2 = MeshDS_Tool::Vertex(theNode2);

    // make edge topology
    BRepBuilderAPI_MakeEdge anEdgeBuilder(aVertex1, aVertex2);
    if(!anEdgeBuilder.IsDone()) {
        myError = MeshLib_CellEdgeGeometryError;
        return;
    }
    TopoDS_Edge anEdge = anEdgeBuilder.Edge();
}


