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
#include <PolyMesh_Group.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Group::PolyMesh_Group()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Group::PolyMesh_Group(const Standard_Integer theNbCells,
                                   const TCollection_AsciiString &theName)
    : myName(theName)
{
    myCells.Resize(1, theNbCells, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Group::PolyMesh_Group(const TColStd_Array1OfInteger &theCells, const TCollection_AsciiString &theName)
    : myCells(theCells), myName(theName)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
PolyMesh_Group::~PolyMesh_Group()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
Standard_Integer PolyMesh_Group::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Name()
*/
// ============================================================================
const TCollection_AsciiString& PolyMesh_Group::Name() const
{
    return myName;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer PolyMesh_Group::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void PolyMesh_Group::ResizeCells(const Standard_Integer theNbCells,
                                   const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void PolyMesh_Group::SetCell(const Standard_Integer theIndex,
                               const Standard_Integer theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetName()
*/
// ============================================================================
void PolyMesh_Group::SetName(const TCollection_AsciiString &theName)
{
    myName = theName;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh_Group, PolyMesh_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh_Group, PolyMesh_Object)
