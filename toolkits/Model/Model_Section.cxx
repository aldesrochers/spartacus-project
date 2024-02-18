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
#include <Model_Section.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Section::Model_Section()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Section::Model_Section(const ModelAbs_Section theType)
    : myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Section::~Model_Section()
{

}

// ============================================================================
/*!
 *  \brief Attribute()
*/
// ============================================================================
Standard_Real Model_Section::Attribute(const ModelAbs_SectionAttribute theAttribute) const
{
    return myAttributes.Find(theAttribute);
}

// ============================================================================
/*!
 *  \brief NbAttributes()
*/
// ============================================================================
Standard_Integer Model_Section::NbAttributes() const
{
    return myAttributes.Size();
}

// ============================================================================
/*!
 *  \brief SetAttribute()
*/
// ============================================================================
void Model_Section::SetAttribute(const ModelAbs_SectionAttribute theAttribute,
                                 const Standard_Real theValue)
{
    myAttributes.Bind(theAttribute, theValue);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void Model_Section::SetType(const ModelAbs_Section theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
ModelAbs_Section Model_Section::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Section, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Section, Model_Object);
