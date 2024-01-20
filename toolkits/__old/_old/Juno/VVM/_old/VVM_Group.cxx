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
 *  \brief Destructor
*/
// ============================================================================
VVM_Group::~VVM_Group()
{

}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer VVM_Group::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
Standard_Integer VVM_Group::Element(const Standard_Integer theIndex) const
{
    return myElements.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
const TColStd_Array1OfInteger& VVM_Group::Elements() const
{
    return myElements;
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
 *  \brief ResizeElements()
*/
// ============================================================================
void VVM_Group::ResizeElements(const Standard_Integer theNbElements,
                             const Standard_Boolean theCopyOld)
{
    myElements.Resize(1, theNbElements, theCopyOld);
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void VVM_Group::SetElement(const Standard_Integer theIndex,
                         const Standard_Integer theElement)
{
    myElements.SetValue(theIndex, theElement);
}

// ============================================================================
/*!
 *  \brief SetElements()
*/
// ============================================================================
void VVM_Group::SetElements(const TColStd_Array1OfInteger &theElements)
{
    myElements = theElements;
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

