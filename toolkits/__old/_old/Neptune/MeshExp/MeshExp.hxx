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


#ifndef __MeshExp_hxx__
#define __MeshExp_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Forward declarations
#include <MeshAbs_TypeOfElement.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>
#include <MeshTools_ListOfObject.hxx>

// ============================================================================
/*!
 *  \brief MeshExp
*/
// ============================================================================
class MeshExp
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT void     ListElements(const MeshDS_Group& theGroup,
                                                 MeshTools_ListOfObject& theList);
    static Standard_EXPORT void     ListElements(const MeshDS_Mesh& theMesh,
                                                 MeshTools_ListOfObject& theList);

    static Standard_EXPORT void     ListGroups(const MeshDS_Mesh& theMesh,
                                               MeshTools_ListOfObject& theList);

    static Standard_EXPORT void     ListNodes(const MeshDS_Element& theElement,
                                              MeshTools_ListOfObject& theList);
    static Standard_EXPORT void     ListNodes(const MeshDS_Group& theGroup,
                                              MeshTools_ListOfObject& theList);
    static Standard_EXPORT void     ListNodes(const MeshDS_Mesh& theMesh,
                                              MeshTools_ListOfObject& theList);

    static Standard_EXPORT void     MapElements(const MeshDS_Group& theGroup,
                                                MeshTools_IndexedMapOfObject& theMap);
    static Standard_EXPORT void     MapElements(const MeshDS_Mesh& theMesh,
                                                MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapGroups(const MeshDS_Mesh& theMesh,
                                              MeshTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapNodes(const MeshDS_Element& theElement,
                                             MeshTools_IndexedMapOfObject& theMap);
    static Standard_EXPORT void     MapNodes(const MeshDS_Group& theGroup,
                                             MeshTools_IndexedMapOfObject& theMap);
    static Standard_EXPORT void     MapNodes(const MeshDS_Mesh& theMesh,
                                             MeshTools_IndexedMapOfObject& theMap);
};

#endif // __MeshExp_hxx__
