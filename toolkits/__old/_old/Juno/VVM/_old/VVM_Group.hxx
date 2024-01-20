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


#ifndef __VVM_Group_hxx__
#define __VVM_Group_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TCollection_AsciiString.hxx>

// ============================================================================
/*!
 *  \brief VVM_Group
*/
// ============================================================================
class VVM_Group
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT VVM_Group();
    // destructors
    Standard_EXPORT ~VVM_Group();

public:

    Standard_EXPORT Standard_Integer                NbElements() const;
    Standard_EXPORT Standard_Integer                Element(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  Elements() const;
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT void                            ResizeElements(const Standard_Integer theNbElements,
                                                                   const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                            SetElement(const Standard_Integer theIndex,
                                                               const Standard_Integer theElement);
    Standard_EXPORT void                            SetElements(const TColStd_Array1OfInteger& theElements);
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);

private:

    TColStd_Array1OfInteger     myElements;
    TCollection_AsciiString     myName;

};

#endif // __VVM_Group_hxx__
