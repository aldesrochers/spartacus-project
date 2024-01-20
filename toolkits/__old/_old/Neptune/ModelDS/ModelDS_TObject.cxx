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
#include <ModelDS_TObject.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TObject::ModelDS_TObject()
    : myIsModified(Standard_False)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TObject::~ModelDS_TObject()
{

}

// ============================================================================
/*!
 *  \brief IsModified()
*/
// ============================================================================
Standard_Boolean ModelDS_TObject::IsModified() const
{
    return myIsModified;
}

// ============================================================================
/*!
 *  \brief SetModified()
*/
// ============================================================================
void ModelDS_TObject::SetModified(const Standard_Boolean theIsModified)
{
    myIsModified = theIsModified;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TObject, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TObject, Standard_Transient);
