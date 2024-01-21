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
#include <MeshDS_Cell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_Cell::MeshDS_Cell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_Cell::~MeshDS_Cell()
{

}

// ============================================================================
/*!
 *  \brief IsNull()
*/
// ============================================================================
Standard_Boolean MeshDS_Cell::IsNull() const
{
    return myTCell.IsNull();
}

// ============================================================================
/*!
 *  \brief SetTCell()
*/
// ============================================================================
void MeshDS_Cell::SetTCell(const Handle(MeshDS_TCell) &theTCell)
{
    myTCell = theTCell;
}

// ============================================================================
/*!
 *  \brief TCell()
*/
// ============================================================================
const Handle(MeshDS_TCell)& MeshDS_Cell::TCell() const
{
    return myTCell;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfCell MeshDS_Cell::Type() const
{
    return myTCell->Type();
}
