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


#ifndef __EleProp_TrussElement_hxx__
#define __EleProp_TrussElement_hxx__

// Spartacus
#include <EleProp_Element.hxx>
#include <EleProp_TypeOfProperty.hxx>
#include <EleProp_TypeOfSection.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerReal.hxx>

// Forward declarations
class EleProp_TrussElement;

// Handles
DEFINE_STANDARD_HANDLE(EleProp_TrussElement, EleProp_Element);


// ============================================================================
/*!
 *  \brief EleProp_TrussElement
*/
// ============================================================================
class EleProp_TrussElement : public EleProp_Element
{

public:
    // constructors
    Standard_EXPORT EleProp_TrussElement();
    Standard_EXPORT EleProp_TrussElement(const EleProp_TypeOfSection theType,
                                         const TColStd_DataMapOfIntegerReal& theProperties);
    // destructors
    Standard_EXPORT ~EleProp_TrussElement();

public:

    Standard_EXPORT Standard_Boolean        HasProperty(const EleProp_TypeOfProperty theType) const;
    Standard_EXPORT Standard_Integer        NbProperties() const;
    Standard_EXPORT Standard_Real           Property(const EleProp_TypeOfProperty theType) const;
    Standard_EXPORT EleProp_TypeOfSection   Section() const;
    Standard_EXPORT void                    SetProperty(const EleProp_TypeOfProperty theType,
                                                        const Standard_Real theValue);
    Standard_EXPORT void                    SetSection(const EleProp_TypeOfSection theType);

private:

    TColStd_DataMapOfIntegerReal    myProperties;
    EleProp_TypeOfSection           mySection;

public:

    DEFINE_STANDARD_RTTIEXT(EleProp_TrussElement, EleProp_Element);

};


#endif // __EleProp_TrussElement_hxx__
