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


#ifndef __MeshDS_TGroup_hxx__
#define __MeshDS_TGroup_hxx__

// Spartacus
#include <MeshDS_ListOfObject.hxx>
#include <MeshDS_TMeshEntity.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>

// Forward declarations
class MeshDS_TGroup;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TGroup, MeshDS_TMeshEntity)


// ============================================================================
/*!
 *  \brief MeshDS_TGroup
*/
// ============================================================================
class MeshDS_TGroup : public MeshDS_TMeshEntity
{

public:
    // constructors
    Standard_EXPORT MeshDS_TGroup();
    // destructors
    Standard_EXPORT ~MeshDS_TGroup();

public:

    Standard_EXPORT MeshAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_ListOfObject&      Cells() const;
    Standard_EXPORT MeshDS_ListOfObject&            Cells();
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT void                            SetCells(const MeshDS_ListOfObject& theCells);
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);

private:

    MeshDS_ListOfObject         myCells;
    TCollection_AsciiString     myName;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TGroup, MeshDS_TMeshEntity)

};


#endif // __MeshDS_TGroup_hxx__
