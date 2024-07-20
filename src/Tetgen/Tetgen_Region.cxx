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
#include <Tetgen_Region.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Region::Tetgen_Region()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Region::Tetgen_Region(const gp_Pnt& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Tetgen_Region::~Tetgen_Region()
{

}

// ============================================================================
/*!
 *  \brief Attribute()
*/
// ============================================================================
Standard_Integer Tetgen_Region::Attribute() const
{
    return myAttribute;
}

// ============================================================================
/*!
 *  \brief ChangePoint()
*/
// ============================================================================
gp_Pnt& Tetgen_Region::ChangePoint()
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief MaxVolumne()
*/
// ============================================================================
Standard_Real Tetgen_Region::MaxVolumne() const
{
    return myMaxVolumne;
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt& Tetgen_Region::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetAttribute()
*/
// ============================================================================
void Tetgen_Region::SetAttribute(const Standard_Integer theAttribute)
{
    myAttribute = theAttribute;
}

// ============================================================================
/*!
 *  \brief SetMaxVolumne()
*/
// ============================================================================
void Tetgen_Region::SetMaxVolumne(const Standard_Real theMaxVolumne)
{
    myMaxVolumne = theMaxVolumne;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Tetgen_Region::SetPoint(const gp_Pnt& thePoint)
{
    myPoint = thePoint;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Tetgen_Region, Tetgen_Object)
IMPLEMENT_STANDARD_RTTIEXT(Tetgen_Region, Tetgen_Object)
