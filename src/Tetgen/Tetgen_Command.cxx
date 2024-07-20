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
#include <Tetgen_Command.hxx>

// OpenCascade
#include <StdFail_NotDone.hxx>

// Tetgen
#include <tetgen.h>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Command::Tetgen_Command()
    : myIsDone(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Tetgen_Command::~Tetgen_Command()
{

}

// ============================================================================
/*!
 *  \brief Check()
*/
// ============================================================================
void Tetgen_Command::Check()const
{
    if (!myIsDone)
        throw StdFail_NotDone("Tetgen_Command::Check() -> Command not done");
}

// ============================================================================
/*!
 *  \brief IsDone()
*/
// ============================================================================
Standard_Boolean Tetgen_Command::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief SetDone()
*/
// ============================================================================
void Tetgen_Command::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
*/
// ============================================================================
void Tetgen_Command::SetNotDone()
{
    myIsDone = Standard_False;
}



