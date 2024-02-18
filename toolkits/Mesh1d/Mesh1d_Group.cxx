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
#include <Mesh1d_Group.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Group::Mesh1d_Group()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh1d_Group::Mesh1d_Group(const TColStd_ListOfInteger &theCells,
                           const TCollection_AsciiString &theName)
    : myCells(theCells),
    myName(theName)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh1d_Group::~Mesh1d_Group()
{

}

// ============================================================================
/*!
 *  \brief Cells()
*/
// ============================================================================
const TColStd_ListOfInteger& Mesh1d_Group::Cells() const
{
    return myCells;
}

// ============================================================================
/*!
 *  \brief Name()
*/
// ============================================================================
const TCollection_AsciiString& Mesh1d_Group::Name() const
{
    return myName;
}

// ============================================================================
/*!
 *  \brief SetCells()
*/
// ============================================================================
void Mesh1d_Group::SetCells(const TColStd_ListOfInteger &theCells)
{
    myCells = theCells;
}

// ============================================================================
/*!
 *  \brief SetName()
*/
// ============================================================================
void Mesh1d_Group::SetName(const TCollection_AsciiString &theName)
{
    myName = theName;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh1d_Group, Mesh1d_Object)
IMPLEMENT_STANDARD_RTTIEXT(Mesh1d_Group, Mesh1d_Object)
