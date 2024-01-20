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
#include <DOF_Object.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOF_Object::DOF_Object()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOF_Object::~DOF_Object()
{

}

// ============================================================================
/*!
 *  \brief MustBeUpdate()
 *  Check if DOF state has changed and must be updated.
*/
// ============================================================================
Standard_Boolean DOF_Object::MustBeUpdate() const
{
    if(myStateChanged)
        return Standard_True;
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief SetChanged()
 *  Set the internal changed flag to true.
*/
// ============================================================================
void DOF_Object::SetChanged()
{
    myStateChanged = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotChanged()
 *  Set the internal changed flag to false.
*/
// ============================================================================
void DOF_Object::SetNotChanged()
{
    myStateChanged = Standard_False;
}

// ============================================================================
/*!
 *  \brief StateChanged()
 *  Check if DOF current state has changed.
*/
// ============================================================================
Standard_Boolean DOF_Object::StateChanged() const
{
    return myStateChanged;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(DOF_Object, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(DOF_Object, Standard_Transient);
