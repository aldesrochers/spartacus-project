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
#include <BRepCell_Command.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepCell_Command::BRepCell_Command()
    : myIsDone(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepCell_Command::~BRepCell_Command()
{

}

// ============================================================================
/*!
 *  \brief Check()
*/
// ============================================================================
void BRepCell_Command::Check() const
{
    if(!myIsDone)
        throw StdFail_NotDone("BRepCell_Command::Check()");
}

// ============================================================================
/*!
 *  \brief IsDone()
 *  Check if the command was executed properly.
*/
// ============================================================================
Standard_Boolean BRepCell_Command::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief SetDone()
 *  Set the done flag internally.
*/
// ============================================================================
void BRepCell_Command::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
 *  Set the not done flag internally.
*/
// ============================================================================
void BRepCell_Command::SetNotDone()
{
    myIsDone = Standard_False;
}
