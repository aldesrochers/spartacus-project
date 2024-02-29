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


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeGroup::MeshLib_MakeGroup()
{
    Initialize(TCollection_AsciiString());
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeGroup::MeshLib_MakeGroup(const TCollection_AsciiString& theName)
{
    Initialize(theName);
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
    MeshDS_Builder aBuilder;
    aBuilder.AddCell(MeshDS::Group(myObject), theCell);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshLib_MakeGroup::Group()
{
    return MeshDS::Group(Object());
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeGroup::Initialize(const TCollection_AsciiString &theName)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeGroup(MeshDS::Group(myObject), theName);
    SetDone();
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

