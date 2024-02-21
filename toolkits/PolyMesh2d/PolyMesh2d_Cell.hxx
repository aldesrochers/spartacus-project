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


#ifndef __PolyMesh2d_Cell_hxx__
#define __PolyMesh2d_Cell_hxx__

// Spartacus
#include <PolyMesh2d_Object.hxx>
#include <PolyMeshAbs_TypeOfCell2d.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>

// Forward declarations
class PolyMesh2d_Cell;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh2d_Cell, PolyMesh2d_Object)


// ============================================================================
/*!
 *  \brief PolyMesh2d_Cell
*/
// ============================================================================
class PolyMesh2d_Cell : public PolyMesh2d_Object
{

public:
    // constructors
    Standard_EXPORT PolyMesh2d_Cell();
    Standard_EXPORT PolyMesh2d_Cell(const Standard_Integer theNbNodes,
                                    const PolyMeshAbs_TypeOfCell2d theType);
    Standard_EXPORT PolyMesh2d_Cell(const TColStd_Array1OfInteger& theNodes,
                                    const PolyMeshAbs_TypeOfCell2d theType);
    // destructors
    Standard_EXPORT ~PolyMesh2d_Cell();

public:

    Standard_EXPORT Standard_Integer            NbNodes() const;
    Standard_EXPORT Standard_Integer            Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                        ResizeNodes(const Standard_Integer theNbNodes,
                                                            const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                        SetNode(const Standard_Integer theIndex,
                                                        const Standard_Integer theNode);
    Standard_EXPORT void                        SetType(const PolyMeshAbs_TypeOfCell2d theType);
    Standard_EXPORT PolyMeshAbs_TypeOfCell2d    Type() const;

private:

    TColStd_Array1OfInteger     myNodes;
    PolyMeshAbs_TypeOfCell2d    myType;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh2d_Cell, PolyMesh2d_Object)

};


#endif // __PolyMesh2d_Cell_hxx__
