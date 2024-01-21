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


#ifndef __MeshDS_Grid_hxx__
#define __MeshDS_Grid_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <MeshDS_TGrid.hxx>


// ============================================================================
/*!
 *  \brief MeshDS_Grid
*/
// ============================================================================
class MeshDS_Grid
{

public:
    // constructors
    Standard_EXPORT MeshDS_Grid();
    // destructors
    Standard_EXPORT ~MeshDS_Grid();

public:

    Standard_EXPORT Standard_Boolean            IsNull() const;
    Standard_EXPORT MeshAbs_TypeOfGrid          Type() const;

public:

    Standard_EXPORT void                        SetTGrid(const Handle(MeshDS_TGrid)& theTGrid);
    Standard_EXPORT const Handle(MeshDS_TGrid)& TGrid() const;

private:

    Handle(MeshDS_TGrid)        myTGrid;

};


#endif // __MeshDS_Grid_hxx__
