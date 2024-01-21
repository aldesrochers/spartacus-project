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


#ifndef __MeshDS_TCell_hxx__
#define __MeshDS_TCell_hxx__

// Spartacus
#include <MeshAbs_TypeOfCell.hxx>
#include <MeshDS_Array1OfNode.hxx>
#include <MeshDS_TObject.hxx>

// Forward declarations
class MeshDS_TCell;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject);


// ============================================================================
/*!
 *  \brief MeshDS_TCell
*/
// ============================================================================
class MeshDS_TCell : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TCell();
    Standard_EXPORT MeshDS_TCell(const MeshAbs_TypeOfCell theType,
                                 const Standard_Integer theNbNodes);
    // destructors
    Standard_EXPORT ~MeshDS_TCell();

public:

    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT const MeshDS_Node&      Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const MeshDS_Node& theNode);
    Standard_EXPORT MeshAbs_TypeOfCell      Type() const;

private:

    MeshDS_Array1OfNode     myNodes;
    MeshAbs_TypeOfCell      myType;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject);

};


#endif // __MeshDS_TCell_hxx__
