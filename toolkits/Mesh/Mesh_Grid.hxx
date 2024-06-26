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


#ifndef __Mesh_Grid_hxx__
#define __Mesh_Grid_hxx__

// Spartacus
#include <Mesh_Array1OfCell.hxx>
#include <Mesh_Array1OfGroup.hxx>
#include <Mesh_Array1OfNode.hxx>
#include <Mesh_Object.hxx>

// Forward declarations
class Mesh_Grid;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Grid, Mesh_Object)


// ============================================================================
/*!
 *  \brief Mesh_Grid
*/
// ============================================================================
class Mesh_Grid : public Mesh_Object
{

public:
    // constructors
    Standard_EXPORT Mesh_Grid();
    Standard_EXPORT Mesh_Grid(const Mesh_Array1OfNode& theNodes,
                              const Mesh_Array1OfCell& theCells,
                              const Mesh_Array1OfGroup& theGroups);
    Standard_EXPORT Mesh_Grid(const Standard_Integer theNbNodes,
                              const Standard_Integer theNbCells,
                              const Standard_Integer theNbGroups);
    // destructors
    Standard_EXPORT ~Mesh_Grid();

public:

    Standard_EXPORT const Handle(Mesh_Cell)&    Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const Handle(Mesh_Group)&   Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer            NbCells() const;
    Standard_EXPORT Standard_Integer            NbGroups() const;
    Standard_EXPORT Standard_Integer            NbNodes() const;
    Standard_EXPORT const Handle(Mesh_Node)&    Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                        ResizeCells(const Standard_Integer theNbCells,
                                                            const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        ResizeGroups(const Standard_Integer theNbGroups,
                                                             const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        ResizeNodes(const Standard_Integer theNbNodes,
                                                            const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        SetCell(const Standard_Integer theIndex,
                                                        const Handle(Mesh_Cell)& theCell);
    Standard_EXPORT void                        SetGroup(const Standard_Integer theIndex,
                                                         const Handle(Mesh_Group)& theGroup);
    Standard_EXPORT void                        SetNode(const Standard_Integer theIndex,
                                                        const Handle(Mesh_Node)& theNode);

private:

    Mesh_Array1OfCell       myCells;
    Mesh_Array1OfGroup      myGroups;
    Mesh_Array1OfNode       myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Grid, Mesh_Object);

};


#endif // __Mesh_Grid_hxx__
