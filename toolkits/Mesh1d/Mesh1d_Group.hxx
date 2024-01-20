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


#ifndef __Mesh1d_Group_hxx__
#define __Mesh1d_Group_hxx__

// Spartacus
#include <Mesh1d_Object.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>
#include <TColStd_Array1OfInteger.hxx>

// Forward declarations
class Mesh1d_Group;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_Group, Mesh1d_Object)


// ============================================================================
/*!
 *  \brief Mesh1d_Group
*/
// ============================================================================
class Mesh1d_Group : public Mesh1d_Object
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh1d_Group();
    Standard_EXPORT Mesh1d_Group(const Standard_Integer theNbCells);
    Standard_EXPORT Mesh1d_Group(const TColStd_Array1OfInteger& theCells);
    // destructors
    Standard_EXPORT ~Mesh1d_Group();

public:

    Standard_EXPORT Standard_Integer                Cell(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  Cells() const;
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT Standard_Integer                NbCells() const;
    Standard_EXPORT void                            ResizeCells(const Standard_Integer theNbCells,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetCell(const Standard_Integer theIndex,
                                                            const Standard_Integer theCell);
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);

private:

    TColStd_Array1OfInteger     myCells;
    TCollection_AsciiString     myName;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_Group, Mesh1d_Object);

};


#endif // __Mesh1d_Group_hxx__
