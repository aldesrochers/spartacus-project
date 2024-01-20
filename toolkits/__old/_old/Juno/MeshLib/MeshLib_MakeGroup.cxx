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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshLib_MakeGroup.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeGroup::MeshLib_MakeGroup()
{
    Initialize("", 0);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeGroup::MeshLib_MakeGroup(const TCollection_AsciiString& theGroupName)
{
    Initialize(theGroupName, 0);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeGroup::MeshLib_MakeGroup(const Standard_Integer theGroupId)
{
    Initialize("", theGroupId);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeGroup::~MeshLib_MakeGroup()
{

}

// ============================================================================
/*!
 *  \brief AddCell()
*/
// ============================================================================
void MeshLib_MakeGroup::AddCell(const MeshDS_Cell &theCell)
{
    myBuilder.AddCell(MeshDS::Group(myObject), theCell);
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshLib_MakeGroup::Group() const
{
    return MeshDS::Group(myObject);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeGroup::Initialize(const TCollection_AsciiString &theGroupName,
                                   const Standard_Integer theGroupId)
{
    myBuilder.MakeGroup(MeshDS::Group(myObject));
    myBuilder.UpdateGroup(MeshDS::Group(myObject), theGroupId);
    myBuilder.UpdateGroup(MeshDS::Group(myObject), theGroupName);
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Group()
*/
// ============================================================================
MeshLib_MakeGroup::operator MeshDS_Group()
{
    return Group();
}

// ============================================================================
/*!
 *  \brief SetGroupId()
*/
// ============================================================================
void MeshLib_MakeGroup::SetGroupId(const Standard_Integer theId)
{
    myBuilder.UpdateGroup(MeshDS::Group(myObject), theId);
}

// ============================================================================
/*!
 *  \brief SetGroupName()
*/
// ============================================================================
void MeshLib_MakeGroup::SetGroupName(const TCollection_AsciiString &theName)
{
    myBuilder.UpdateGroup(MeshDS::Group(myObject), theName);
}

