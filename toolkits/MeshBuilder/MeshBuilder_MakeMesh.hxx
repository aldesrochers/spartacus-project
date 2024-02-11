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


#ifndef __MeshBuilder_MakeMesh_hxx__
#define __MeshBuilder_MakeMesh_hxx__

// Spartacus
#include <MeshBuilder_Command.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>
#include <MeshTools_DataMapOfIntegerObject.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeMesh
*/
// ============================================================================
class MeshBuilder_MakeMesh : public MeshBuilder_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeMesh();
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeMesh();

public:

    virtual Standard_EXPORT void        Build();

public:

    Standard_EXPORT const MeshDS_Mesh&  Mesh() const;

public:

    Standard_EXPORT operator            MeshDS_Mesh() const;

protected:

    Standard_EXPORT Standard_Boolean    BindCell(const Standard_Integer theCellId,
                                                 const MeshDS_Cell& theCell);
    Standard_EXPORT Standard_Boolean    BindNode(const Standard_Integer theNodeId,
                                                 const MeshDS_Node& theNode);
    Standard_EXPORT Standard_Integer    FreeCellId() const;
    Standard_EXPORT Standard_Integer    FreeNodeId() const;

private:

    MeshTools_DataMapOfIntegerObject    myCells;
    MeshDS_Mesh                         myMesh;
    MeshTools_DataMapOfIntegerObject    myNodes;

};


#endif // __MeshBuilder_MakeMesh_hxx__
