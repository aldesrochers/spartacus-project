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


#ifndef __Model_Mesh_hxx__
#define __Model_Mesh_hxx__

// Spartacus
#include <Model_Cell.hxx>
#include <Model_Node.hxx>
#include <Model_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfTransient.hxx>

// Forward declarations
class Model_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(Model_Mesh, Model_Object);


// ============================================================================
/*!
 *  \brief Model_Mesh
*/
// ============================================================================
class Model_Mesh : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Mesh();
    Standard_EXPORT Model_Mesh(const Standard_Integer theNbNodes,
                               const Standard_Integer theNbCells);
    // destructors
    Standard_EXPORT ~Model_Mesh();

public:

    Standard_EXPORT Handle(Model_Cell)  Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbCells() const;
    Standard_EXPORT Standard_Integer    NbNodes() const;
    Standard_EXPORT Handle(Model_Node)  Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                ResizeCells(const Standard_Integer theNbCells,
                                                    const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                ResizeNodes(const Standard_Integer theNbNodes,
                                                    const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                SetCell(const Standard_Integer theIndex,
                                                const Handle(Model_Cell)& theCell);
    Standard_EXPORT void                SetNode(const Standard_Integer theIndex,
                                                const Handle(Model_Node)& theNode);

private:

    TColStd_Array1OfTransient   myCells;
    TColStd_Array1OfTransient   myGroups;
    TColStd_Array1OfTransient   myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Mesh, Model_Object);

};


#endif // __Model_Mesh_hxx__
