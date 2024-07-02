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
#include <EleProp_Element.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
EleProp_Element::EleProp_Element()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
EleProp_Element::~EleProp_Element()
{

}

// ============================================================================
/*!
 *  \brief ElementId()
*/
// ============================================================================
Standard_Integer EleProp_Element::ElementId() const
{
    return myElementId;
}

// ============================================================================
/*!
 *  \brief SetElementId()
*/
// ============================================================================
void EleProp_Element::SetElementId(const Standard_Integer theElementId)
{
    myElementId = theElementId;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(EleProp_Element, EleProp_Object);
IMPLEMENT_STANDARD_RTTIEXT(EleProp_Element, EleProp_Object);
