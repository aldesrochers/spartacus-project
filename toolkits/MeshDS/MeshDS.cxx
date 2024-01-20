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


// Spartacus
#include <MeshAbs_TypeOfObject.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Object.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ============================================================================
/*!
 *  MeshDS_TypeMismatch()
*/
// ============================================================================
inline static Standard_Boolean MeshDS_TypeMismatch(const MeshDS_Object& theObject,
                                                   const MeshAbs_TypeOfObject theType)
{
    return theObject.IsNull() ? Standard_False : theObject.ObjectType() != theType;
}


// ============================================================================
/*!
 *  Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshDS::Mesh(const MeshDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Mesh), "MeshDS::Mesh()");
    return *(MeshDS_Mesh*) &theObject;
}

// ============================================================================
/*!
 *  Mesh()
*/
// ============================================================================
MeshDS_Mesh& MeshDS::Mesh(MeshDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Mesh), "MeshDS::Mesh()");
    return *(MeshDS_Mesh*) &theObject;
}

// ============================================================================
/*!
 *  Node()
*/
// ============================================================================
const MeshDS_Node& MeshDS::Node(const MeshDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Node), "MeshDS::Node()");
    return *(MeshDS_Node*) &theObject;
}

// ============================================================================
/*!
 *  Node()
*/
// ============================================================================
MeshDS_Node& MeshDS::Node(MeshDS_Object& theObject)
{
    Standard_TypeMismatch_Raise_if(MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Node), "MeshDS::Node()");
    return *(MeshDS_Node*) &theObject;
}
