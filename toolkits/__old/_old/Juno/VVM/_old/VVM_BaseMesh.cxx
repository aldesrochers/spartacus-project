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
#include <VVM_BaseMesh.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_BaseMesh::VVM_BaseMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_BaseMesh::~VVM_BaseMesh()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const VVM_Cell& VVM_BaseMesh::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief CellGroup()
*/
// ============================================================================
const VVM_Group& VVM_BaseMesh::CellGroup(const Standard_Integer theIndex) const
{
    return myCellGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief CellGroups()
*/
// ============================================================================
const VVM_Array1OfGroup& VVM_BaseMesh::CellGroups() const
{
    return myCellGroups;
}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const VVM_Array1OfCell& VVM_BaseMesh::Cells() const
{
    return myCells;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer VVM_BaseMesh::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief NbCellGroups()
*/
// ============================================================================
Standard_Integer VVM_BaseMesh::NbCellGroups() const
{
    return myCellGroups.Size();
}

// ============================================================================
/*!
 *  \brief NbNodeGroups()
*/
// ============================================================================
Standard_Integer VVM_BaseMesh::NbNodeGroups() const
{
    return myNodeGroups.Size();
}

// ============================================================================
/*!
 *  \brief NodeGroup()
*/
// ============================================================================
const VVM_Group& VVM_BaseMesh::NodeGroup(const Standard_Integer theIndex) const
{
    return myNodeGroups.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NodeGroups()
*/
// ============================================================================
const VVM_Array1OfGroup& VVM_BaseMesh::NodeGroups() const
{
    return myNodeGroups;
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void VVM_BaseMesh::ResizeCells(const Standard_Integer theNbCells,
                               const Standard_Boolean theCopyOld)
{
    myCells.Resize(1, theNbCells, theCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeCellGroups()
*/
// ============================================================================
void VVM_BaseMesh::ResizeCellGroups(const Standard_Integer theNbCellGroups,
                                    const Standard_Boolean theCopyOld)
{
    if(theNbCellGroups <= 1)
        return;
    myCellGroups.Resize(1, theNbCellGroups, theCopyOld);
}

// ============================================================================
/*!
 *  \brief ResizeNodeGroups()
*/
// ============================================================================
void VVM_BaseMesh::ResizeNodeGroups(const Standard_Integer theNbNodeGroups,
                                    const Standard_Boolean theCopyOld)
{
    if(theNbNodeGroups <= 1)
        return;
    myNodeGroups.Resize(1, theNbNodeGroups, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void VVM_BaseMesh::SetCell(const Standard_Integer theIndex,
                           const VVM_Cell &theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetCellGroup()
*/
// ============================================================================
void VVM_BaseMesh::SetCellGroup(const Standard_Integer theIndex,
                                const VVM_Group &theGroup)
{
    myCellGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetCellGroups()
*/
// ============================================================================
void VVM_BaseMesh::SetCellGroups(const VVM_Array1OfGroup &theCellGroups)
{
    myCellGroups = theCellGroups;
}

// ============================================================================
/*!
 *  \brief SetNodeGroup()
*/
// ============================================================================
void VVM_BaseMesh::SetNodeGroup(const Standard_Integer theIndex,
                                const VVM_Group &theGroup)
{
    myNodeGroups.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetNodeGroups()
*/
// ============================================================================
void VVM_BaseMesh::SetNodeGroups(const VVM_Array1OfGroup &theNodeGroups)
{
    myNodeGroups = theNodeGroups;
}

// ============================================================================
/*!
 *  \brief SetCells()
*/
// ============================================================================
void VVM_BaseMesh::SetCells(const VVM_Array1OfCell &theCells)
{
    myCells = theCells;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(VVM_BaseMesh, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(VVM_BaseMesh, Standard_Transient);
