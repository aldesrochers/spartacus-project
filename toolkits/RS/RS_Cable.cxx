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
#include <RS_Cable.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
RS_Cable::RS_Cable()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
RS_Cable::~RS_Cable()
{

}

// ============================================================================
/*!
 *  \brief Chord()
*/
// ============================================================================
gp_Vec RS_Cable::Chord() const
{
    return gp_Vec(myPoint1, myPoint2);
}

// ============================================================================
/*!
 *  \brief ChordLength()
*/
// ============================================================================
Standard_Real RS_Cable::ChordLength() const
{
    return Chord().Magnitude();
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
const gp_Pnt& RS_Cable::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
const gp_Pnt& RS_Cable::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void RS_Cable::SetPoint1(const gp_Pnt &P1)
{
    myPoint1 = P1;
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void RS_Cable::SetPoint2(const gp_Pnt &P2)
{
    myPoint2 = P2;
}

// ============================================================================
/*!
 *  \brief Slope()
*/
// ============================================================================
gp_Vec RS_Cable::Slope(const gp_Vec &L) const
{
    gp_Vec C = Chord();
    gp_Dir D = -1.*gp_Dir(L.Normalized());
    return C.Dot(D) * D;
}

// ============================================================================
/*!
 *  \brief SlopeLength()
*/
// ============================================================================
Standard_Real RS_Cable::SlopeLength(const gp_Vec &L) const
{
    return Slope(L).Magnitude();
}

// ============================================================================
/*!
 *  \brief Span()
*/
// ============================================================================
gp_Vec RS_Cable::Span(const gp_Vec &L) const
{
    gp_Vec C = Chord();
    gp_Vec B = Slope(L);
    return C - B;
}

// ============================================================================
/*!
 *  \brief SpanLength()
*/
// ============================================================================
Standard_Real RS_Cable::SpanLength(const gp_Vec &L) const
{
    return Span(L).Magnitude();
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(RS_Cable, Standard_Transient);
IMPLEMENT_STANDARD_RTTIEXT(RS_Cable, Standard_Transient);
