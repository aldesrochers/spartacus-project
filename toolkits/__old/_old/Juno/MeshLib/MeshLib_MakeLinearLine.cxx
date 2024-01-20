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
#include <Mesh1d_LinearLine2N.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS_Tool.hxx>
#include <MeshLib_MakeLinearLine.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeLinearLine::MeshLib_MakeLinearLine(const MeshDS_Node& theNode1,
                                               const MeshDS_Node& theNode2)
{
    Initialize(theNode1, theNode2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeLinearLine::~MeshLib_MakeLinearLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeLinearLine::Initialize(const MeshDS_Node &theNode1,
                                        const MeshDS_Node &theNode2)
{
    MeshDS_Builder aBuilder;

    if(MeshDS_Tool::IsNode1d(theNode1) && MeshDS_Tool::IsNode1d(theNode2)) {
        Handle(Mesh1d_Node) N1 = MeshDS_Tool::Node1d(theNode1);
        Handle(Mesh1d_Node) N2 = MeshDS_Tool::Node1d(theNode2);
        Handle(Mesh1d_LinearLine2N) C = new Mesh1d_LinearLine2N(N1, N2);
        aBuilder.MakeCell(MeshDS::Cell(myObject), C);
    } else {
        throw Standard_ConstructionError("MeshLib_MakeLinearLine::Initialize()");
    }

    //  add nodes to mesh cell
    aBuilder.AddNode(MeshDS::Cell(myObject), theNode1);
    aBuilder.AddNode(MeshDS::Cell(myObject), theNode2);

    // update internal state
    SetDone();
}


