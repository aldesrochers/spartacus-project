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
 *  \brief WriteMesh()
*/
// ============================================================================
void VVM::WriteMesh(const Handle(VVM_BaseMesh) &theMesh,
                    Standard_OStream &theStream)
{
    // write the header
    theStream << "****************************************\n";
    theStream << "VVM_Mesh (" << theMesh->Dimension() << "D)\n";
    theStream << "****************************************\n\n";

    // write the number of nodes
    if(theMesh->Dimension() == VVM_MD_1D) {
        Handle(VVM_Mesh1d) aMesh1d = Handle(VVM_Mesh1d)::DownCast(theMesh);
        theStream << "Number of nodes : " << aMesh1d->NbNodes() << "\n";
    } else if(theMesh->Dimension() == VVM_MD_2D) {
        Handle(VVM_Mesh2d) aMesh2d = Handle(VVM_Mesh2d)::DownCast(theMesh);
        theStream << "Number of nodes : " << aMesh2d->NbNodes() << "\n";
    } else {
        Handle(VVM_Mesh) aMesh3d = Handle(VVM_Mesh)::DownCast(theMesh);
        theStream << "Number of nodes : " << aMesh3d->NbNodes() << "\n";
    }

    // write number of cells, node groups, cell groups
    theStream << "Number of cells : " << theMesh->NbCells() << "\n";
    theStream << "Number of node groups : " << theMesh->NbNodeGroups() << "\n";
    theStream << "Number of cell groups : " << theMesh->NbCellGroups() << "\n";
    theStream << "\n";

    // write nodes
    if(theMesh->Dimension() == VVM_MD_1D) {
        Handle(VVM_Mesh1d) aMesh1d = Handle(VVM_Mesh1d)::DownCast(theMesh);
        theStream << "Nodes (ID, X)\n";
        for(Standard_Integer i=1; i<=aMesh1d->NbNodes(); i++) {
            VVM_Node1d aNode1d = aMesh1d->Node(i);
            theStream << i << " " << aNode1d.X() << "\n";
        }
    } else if(theMesh->Dimension() == VVM_MD_2D) {
        Handle(VVM_Mesh2d) aMesh2d = Handle(VVM_Mesh2d)::DownCast(theMesh);
        theStream << "Nodes (ID, X, Y)\n";
        for(Standard_Integer i=1; i<=aMesh2d->NbNodes(); i++) {
            VVM_Node2d aNode2d = aMesh2d->Node(i);
            theStream << i << " " << aNode2d.X() << " " << aNode2d.Y() << "\n";
        }
    } else {
        Handle(VVM_Mesh) aMesh3d = Handle(VVM_Mesh)::DownCast(theMesh);
        theStream << "Nodes (ID, X, Y, Z)\n";
        for(Standard_Integer i=1; i<=aMesh3d->NbNodes(); i++) {
            VVM_Node aNode3d = aMesh3d->Node(i);
            theStream << i << " " << aNode3d.X() << " " << aNode3d.Y() << " " << aNode3d.Z() << "\n";
        }
    }
    theStream << "\n";

    // write cells
    theStream << "Cells (ID, Type, List of nodes)\n";
    for(Standard_Integer i=1; i<=theMesh->NbCells(); i++) {
        VVM_Cell aCell = theMesh->Cell(i);
        theStream << i << " " << aCell.Type() << " ";
        for(Standard_Integer j=1; j<=aCell.NbNodes(); j++)
            theStream << aCell.Node(j) << ":";
        theStream << "\n";
    }
    theStream << "\n";

    // write node groups
    theStream << "Node Groups (ID, 'Name', List of nodes)\n";
    for(Standard_Integer i=1; i<=theMesh->NbNodeGroups(); i++) {
        VVM_Group aGroup = theMesh->NodeGroup(i);
        theStream << i << "'" << aGroup.Name() << "' ";
        for(Standard_Integer j=1; j<=aGroup.NbElements(); j++)
            theStream << aGroup.Element(j) << ":";
        theStream << "\n";
    }
    theStream << "\n";

    // write cell groups
    theStream << "Cell Groups (ID, 'Name', List of cells)\n";
    for(Standard_Integer i=1; i<=theMesh->NbCellGroups(); i++) {
        VVM_Group aGroup = theMesh->CellGroup(i);
        theStream << i << "'" << aGroup.Name() << "' ";
        for(Standard_Integer j=1; j<=aGroup.NbElements(); j++)
            theStream << aGroup.Element(j) << ":";
        theStream << "\n";
    }
    theStream << "\n";

}

// ============================================================================
/*!
 *  \brief Write()
*/
// ============================================================================
void VVM::Write(const Handle(VVM_Mesh1d) &theMesh,
                Standard_OStream &theStream)
{
    WriteMesh(theMesh, theStream);
}

// ============================================================================
/*!
 *  \brief Write()
*/
// ============================================================================
void VVM::Write(const Handle(VVM_Mesh2d) &theMesh,
                Standard_OStream &theStream)
{
    WriteMesh(theMesh, theStream);
}

// ============================================================================
/*!
 *  \brief Write()
*/
// ============================================================================
void VVM::Write(const Handle(VVM_Mesh) &theMesh,
                Standard_OStream &theStream)
{
    WriteMesh(theMesh, theStream);
}

