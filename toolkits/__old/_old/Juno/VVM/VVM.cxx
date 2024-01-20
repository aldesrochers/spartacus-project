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
#include <VVM.hxx>



// ============================================================================
/*!
 *  \brief Write()
*/
// ============================================================================
void VVM::Write(const Handle(VVM_Mesh) &theMesh,
                Standard_OStream &theStream)
{
    // write the header
    theStream << "VVM_Mesh()\n";
    theStream << "Number of nodes : " << theMesh->NbNodes() << "\n";
    theStream << "Number of cells : " << theMesh->NbCells() << "\n";
    theStream << "Number of node groups : " << theMesh->NbNodeGroups() << "\n";
    theStream << "Number of cell groups : " << theMesh->NbCellGroups() << "\n";
    theStream << "\n";

    // write nodes
    theStream << "Nodes (ID, [X, Y, Z])\n";
    for(Standard_Integer i=1; i<=theMesh->NbNodes(); i++) {
        Handle(VVM_Node) aNode = theMesh->Node(i);
        theStream << i << " [" << aNode->X() << " " << aNode->Y() << " " << aNode->Z() << "]\n";
    }
    theStream << "\n";

    // write cells
    theStream << "Cells (ID, Type, NbNodes, [NodeIds])\n";
    for(Standard_Integer i=1; i<=theMesh->NbCells(); i++) {
        Handle(VVM_Cell) aCell = theMesh->Cell(i);
        theStream << i << " " << aCell->Type() << " " << aCell->NbNodes() << " [";
        for(Standard_Integer j=1; j<aCell->NbNodes(); j++)
            theStream << aCell->NodeId(j) << " ";
        theStream << aCell->NodeId(aCell->NbNodes()) << "]\n";
    }
    theStream << "\n";

    // write node groups
    theStream << "Node groups (ID, Name, NbNodes, [NodeIds])\n";
    for(Standard_Integer i=1; i<=theMesh->NbNodeGroups(); i++) {
        Handle(VVM_Group) aGroup = theMesh->NodeGroup(i);
        theStream << i << " '" << aGroup->Name().ToCString() << "' " << aGroup->NbElements() << " [";
        for(Standard_Integer j=1; j<aGroup->NbElements(); j++)
            theStream << aGroup->ElementId(j) << " ";
        theStream << aGroup->ElementId(aGroup->NbElements()) << "]\n";
    }
    theStream << "\n";

    // write cell groups
    theStream << "Cell groups (ID, Name, NbCells, [CellIds])\n";
    for(Standard_Integer i=1; i<=theMesh->NbCellGroups(); i++) {
        Handle(VVM_Group) aGroup = theMesh->CellGroup(i);
        theStream << i << " '" << aGroup->Name().ToCString() << "' " << aGroup->NbElements() << " [";
        for(Standard_Integer j=1; j<aGroup->NbElements(); j++)
            theStream << aGroup->ElementId(j) << " ";
        theStream << aGroup->ElementId(aGroup->NbElements()) << "]\n";
    }
    theStream << "\n";
}

