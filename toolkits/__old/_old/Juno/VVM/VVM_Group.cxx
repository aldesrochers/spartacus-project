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
#include <VVM_Group.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Group::VVM_Group()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Group::VVM_Group(const Standard_Integer theNbElements,
                     const TCollection_AsciiString &theName)
{
    ResizeElements(theNbElements);
    SetName(theName);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
VVM_Group::VVM_Group(const TColStd_Array1OfInteger &theElementIds,
                     const TCollection_AsciiString &theName)
{
    SetElementIds(theElementIds);
    SetName(theName);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
VVM_Group::~VVM_Group()
{

}

// ============================================================================
/*!
 *  \brief ElementId()
*/
// ============================================================================
Standard_Integer VVM_Group::ElementId(const Standard_Integer theIndex) const
{
    return myElementIds.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ElementIds()
*/
// ============================================================================
const TColStd_Array1OfInteger& VVM_Group::ElementIds() const
{
    return myElementIds;
}

// ============================================================================
/*!
 *  \brief Name()
*/
// ============================================================================
const TCollection_AsciiString& VVM_Group::Name() const
{
    return myName;
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer VVM_Group::NbElements() const
{
    return myElementIds.Size();
}

// ============================================================================
/*!
 *  \brief ResizeElements()
*/
// ============================================================================
void VVM_Group::ResizeElements(const Standard_Integer theNbElements,
                               const Standard_Boolean theCopyOld)
{
    myElementIds.Resize(1, theNbElements, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetElementId()
*/
// ============================================================================
void VVM_Group::SetElementId(const Standard_Integer theIndex,
                             const Standard_Integer theElementId)
{
    myElementIds.SetValue(theIndex, theElementId);
}

// ============================================================================
/*!
 *  \brief SetElementIds()
*/
// ============================================================================
void VVM_Group::SetElementIds(const TColStd_Array1OfInteger &theElementIds)
{
    myElementIds = theElementIds;
}

// ============================================================================
/*!
 *  \brief SetName()
*/
// ============================================================================
void VVM_Group::SetName(const TCollection_AsciiString &theName)
{
    myName = theName;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(VVM_Group, VVM_Object);
IMPLEMENT_STANDARD_RTTIEXT(VVM_Group, VVM_Object);
