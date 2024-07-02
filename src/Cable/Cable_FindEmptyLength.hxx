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


#ifndef __Cable_FindEmptyLength_hxx__
#define __Cable_FindEmptyLength_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Cable_FindEmptyLengthError.hxx>
#include <Cable_ListOfSaggingCondition.hxx>
#include <Cable_SequenceOfLoading.hxx>
#include <Cable_TypeOfSaggingCondition.hxx>
#include <UXSM_Section.hxx>


// ============================================================================
/*!
 *  \brief Cable_FindEmptyLength
*/
// ============================================================================
class Cable_FindEmptyLength
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Cable_FindEmptyLength();
    Standard_EXPORT Cable_FindEmptyLength(const Standard_Real theSpan,
                                          const Standard_Real theSlope);
    // destructors
    Standard_EXPORT ~Cable_FindEmptyLength();

public:

    Standard_EXPORT Cable_FindEmptyLengthError          Error() const;
    Standard_EXPORT const Cable_SequenceOfLoading&      Loading() const;
    Standard_EXPORT Standard_Boolean                    Perform();
    Standard_EXPORT const Cable_ListOfSaggingCondition& SaggingConditions() const;
    Standard_EXPORT const Handle(UXSM_Section)&         Section() const;
    Standard_EXPORT void                                SetLoading(const Cable_SequenceOfLoading& theLoading);
    Standard_EXPORT void                                SetSaggingConditions(const Cable_ListOfSaggingCondition& theConditions);
    Standard_EXPORT void                                SetSection(const Handle(UXSM_Section)& theSection);
    Standard_EXPORT void                                SetSlope(const Standard_Real theSlope);
    Standard_EXPORT void                                SetSpan(const Standard_Real theSpan);
    Standard_EXPORT Standard_Real                       Slope() const;
    Standard_EXPORT Standard_Real                       Span() const;


private:

    Cable_FindEmptyLengthError      myError;
    Cable_SequenceOfLoading         myLoading;
    Handle(UXSM_Section)            mySection;
    Standard_Real                   mySlope;
    Standard_Real                   mySpan;
    Cable_ListOfSaggingCondition    mySaggingConditions;

};

#endif // __Cable_FindEmptyLength_hxx__
