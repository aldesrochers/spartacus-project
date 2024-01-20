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
#include <pp_LineSegment1d.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
pp_LineSegment1d::pp_LineSegment1d(const Standard_Real thePoint1,
                                   const Standard_Real thePoint2)
    : myPoint1(thePoint1),
      myPoint2(thePoint2)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
pp_LineSegment1d::~pp_LineSegment1d()
{

}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real pp_LineSegment1d::Length() const
{
    Standard_Real aLength = Abs(myPoint1 - myPoint2);
    return aLength;
}

// ============================================================================
/*!
 *  \brief Point1()
*/
// ============================================================================
Standard_Real pp_LineSegment1d::Point1() const
{
    return myPoint1;
}

// ============================================================================
/*!
 *  \brief Point2()
*/
// ============================================================================
Standard_Real pp_LineSegment1d::Point2() const
{
    return myPoint2;
}

// ============================================================================
/*!
 *  \brief SetPoint1()
*/
// ============================================================================
void pp_LineSegment1d::SetPoint1(const Standard_Real thePoint1)
{
    myPoint1 = thePoint1;
    Standard_Real aLength = Abs(myPoint1 - myPoint2);
    Standard_ConstructionError_Raise_if(aLength <= 0., "pp_LineSegment1d::SetPoint1()");
}

// ============================================================================
/*!
 *  \brief SetPoint2()
*/
// ============================================================================
void pp_LineSegment1d::SetPoint2(const Standard_Real thePoint2)
{
    myPoint2 = thePoint2;
    Standard_Real aLength = Abs(myPoint1 - myPoint2);
    Standard_ConstructionError_Raise_if(aLength <= 0., "pp_LineSegment1d::SetPoint2()");
}


