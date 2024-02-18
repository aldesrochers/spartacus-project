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


#ifndef __Mesh_Group_hxx__
#define __Mesh_Group_hxx__

// Spartacus
#include <Mesh_Object.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>
#include <TColStd_ListOfInteger.hxx>

// Forward declarations
class Mesh_Group;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Group, Mesh_Object)


// ============================================================================
/*!
 *  \brief Mesh_Group
*/
// ============================================================================
class Mesh_Group : public Mesh_Object
{

public:
    // constructors
    Standard_EXPORT Mesh_Group();
    Standard_EXPORT Mesh_Group(const TColStd_ListOfInteger& theCells,
                               const TCollection_AsciiString& theName = TCollection_AsciiString());
    // destructors
    Standard_EXPORT ~Mesh_Group();

public:

    Standard_EXPORT const TColStd_ListOfInteger&    Cells() const;
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT void                            SetCells(const TColStd_ListOfInteger& theCells);
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);

private:

    TColStd_ListOfInteger       myCells;
    TCollection_AsciiString     myName;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Group, Mesh_Object);

};


#endif // __Mesh_Group_hxx__
