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


#ifndef __Model_MeshCell_hxx__
#define __Model_MeshCell_hxx__

// Spartacus
#include <Model_MeshComponent.hxx>
#include <ModelAbs_TypeOfCell.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>

// Forward declarations
class Model_MeshCell;
class Model_MeshNode;

// Handles
DEFINE_STANDARD_HANDLE(Model_MeshCell, Model_MeshComponent);


// ============================================================================
/*!
 *  \brief Model_MeshCell
*/
// ============================================================================
class Model_MeshCell : public Model_MeshComponent
{

public:
    // constructors
    Standard_EXPORT Model_MeshCell();
    Standard_EXPORT Model_MeshCell(const ModelAbs_TypeOfCell theType,
                                   const Standard_Integer theNbNodes);
    Standard_EXPORT Model_MeshCell(const ModelAbs_TypeOfCell theType,
                                   const TColStd_Array1OfInteger& theConnectivity);
    // destructors
    Standard_EXPORT ~Model_MeshCell();

public:

    Standard_EXPORT const TColStd_Array1OfInteger&  Connectivity() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT Handle(Model_MeshNode)          Node(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                NodeId(const Standard_Integer theIndex) const;
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes);
    Standard_EXPORT void                            SetConnectivity(const TColStd_Array1OfInteger& theConnectivity);
    Standard_EXPORT void                            SetNodeId(const Standard_Integer theIndex,
                                                              const Standard_Integer theNodeId);
    Standard_EXPORT void                            SetType(const ModelAbs_TypeOfCell theType);
    Standard_EXPORT ModelAbs_TypeOfCell             Type() const;

private:

    TColStd_Array1OfInteger     myConnectivity;
    ModelAbs_TypeOfCell         myType;

public:

    DEFINE_STANDARD_RTTIEXT(Model_MeshCell, Model_MeshComponent);

};


#endif // __Model_MeshCell_hxx__
