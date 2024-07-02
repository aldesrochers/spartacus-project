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


#ifndef __Mesh1dAdaptor_Cell_hxx__
#define __Mesh1dAdaptor_Cell_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Mesh1d_Cell.hxx>
#include <MeshAbs_TypeOfCell.hxx>

// Forward declarations
class Mesh1dAdaptor_Cell;


// ============================================================================
/*!
 *  \brief Mesh1dAdaptor_Cell
*/
// ============================================================================
class Mesh1dAdaptor_Cell
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Mesh1dAdaptor_Cell();
    Standard_EXPORT Mesh1dAdaptor_Cell(const Handle(Mesh1d_Cell)& theCell);
    // destructors
    Standard_EXPORT ~Mesh1dAdaptor_Cell();

public:

    Standard_EXPORT const Handle(Mesh1d_Cell)&  Cell() const;
    Standard_EXPORT MeshAbs_TypeOfCell          CellType() const;
    Standard_EXPORT void                        SetCell(const Handle(Mesh1d_Cell)& theCell);

private:

    Handle(Mesh1d_Cell)  myCell;

};


#endif // __Mesh1dAdaptor_Cell_hxx__
