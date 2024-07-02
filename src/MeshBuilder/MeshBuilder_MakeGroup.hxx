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


#ifndef __MeshBuilder_MakeGroup_hxx__
#define __MeshBuilder_MakeGroup_hxx__

// Spartacus
#include <MeshBuilder_MakeObject.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Group.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeGroup
*/
// ============================================================================
class MeshBuilder_MakeGroup : public MeshBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeGroup();
    Standard_EXPORT MeshBuilder_MakeGroup(const TCollection_AsciiString& theName);
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeGroup();

public:

    Standard_EXPORT void                    Build() Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_Group&     Group();
    Standard_EXPORT operator                MeshDS_Group();

public:

    Standard_EXPORT void                            AddCell(const MeshDS_Cell& theCell);
    Standard_EXPORT const TCollection_AsciiString&  Name() const;
    Standard_EXPORT Standard_Integer                NbCells() const;
    Standard_EXPORT void                            SetName(const TCollection_AsciiString& theName);


private:

    MeshTools_IndexedMapOfObject    myCells;
    TCollection_AsciiString         myName;

};


#endif // __MeshBuilder_MakeGroup_hxx__
