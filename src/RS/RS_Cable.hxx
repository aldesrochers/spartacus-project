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


#ifndef __RS_Cable_hxx__
#define __RS_Cable_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <gp_Pnt.hxx>

// Forward declarations
class RS_Cable;

// Handles
DEFINE_STANDARD_HANDLE(RS_Cable, Standard_Transient);


// ============================================================================
/*!
 *  \brief RS_Cable
*/
// ============================================================================
class RS_Cable : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT RS_Cable();
    // destructors
    Standard_EXPORT ~RS_Cable();

public:

    Standard_EXPORT gp_Vec              Chord() const;
    Standard_EXPORT Standard_Real       ChordLength() const;
    Standard_EXPORT const gp_Pnt&       Point1() const;
    Standard_EXPORT const gp_Pnt&       Point2() const;
    Standard_EXPORT void                SetPoint1(const gp_Pnt& P1);
    Standard_EXPORT void                SetPoint2(const gp_Pnt& P2);
    Standard_EXPORT gp_Vec              Slope(const gp_Vec& L) const;
    Standard_EXPORT Standard_Real       SlopeLength(const gp_Vec& L) const;
    Standard_EXPORT gp_Vec              Span(const gp_Vec& L) const;
    Standard_EXPORT Standard_Real       SpanLength(const gp_Vec& L) const;

public:

    virtual Standard_EXPORT Standard_Real   Length(const Standard_Real H,
                                                   const gp_Vec& L) const = 0;

    virtual Standard_EXPORT Standard_Real   MaxTension(const Standard_Real H,
                                                       const gp_Vec& L) const = 0;

    virtual Standard_EXPORT Standard_Real   Parameter(const Standard_Real H,
                                                    const gp_Vec& L) const = 0;

private:

    gp_Pnt      myPoint1;
    gp_Pnt      myPoint2;

public:

    DEFINE_STANDARD_RTTIEXT(RS_Cable, Standard_Transient);

};

#endif // __RS_Cable_hxx__
