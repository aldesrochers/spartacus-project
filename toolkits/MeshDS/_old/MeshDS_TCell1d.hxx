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


#ifndef __MeshDS_TCell1d_hxx__
#define __MeshDS_TCell1d_hxx__

// Spartacus
#include <MeshAbs_TypeOfCell1d.hxx>
#include <MeshDS_Array1OfNode1d.hxx>
#include <MeshDS_TCell.hxx>

// Forward declarations
class MeshDS_TCell1d;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TCell1d, MeshDS_TCell);


// ============================================================================
/*!
 *  \brief MeshDS_TCell1d
*/
// ============================================================================
class MeshDS_TCell1d : public MeshDS_TCell
{

public:
    // constructors
    Standard_EXPORT MeshDS_TCell1d();
    Standard_EXPORT MeshDS_TCell1d(const MeshAbs_TypeOfCell1d theType,
                                   const Standard_Integer theNbNodes);
    // destructors
    Standard_EXPORT ~MeshDS_TCell1d();

public:

    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT const MeshDS_Node1d&    Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const MeshDS_Node1d& theNode);
    Standard_EXPORT MeshAbs_TypeOfCell1d    Type() const;

private:

    MeshDS_Array1OfNode1d   myNodes;
    MeshAbs_TypeOfCell1d    myType;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TCell1d, MeshDS_TCell);

};


#endif // __MeshDS_TCell1d_hxx__
