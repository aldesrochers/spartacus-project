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
#include <Mesh1dAdaptor_Cell.hxx>
#include <Mesh1d_LinearLine.hxx>
#include <Mesh1d_QuadraticLine.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1dAdaptor_Cell::Mesh1dAdaptor_Cell()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1dAdaptor_Cell::Mesh1dAdaptor_Cell(const Handle(Mesh1d_Cell)& theCell)
    : myCell(theCell)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1dAdaptor_Cell::~Mesh1dAdaptor_Cell()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
const Handle(Mesh1d_Cell)& Mesh1dAdaptor_Cell::Cell() const
{
    return myCell;
}

// ============================================================================
/*!
 *  \brief CellType()
*/
// ============================================================================
MeshAbs_TypeOfCell Mesh1dAdaptor_Cell::CellType() const
{
    Handle(Standard_Type) aType = myCell->DynamicType();
    if(aType == STANDARD_TYPE(Mesh1d_LinearLine)) {
        return MeshAbs_CELL_LinearLine;
    } else if(aType == STANDARD_TYPE(Mesh1d_QuadraticLine)) {
        return MeshAbs_CELL_QuadraticLine;
    }
    return MeshAbs_CELL_Invalid;
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void Mesh1dAdaptor_Cell::SetCell(const Handle(Mesh1d_Cell) &theCell)
{
    myCell = theCell;
}


