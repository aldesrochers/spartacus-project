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
#include <MeshDS_Element.hxx>
#include <MeshDS_Group.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>
#include <MeshDS_Object.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ****************************************************************************
/*!
 *  \brief MeshDS_TypeMismatch()
*/
// ****************************************************************************
static Standard_Boolean MeshDS_TypeMismatch(const MeshDS_Object& theObject,
                                            const MeshAbs_TypeOfObject theObjectType)
{
    if(theObject.IsNull())
        return Standard_False;
    if(theObject.ObjectType() == theObjectType)
        return Standard_False;
    return Standard_True;
}


// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const MeshDS_Element& MeshDS::Element(const MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Element);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Element()");
    return *(MeshDS_Element*) &theObject;
}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
MeshDS_Element& MeshDS::Element(MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Element);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Element()");
    return *(MeshDS_Element*) &theObject;
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshDS::Group(const MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Group);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Group()");
    return *(MeshDS_Group*) &theObject;
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
MeshDS_Group& MeshDS::Group(MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Group);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Group()");
    return *(MeshDS_Group*) &theObject;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const MeshDS_Mesh& MeshDS::Mesh(const MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Mesh);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Mesh()");
    return *(MeshDS_Mesh*) &theObject;
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
MeshDS_Mesh& MeshDS::Mesh(MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Mesh);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Mesh()");
    return *(MeshDS_Mesh*) &theObject;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node& MeshDS::Node(const MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Node);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Node()");
    return *(MeshDS_Node*) &theObject;
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
MeshDS_Node& MeshDS::Node(MeshDS_Object &theObject)
{
    Standard_Boolean aMismatch = MeshDS_TypeMismatch(theObject, MeshAbs_OBJ_Node);
    Standard_TypeMismatch_Raise_if(aMismatch, "MeshDS::Node()");
    return *(MeshDS_Node*) &theObject;
}
