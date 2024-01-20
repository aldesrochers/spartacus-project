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


#ifndef __Cable_Loading_hxx__
#define __Cable_Loading_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief Cable_Loading
*/
// ============================================================================
class Cable_Loading
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Cable_Loading();
    Standard_EXPORT Cable_Loading(const Standard_Real theTime,
                                  const Standard_Real theTemperature,
                                  const Standard_Real theLinearLoad,
                                  const Standard_Real theSpanVariation = 0.,
                                  const Standard_Real theSlopeVariation = 0.);
    // destructors
    Standard_EXPORT ~Cable_Loading();

public:

    Standard_EXPORT Standard_Real   LinearLoad() const;
    Standard_EXPORT void            SetLinearLoad(const Standard_Real theLinearLoad);
    Standard_EXPORT void            SetSlopeVariation(const Standard_Real theSlopeVariation);
    Standard_EXPORT void            SetSpanVariation(const Standard_Real theSpanVariation);
    Standard_EXPORT void            SetTemperature(const Standard_Real theTemperature);
    Standard_EXPORT void            SetTime(const Standard_Real theTime);
    Standard_EXPORT Standard_Real   SlopeVariation() const;
    Standard_EXPORT Standard_Real   SpanVariation() const;
    Standard_EXPORT Standard_Real   Temperature() const;
    Standard_EXPORT Standard_Real   Time() const;

private:

    Standard_Real   myLinearLoad;
    Standard_Real   mySlopeVariation;
    Standard_Real   mySpanVariation;
    Standard_Real   myTemperature;
    Standard_Real   myTime;

};

#endif // __Cable_Loading_hxx__
