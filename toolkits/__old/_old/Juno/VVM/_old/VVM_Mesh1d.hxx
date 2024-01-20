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


#ifndef __VVM_Mesh1d_hxx__
#define __VVM_Mesh1d_hxx__

// Spartacus
#include <VVM_Array1OfNode1d.hxx>
#include <VVM_BaseMesh.hxx>

// Forward declarations
class VVM_Mesh1d;

// Handles
DEFINE_STANDARD_HANDLE(VVM_Mesh1d, VVM_BaseMesh);


// ============================================================================
/*!
 *  \brief VVM_Mesh1d
*/
// ============================================================================
class VVM_Mesh1d : public VVM_BaseMesh
{

public:
    // constructors
    Standard_EXPORT VVM_Mesh1d();
    Standard_EXPORT VVM_Mesh1d(const Standard_Integer theNbNodes,
                               const Standard_Integer theNbCells,
                               const Standard_Integer theNbNodeGroups = 0,
                               const Standard_Integer theNbCellGroups = 0);
    Standard_EXPORT VVM_Mesh1d(const VVM_Array1OfNode1d& theNodes,
                               const VVM_Array1OfCell& theCells,
                               const VVM_Array1OfGroup& theNodeGroups = VVM_Array1OfGroup(),
                               const VVM_Array1OfGroup& theCellGroups = VVM_Array1OfGroup());
    // destructors
    Standard_EXPORT ~VVM_Mesh1d();

public:

    Standard_EXPORT VVM_MeshDimension   Dimension() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Integer            NbNodes() const;
    Standard_EXPORT const VVM_Node1d&           Node(const Standard_Integer theIndex) const;
    Standard_EXPORT const VVM_Array1OfNode1d&   Nodes() const;
    Standard_EXPORT void                        ResizeNodes(const Standard_Integer theNbNodes,
                                                            const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        SetNode(const Standard_Integer theIndex,
                                                        const VVM_Node1d& theNode);
    Standard_EXPORT void                        SetNodes(const VVM_Array1OfNode1d& theNodes);

private:

    VVM_Array1OfNode1d    myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(VVM_Mesh1d, VVM_BaseMesh);

};

#endif // __VVM_Mesh1d_hxx__
