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
#include <MeshDS_Tool.hxx>
#include <ModelBuilder_MakeTruss.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeTruss::ModelBuilder_MakeTruss(const MeshDS_Cell& theCell,
                                               const material_Elastic& theMaterial,
                                               const Standard_Real theArea)
{
    Initialize(theCell, theMaterial, theArea);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeTruss::~ModelBuilder_MakeTruss()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeTruss::Initialize(const MeshDS_Cell &theCell,
                                        const material_Elastic &theMaterial,
                                        const Standard_Real theArea)
{
    MeshAbs_TypeOfCell aCellType = MeshDS_Tool::CellType(theCell);
    if(aCellType == MeshAbs_CELL_LinearLine1d) {

    }
}
