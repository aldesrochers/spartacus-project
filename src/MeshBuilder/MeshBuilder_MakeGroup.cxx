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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>


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
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeGroup::MeshBuilder_MakeGroup(const TCollection_AsciiString& theName)
    : myName(theName)
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
 *  \brief AddCell()
*/
// ============================================================================
void MeshBuilder_MakeGroup::AddCell(const MeshDS_Cell &theCell)
{
    myCells.Add(theCell);
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshBuilder_MakeGroup::Build()
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeGroup(MeshDS::Group(myObject), myName);
    for(Standard_Integer i=1; i<=myCells.Size(); i++) {
        MeshDS_Cell aCell = MeshDS::Cell(myCells.FindKey(i));
        aBuilder.AddCell(MeshDS::Group(myObject), aCell);
    }
    SetDone();
}

// ============================================================================
/*!
 *  \brief Group()
*/
// ============================================================================
const MeshDS_Group& MeshBuilder_MakeGroup::Group()
{
    return MeshDS::Group(Object());
}

// ============================================================================
/*!
 *  \brief Name()
*/
// ============================================================================
const TCollection_AsciiString& MeshBuilder_MakeGroup::Name() const
{
    return myName;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer MeshBuilder_MakeGroup::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Group()
*/
// ============================================================================
MeshBuilder_MakeGroup::operator MeshDS_Group()
{
    return Group();
}

// ============================================================================
/*!
 *  \brief SetName()
*/
// ============================================================================
void MeshBuilder_MakeGroup::SetName(const TCollection_AsciiString &theName)
{
    myName = theName;
}
