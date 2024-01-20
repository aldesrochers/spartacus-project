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

#include <iostream>
using namespace std;

// Spartacus
#include <Cable_FindEmptyLength.hxx>
#include <Cable_FunctionEquilibrium.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_FindEmptyLength::Cable_FindEmptyLength()
    : myError(Cable_ERR_NoError)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_FindEmptyLength::Cable_FindEmptyLength(const Standard_Real theSpan,
                                             const Standard_Real theSlope)
    : mySpan(theSpan),
    mySlope(theSlope),
    myError(Cable_ERR_NoError)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cable_FindEmptyLength::~Cable_FindEmptyLength()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
Cable_FindEmptyLengthError Cable_FindEmptyLength::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Loading()
*/
// ============================================================================
const Cable_SequenceOfLoading& Cable_FindEmptyLength::Loading() const
{
    return myLoading;
}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
Standard_Boolean Cable_FindEmptyLength::Perform()
{
    // check if loading is defined
    if(myLoading.Size() <= 0) {
        myError = Cable_ERR_LoadingNotDefined;
        return Standard_False;
    }

    // check if sagging conditions are defined
    if(mySaggingConditions.Size() <= 0) {
        myError = Cable_ERR_SaggingConditionNotDefined;
        return Standard_False;
    }

    // check if section is defined
    if(mySection.IsNull()) {
        myError = Cable_ERR_SectionNotDefined;
        return Standard_False;
    }

    Cable_ListOfSaggingCondition::Iterator anIterator(mySaggingConditions);
    for(; anIterator.More(); anIterator.Next()) {


        Standard_Real S0 = mySpan * 1.01;
        Cable_SaggingCondition aCondition = anIterator.Value();

        Cable_SequenceOfLoading::Iterator anIterator2(myLoading);
        for(; anIterator2.More(); anIterator2.Next()) {


            Cable_Loading aLoading = anIterator2.Value();
            mySection->SetCurrentTemperature(aLoading.Temperature());
            mySection->SetCurrentTime(aLoading.Time());

            //Cable_FunctionEquilibrium aFunction(mySection, mySpan, mySlope, S0);


        }

    }

}

// ============================================================================
/*!
 *  \brief SaggingCondition()
*/
// ============================================================================
const Cable_ListOfSaggingCondition& Cable_FindEmptyLength::SaggingConditions() const
{
    return mySaggingConditions;
}

// ============================================================================
/*!
 *  \brief Section()
*/
// ============================================================================
const Handle(UXSM_Section)& Cable_FindEmptyLength::Section() const
{
    return mySection;
}

// ============================================================================
/*!
 *  \brief SetLoading()
*/
// ============================================================================
void Cable_FindEmptyLength::SetLoading(const Cable_SequenceOfLoading &theLoading)
{
    myLoading = theLoading;
}

// ============================================================================
/*!
 *  \brief SetSaggingCondition()
*/
// ============================================================================
void Cable_FindEmptyLength::SetSaggingConditions(const Cable_ListOfSaggingCondition &theConditions)
{
    mySaggingConditions = theConditions;
}

// ============================================================================
/*!
 *  \brief SetSection()
*/
// ============================================================================
void Cable_FindEmptyLength::SetSection(const Handle(UXSM_Section) &theSection)
{
    mySection = theSection;
}

// ============================================================================
/*!
 *  \brief SetSlope()
*/
// ============================================================================
void Cable_FindEmptyLength::SetSlope(const Standard_Real theSlope)
{
    mySlope = theSlope;
}

// ============================================================================
/*!
 *  \brief SetSpan()
*/
// ============================================================================
void Cable_FindEmptyLength::SetSpan(const Standard_Real theSpan)
{
    mySpan = theSpan;
}

// ============================================================================
/*!
 *  \brief Slope()
*/
// ============================================================================
Standard_Real Cable_FindEmptyLength::Slope() const
{
    return mySlope;
}

// ============================================================================
/*!
 *  \brief Span()
*/
// ============================================================================
Standard_Real Cable_FindEmptyLength::Span() const
{
    return mySpan;
}
