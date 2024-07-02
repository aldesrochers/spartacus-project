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
#include <Cable_Loading.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_Loading::Cable_Loading()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cable_Loading::Cable_Loading(const Standard_Real theTime,
                             const Standard_Real theTemperature,
                             const Standard_Real theLinearLoad,
                             const Standard_Real theSpanVariation,
                             const Standard_Real theSlopeVariation)
    : myLinearLoad(theLinearLoad),
    mySlopeVariation(theSlopeVariation),
    mySpanVariation(theSpanVariation),
    myTemperature(theTemperature),
    myTime(theTime)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cable_Loading::~Cable_Loading()
{

}

// ============================================================================
/*!
 *  \brief LinearLoad()
*/
// ============================================================================
Standard_Real Cable_Loading::LinearLoad() const
{
    return myLinearLoad;
}

// ============================================================================
/*!
 *  \brief SetLinearLoad()
*/
// ============================================================================
void Cable_Loading::SetLinearLoad(const Standard_Real theLinearLoad)
{
    myLinearLoad = theLinearLoad;
}

// ============================================================================
/*!
 *  \brief SetSlopeVariation()
*/
// ============================================================================
void Cable_Loading::SetSlopeVariation(const Standard_Real theSlopeVariation)
{
    mySlopeVariation = theSlopeVariation;
}

// ============================================================================
/*!
 *  \brief SetSpanVariation()
*/
// ============================================================================
void Cable_Loading::SetSpanVariation(const Standard_Real theSpanVariation)
{
    mySpanVariation = theSpanVariation;
}

// ============================================================================
/*!
 *  \brief SetTemperature()
*/
// ============================================================================
void Cable_Loading::SetTemperature(const Standard_Real theTemperature)
{
    myTemperature = theTemperature;
}

// ============================================================================
/*!
 *  \brief SetTime()
*/
// ============================================================================
void Cable_Loading::SetTime(const Standard_Real theTime)
{
    myTime = theTime;
}

// ============================================================================
/*!
 *  \brief SlopeVariation()
*/
// ============================================================================
Standard_Real Cable_Loading::SlopeVariation() const
{
    return mySlopeVariation;
}

// ============================================================================
/*!
 *  \brief SpanVariation()
*/
// ============================================================================
Standard_Real Cable_Loading::SpanVariation() const
{
    return mySpanVariation;
}

// ============================================================================
/*!
 *  \brief Temperature()
*/
// ============================================================================
Standard_Real Cable_Loading::Temperature() const
{
    return myTemperature;
}

// ============================================================================
/*!
 *  \brief Time()
*/
// ============================================================================
Standard_Real Cable_Loading::Time() const
{
    return myTime;
}
