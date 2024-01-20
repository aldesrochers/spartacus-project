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
#include <ModelDS.hxx>
#include <ModelDS_Object.hxx>

// OpenCascade
#include <Standard_TypeMismatch.hxx>


// ****************************************************************************
/*!
 *  \brief ModelDS_TypeMistmatch()
*/
// ****************************************************************************
static Standard_Boolean ModelDS_TypeMismatch(const ModelDS_Object& theObject,
                                             const ModelAbs_TypeOfObject theType)
{
    if(theObject.IsNull())
        return Standard_True;
    if(theObject.ObjectType() != theType)
        return Standard_True;
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
const ModelDS_DegreeOfFreedom& ModelDS::DegreeOfFreedom(const ModelDS_Object &theObject)
{
    Standard_Boolean aMismatch = ModelDS_TypeMismatch(theObject, ModelAbs_OBJ_DegreeOfFreedom);
    Standard_TypeMismatch_Raise_if(aMismatch, "ModelDS::DegreeOfFreedom()");
    return *(ModelDS_DegreeOfFreedom*) &theObject;
}

// ============================================================================
/*!
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
ModelDS_DegreeOfFreedom& ModelDS::DegreeOfFreedom(ModelDS_Object &theObject)
{
    Standard_Boolean aMismatch = ModelDS_TypeMismatch(theObject, ModelAbs_OBJ_DegreeOfFreedom);
    Standard_TypeMismatch_Raise_if(aMismatch, "ModelDS::DegreeOfFreedom()");
    return *(ModelDS_DegreeOfFreedom*) &theObject;
}
