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


#ifndef __MeshDS_hxx__
#define __MeshDS_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Forward declarations
class MeshDS_Element;
class MeshDS_Group;
class MeshDS_Mesh;
class MeshDS_Node;
class MeshDS_Object;


// ============================================================================
/*!
 *  \brief MeshDS
*/
// ============================================================================
class MeshDS
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT const MeshDS_Element&    Element(const MeshDS_Object& theObject);
    static Standard_EXPORT MeshDS_Element&          Element(MeshDS_Object& theObject);

    static Standard_EXPORT const MeshDS_Group&      Group(const MeshDS_Object& theObject);
    static Standard_EXPORT MeshDS_Group&            Group(MeshDS_Object& theObject);

    static Standard_EXPORT const MeshDS_Mesh&       Mesh(const MeshDS_Object& theObject);
    static Standard_EXPORT MeshDS_Mesh&             Mesh(MeshDS_Object& theObject);

    static Standard_EXPORT const MeshDS_Node&       Node(const MeshDS_Object& theObject);
    static Standard_EXPORT MeshDS_Node&             Node(MeshDS_Object& theObject);

};

#endif // __MeshDS_hxx__
