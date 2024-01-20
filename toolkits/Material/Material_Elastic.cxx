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
#include <Material_Elastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Material_Elastic::Material_Elastic(const matp_Elastic& theProperties)
    : myProperties(theProperties)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Material_Elastic::~Material_Elastic()
{

}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MaterialAbs_TypeOfObject Material_Elastic::ObjectType() const
{
    return MaterialAbs_Elastic;
}

// ============================================================================
/*!
 *  \brief Properties()
*/
// ============================================================================
const matp_Elastic& Material_Elastic::Properties() const
{
    return myProperties;
}

// ============================================================================
/*!
 *  \brief SetProperties()
*/
// ============================================================================
void Material_Elastic::SetProperties(const matp_Elastic &theProperties)
{
    myProperties = theProperties;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Material_Elastic, Material_Object);
IMPLEMENT_STANDARD_RTTIEXT(Material_Elastic, Material_Object);
