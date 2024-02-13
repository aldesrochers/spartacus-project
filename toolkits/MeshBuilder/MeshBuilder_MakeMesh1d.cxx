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
#include <MeshBuilder_MakeMesh1d.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeMesh1d::MeshBuilder_MakeMesh1d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeMesh1d::~MeshBuilder_MakeMesh1d()
{

}

// ============================================================================
/*!
 *  \brief AddLinearLine()
*/
// ============================================================================
MeshDS_Cell MeshBuilder_MakeMesh1d::AddLinearLine(const MeshDS_Node& theNode1,
                                                  const MeshDS_Node& theNode2)
{
    TColStd_SequenceOfInteger aConnectivity;
    aConnectivity.Append(myNodes.FindIndex(theNode1));
    aConnectivity.Append(myNodes.FindIndex(theNode2));

    MeshDS_Cell aCell;
    //myBuilder.MakeCell(aCell, MeshAbs_CT_LinearLine1d, aConnectivity);
    myCells.Add(aCell);
    return aCell;
}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
MeshDS_Node MeshBuilder_MakeMesh1d::AddNode(const gp_Pnt1d &thePoint)
{
    MeshDS_Node aNode;
    myBuilder.MakeNode(aNode, thePoint);
    myNodes.Add(aNode);
    return aNode;
}

// ============================================================================
/*!
 *  \brief AddQuadraticLine()
*/
// ============================================================================
MeshDS_Cell MeshBuilder_MakeMesh1d::AddQuadraticLine(const MeshDS_Node& theNode1,
                                                     const MeshDS_Node& theNode2,
                                                     const MeshDS_Node& theNode3)
{
    TColStd_SequenceOfInteger aConnectivity;
    aConnectivity.Append(myNodes.FindIndex(theNode1));
    aConnectivity.Append(myNodes.FindIndex(theNode2));
    aConnectivity.Append(myNodes.FindIndex(theNode3));

    MeshDS_Cell aCell;
    //myBuilder.MakeCell(aCell, MeshAbs_CT_QuadraticLine1d, aConnectivity);
    myCells.Add(aCell);
    return aCell;
}
