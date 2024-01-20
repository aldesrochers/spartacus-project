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


#ifndef __MeshLib_MakeGroup_hxx__
#define __MeshLib_MakeGroup_hxx__

// Spartacus
#include <MeshDS_Builder.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshLib_MakeObject.hxx>



// ============================================================================
/*!
 *  \brief MeshLib_MakeGroup
*/
// ============================================================================
class MeshLib_MakeGroup : public MeshLib_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC;

protected:
    // constructors
    Standard_EXPORT MeshLib_MakeGroup();
    Standard_EXPORT MeshLib_MakeGroup(const TCollection_AsciiString& theGroupName);
    Standard_EXPORT MeshLib_MakeGroup(const Standard_Integer theGroupId);
    // destructors
    Standard_EXPORT ~MeshLib_MakeGroup();

public:

    Standard_EXPORT void                    AddCell(const MeshDS_Cell& theCell);
    Standard_EXPORT const MeshDS_Group&     Group() const;
    Standard_EXPORT void                    SetGroupId(const Standard_Integer theId);
    Standard_EXPORT void                    SetGroupName(const TCollection_AsciiString& theName);

private:

    Standard_EXPORT void        Initialize(const TCollection_AsciiString& theGroupName,
                                           const Standard_Integer theGroupId);

public:

    Standard_EXPORT operator    MeshDS_Group();

private:

    MeshDS_Builder      myBuilder;

};

#endif // __MeshLib_MakeGroup_hxx__
