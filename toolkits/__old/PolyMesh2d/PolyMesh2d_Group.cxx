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
#include <PolyMesh2d_Group.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Group::PolyMesh2d_Group()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Group::PolyMesh2d_Group(const Standard_Integer theNbCells,
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
PolyMesh2d_Group::PolyMesh2d_Group(const TColStd_Array1OfInteger &theCells, const TCollection_AsciiString &theName)
    : myCells(theCells), myName(theName)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
PolyMesh2d_Group::~PolyMesh2d_Group()
{

}

// ============================================================================
/*!
 *  \brief Cell()
*/
// ============================================================================
Standard_Integer PolyMesh2d_Group::Cell(const Standard_Integer theIndex) const
{
    return myCells.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Name()
*/
// ============================================================================
const TCollection_AsciiString& PolyMesh2d_Group::Name() const
{
    return myName;
}

// ============================================================================
/*!
 *  \brief NbCells()
*/
// ============================================================================
Standard_Integer PolyMesh2d_Group::NbCells() const
{
    return myCells.Size();
}

// ============================================================================
/*!
 *  \brief ResizeCells()
*/
// ============================================================================
void PolyMesh2d_Group::ResizeCells(const Standard_Integer theNbCells,
                                   const Standard_Boolean toCopyData)
{
    myCells.Resize(1, theNbCells, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetCell()
*/
// ============================================================================
void PolyMesh2d_Group::SetCell(const Standard_Integer theIndex,
                               const Standard_Integer theCell)
{
    myCells.SetValue(theIndex, theCell);
}

// ============================================================================
/*!
 *  \brief SetName()
*/
// ============================================================================
void PolyMesh2d_Group::SetName(const TCollection_AsciiString &theName)
{
    myName = theName;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh2d_Group, PolyMesh2d_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh2d_Group, PolyMesh2d_Object)
