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


#ifndef __ModelDS_Object_hxx__
#define __ModelDS_Object_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <ModelDS_TObject.hxx>


// ============================================================================
/*!
 *  \brief ModelDS_Object
*/
// ============================================================================
class ModelDS_Object
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelDS_Object();
    // destructors
    Standard_EXPORT ~ModelDS_Object();

public:

    Standard_EXPORT Standard_Boolean                IsNull() const;
    Standard_EXPORT ModelAbs_TypeOfObject           ObjectType() const;

public:

    Standard_EXPORT void                            SetTObject(const Handle(ModelDS_TObject)& theTObject);
    Standard_EXPORT const Handle(ModelDS_TObject)&  TObject() const;

private:

    Handle(ModelDS_TObject)     myTObject;

};


#endif // __ModelDS_Object_hxx__
