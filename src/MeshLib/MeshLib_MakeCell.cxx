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
#include <MeshLib_MakeCell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeCell::MeshLib_MakeCell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeCell::~MeshLib_MakeCell()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const MeshDS_Cell& MeshLib_MakeCell::Cell()
{
    return MeshDS::Cell(Object());
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
MeshLib_CellError MeshLib_MakeCell::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Cell()
*/
// ============================================================================
MeshLib_MakeCell::operator MeshDS_Cell()
{
    return Cell();
}
