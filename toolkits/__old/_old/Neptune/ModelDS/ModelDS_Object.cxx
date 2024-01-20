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
#include <ModelDS_Object.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_Object::ModelDS_Object()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_Object::~ModelDS_Object()
{

}

// ============================================================================
/*!
 *  \brief HashCode()
*/
// ============================================================================
Standard_Integer ModelDS_Object::HashCode(const Standard_Integer theUpperBound) const
{
    return ::HashCode(myTObject.get(), theUpperBound);
}

// ============================================================================
/*!
 *  \brief IsEqual()
*/
// ============================================================================
Standard_Boolean ModelDS_Object::IsEqual(const ModelDS_Object& theOther) const
{
    return myTObject == theOther.TObject();
}

// ============================================================================
/*!
 *  \brief IsNotEqual()
*/
// ============================================================================
Standard_Boolean ModelDS_Object::IsNotEqual(const ModelDS_Object &theOther) const
{
    return !IsEqual(theOther);
}

// ============================================================================
/*!
 *  \brief IsNull()
*/
// ============================================================================
Standard_Boolean ModelDS_Object::IsNull() const
{
    return myTObject.IsNull();
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_Object::ObjectType() const
{
    return myTObject->ObjectType();
}

// ============================================================================
/*!
 *  \brief operator !=
*/
// ============================================================================
Standard_Boolean ModelDS_Object::operator != (const ModelDS_Object& theOther) const
{
    return IsNotEqual(theOther);
}

// ============================================================================
/*!
 *  \brief operator ==
*/
// ============================================================================
Standard_Boolean ModelDS_Object::operator == (const ModelDS_Object& theOther) const
{
    return IsEqual(theOther);
}

// ============================================================================
/*!
 *  \brief SetTObject()
*/
// ============================================================================
void ModelDS_Object::SetTObject(const Handle(ModelDS_TObject) &theTObject)
{
    myTObject = theTObject;
}

// ============================================================================
/*!
 *  \brief TObject()
*/
// ============================================================================
const Handle(ModelDS_TObject)& ModelDS_Object::TObject() const
{
    return myTObject;
}
