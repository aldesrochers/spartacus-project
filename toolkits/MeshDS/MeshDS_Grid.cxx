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
#include <MeshDS_Grid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Grid::MeshDS_Grid()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Grid::~MeshDS_Grid()
{

}

// ============================================================================
/*!
 *  \brief IsNull()
*/
// ============================================================================
Standard_Boolean MeshDS_Grid::IsNull() const
{
    return myTGrid.IsNull();
}

// ============================================================================
/*!
 *  \brief SetTGrid()
*/
// ============================================================================
void MeshDS_Grid::SetTGrid(const Handle(MeshDS_TGrid) &theTGrid)
{
    myTGrid = theTGrid;
}

// ============================================================================
/*!
 *  \brief TGrid()
*/
// ============================================================================
const Handle(MeshDS_TGrid)& MeshDS_Grid::TGrid() const
{
    return myTGrid;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfGrid MeshDS_Grid::Type() const
{
    return myTGrid->Type();
}
