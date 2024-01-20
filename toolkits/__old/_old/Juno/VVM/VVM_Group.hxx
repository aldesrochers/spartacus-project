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

// Spartacus
#include <VVM_Object.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>
#include <TColStd_Array1OfInteger.hxx>

// Forward declarations
class VVM_Group;

// Handles
DEFINE_STANDARD_HANDLE(VVM_Group, VVM_Object);


// ============================================================================
/*!
 *  \brief VVM_Group
*/
// ============================================================================
class VVM_Group : public VVM_Object
{

public:
    // constructors
    Standard_EXPORT VVM_Group();
    Standard_EXPORT VVM_Group(const Standard_Integer theNbElements,
                              const TCollection_AsciiString& theName = TCollection_AsciiString());
    Standard_EXPORT VVM_Group(const TColStd_Array1OfInteger& theElementIds,
                              const TCollection_AsciiString& theName = TCollection_AsciiString());
    // destructors
    Standard_EXPORT ~VVM_Group();

public:

    Standard_EXPORT Standard_Integer                ElementId(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  ElementIds() const;
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT Standard_Integer                NbElements() const;
    Standard_EXPORT void                            ResizeElements(const Standard_Integer theNbElements,
                                                                   const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                            SetElementId(const Standard_Integer theIndex,
                                                                 const Standard_Integer theElementId);
    Standard_EXPORT void                            SetElementIds(const TColStd_Array1OfInteger& theElementIds);
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);

private:

    TColStd_Array1OfInteger     myElementIds;
    TCollection_AsciiString     myName;

public:

    DEFINE_STANDARD_RTTIEXT(VVM_Group, VVM_Object);

};

#endif // __VVM_Group_hxx__
