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


#ifndef __Mesh2d_Grid_hxx__
#define __Mesh2d_Grid_hxx__

// Spartacus
#include <Mesh2d_Array1OfCell.hxx>
#include <Mesh2d_Array1OfGroup.hxx>
#include <Mesh2d_Array1OfNode.hxx>
#include <Mesh2d_Object.hxx>

// Forward declarations
class Mesh2d_Grid;

// Handles
DEFINE_STANDARD_HANDLE(Mesh2d_Grid, Mesh2d_Object)


// ============================================================================
/*!
 *  \brief Mesh2d_Grid
*/
// ============================================================================
class Mesh2d_Grid : public Mesh2d_Object
{

public:
    // constructors
    Standard_EXPORT Mesh2d_Grid();
    Standard_EXPORT Mesh2d_Grid(const Mesh2d_Array1OfNode& theNodes,
                                const Mesh2d_Array1OfCell& theCells,
                                const Mesh2d_Array1OfGroup& theGroups);
    Standard_EXPORT Mesh2d_Grid(const Standard_Integer theNbNodes,
                                const Standard_Integer theNbCells,
                                const Standard_Integer theNbGroups);
    // destructors
    Standard_EXPORT ~Mesh2d_Grid();

public:

    Standard_EXPORT const Handle(Mesh2d_Cell)&  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const Handle(Mesh2d_Group)& Group(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer            NbCells() const;
    Standard_EXPORT Standard_Integer            NbGroups() const;
    Standard_EXPORT Standard_Integer            NbNodes() const;
    Standard_EXPORT const Handle(Mesh2d_Node)&  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                        ResizeCells(const Standard_Integer theNbCells,
                                                            const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        ResizeGroups(const Standard_Integer theNbGroups,
                                                             const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        ResizeNodes(const Standard_Integer theNbNodes,
                                                            const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        SetCell(const Standard_Integer theIndex,
                                                        const Handle(Mesh2d_Cell)& theCell);
    Standard_EXPORT void                        SetGroup(const Standard_Integer theIndex,
                                                         const Handle(Mesh2d_Group)& theGroup);
    Standard_EXPORT void                        SetNode(const Standard_Integer theIndex,
                                                        const Handle(Mesh2d_Node)& theNode);

private:

    Mesh2d_Array1OfCell       myCells;
    Mesh2d_Array1OfGroup      myGroups;
    Mesh2d_Array1OfNode       myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh2d_Grid, Mesh2d_Object);

};


#endif // __Mesh2d_Grid_hxx__
