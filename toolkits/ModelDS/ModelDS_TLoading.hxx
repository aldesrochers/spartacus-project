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


#ifndef __ModelDS_TLoading_hxx__
#define __ModelDS_TLoading_hxx__

// Spartacus
#include <ModelDS_ListOfObject.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TLoading;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TLoading, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TLoading
*/
// ============================================================================
class ModelDS_TLoading : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TLoading();
    // destructors
    Standard_EXPORT ~ModelDS_TLoading();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_ListOfObject& Boundaries() const;
    Standard_EXPORT ModelDS_ListOfObject&       Boundaries();
    Standard_EXPORT const ModelDS_ListOfObject& Loads() const;
    Standard_EXPORT ModelDS_ListOfObject&       Loads();

private:

    ModelDS_ListOfObject    myBoundaries;
    ModelDS_ListOfObject    myLoads;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TLoading, ModelDS_TObject)

};


#endif // __ModelDS_TLoading_hxx__
