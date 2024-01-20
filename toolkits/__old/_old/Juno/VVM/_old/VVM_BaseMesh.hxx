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


#ifndef __VVM_BaseMesh_hxx__
#define __VVM_BaseMesh_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <VVM_Array1OfCell.hxx>
#include <VVM_Array1OfGroup.hxx>
#include <VVM_MeshDimension.hxx>

// Forward declarations
class VVM_BaseMesh;

// Handles
DEFINE_STANDARD_HANDLE(VVM_BaseMesh, Standard_Transient);


// ============================================================================
/*!
 *  \brief VVM_BaseMesh
*/
// ============================================================================
class VVM_BaseMesh : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT VVM_BaseMesh();
    // destructors
    Standard_EXPORT ~VVM_BaseMesh();

public:

    virtual Standard_EXPORT VVM_MeshDimension   Dimension() const = 0;

public:

    Standard_EXPORT const VVM_Cell&             Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const VVM_Group&            CellGroup(const Standard_Integer theIndex) const;
    Standard_EXPORT const VVM_Array1OfGroup&    CellGroups() const;
    Standard_EXPORT const VVM_Array1OfCell&     Cells() const;
    Standard_EXPORT Standard_Integer            NbCells() const;
    Standard_EXPORT Standard_Integer            NbCellGroups() const;
    Standard_EXPORT Standard_Integer            NbNodeGroups() const;
    Standard_EXPORT const VVM_Group&            NodeGroup(const Standard_Integer theIndex) const;
    Standard_EXPORT const VVM_Array1OfGroup&    NodeGroups() const;
    Standard_EXPORT void                        ResizeCells(const Standard_Integer theNbCells,
                                                            const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        ResizeCellGroups(const Standard_Integer theNbCellGroups,
                                                                 const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        ResizeNodeGroups(const Standard_Integer theNbNodeGroups,
                                                                 const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                        SetCell(const Standard_Integer theIndex,
                                                        const VVM_Cell& theCell);
    Standard_EXPORT void                        SetCells(const VVM_Array1OfCell& theCells);
    Standard_EXPORT void                        SetCellGroup(const Standard_Integer theIndex,
                                                             const VVM_Group& theGroup);
    Standard_EXPORT void                        SetCellGroups(const VVM_Array1OfGroup& theCellGroups);
    Standard_EXPORT void                        SetNodeGroup(const Standard_Integer theIndex,
                                                             const VVM_Group& theGroup);
    Standard_EXPORT void                        SetNodeGroups(const VVM_Array1OfGroup& theNodeGroups);

private:

    VVM_Array1OfCell        myCells;
    VVM_Array1OfGroup       myCellGroups;
    VVM_Array1OfGroup       myNodeGroups;

public:

    DEFINE_STANDARD_RTTIEXT(VVM_BaseMesh, Standard_Transient);

};

#endif // __VVM_BaseMesh_hxx__
