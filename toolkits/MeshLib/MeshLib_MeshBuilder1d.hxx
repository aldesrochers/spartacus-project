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


#ifndef __MeshLib_MeshBuilder1d_hxx__
#define __MeshLib_MeshBuilder1d_hxx__

// Spartacus
#include <MeshLib_MakeMesh.hxx>
#include <TColMesh1d_DataMapOfIntegerCell.hxx>
#include <TColMesh1d_DataMapOfIntegerNode.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerListOfInteger.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_MeshBuilder1d
*/
// ============================================================================
class MeshLib_MeshBuilder1d : public MeshLib_MakeMesh
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshLib_MeshBuilder1d();
    // destructors
    Standard_EXPORT ~MeshLib_MeshBuilder1d();

public:

    Standard_EXPORT void                Build() Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Integer    AddLinearLine2N(const Standard_Integer theNode1,
                                                        const Standard_Integer theNode2);

    Standard_EXPORT Standard_Integer    AddNode(const gp_Pnt1d& thePoint);

    Standard_EXPORT Standard_Integer    AddQuadraticLine3N(const Standard_Integer theNode1,
                                                           const Standard_Integer theNode2,
                                                           const Standard_Integer theNode3);


    Standard_EXPORT Standard_Integer    NbCells() const;
    Standard_EXPORT Standard_Integer    NbGroups() const;
    Standard_EXPORT Standard_Integer    NbNodes() const;

protected:

    Standard_EXPORT Standard_Integer    FindCellId() const;
    Standard_EXPORT Standard_Integer    FindGroupId() const;
    Standard_EXPORT Standard_Integer    FindNodeId() const;

private:


    TColMesh1d_DataMapOfIntegerCell         myCells;
    TColStd_DataMapOfIntegerListOfInteger   myGroups;
    TColMesh1d_DataMapOfIntegerNode         myNodes;

};


#endif // __MeshLib_MeshBuilder1d_hxx__
