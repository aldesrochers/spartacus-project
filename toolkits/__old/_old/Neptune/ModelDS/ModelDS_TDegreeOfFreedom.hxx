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


#ifndef __ModelDS_TDegreeOfFreedom_hxx__
#define __ModelDS_TDegreeOfFreedom_hxx__

// Spartacus
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TDegreeOfFreedom;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TDegreeOfFreedom, ModelDS_TObject);


// ============================================================================
/*!
 *  \brief ModelDS_TDegreeOfFreedom
 *  Class implementation of a degree of freedom object.
*/
// ============================================================================
class ModelDS_TDegreeOfFreedom : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TDegreeOfFreedom();
    // destructors
    Standard_EXPORT ~ModelDS_TDegreeOfFreedom();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const;

public:

    Standard_EXPORT ModelAbs_TypeOfDOF  DOFType() const;
    Standard_EXPORT Standard_Boolean    IsFixed() const;
    Standard_EXPORT Standard_Boolean    IsFree() const;
    Standard_EXPORT void                SetDOFType(const ModelAbs_TypeOfDOF theType);
    Standard_EXPORT void                SetFixed();
    Standard_EXPORT void                SetFree();

private:

    ModelAbs_TypeOfDOF      myDOFType;
    Standard_Boolean        myIsFree;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TDegreeOfFreedom, ModelDS_TObject);

};

#endif // __ModelDS_TDegreeOfFreedom_hxx__
