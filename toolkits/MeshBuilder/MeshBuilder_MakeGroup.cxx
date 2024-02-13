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
#include <MeshBuilder_MakeGroup.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeGroup::MeshBuilder_MakeGroup()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeGroup::~MeshBuilder_MakeGroup()
{

}

// ============================================================================
/*!
 *  \brief Add()
*/
// ============================================================================
void MeshBuilder_MakeGroup::Add(const MeshDS_Cell &theCell)
{
    myCells.Append(theCell);
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshBuilder_MakeGroup::Group() const
{
    if (!IsDone()) {
        Check();
    }
    return myGroup;
}

// ============================================================================
/*!
 *  \brief operator GroupDS_Group()
*/
// ============================================================================
MeshBuilder_MakeGroup::operator MeshDS_Group() const
{
    return Group();
}
