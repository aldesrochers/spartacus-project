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
#include <Tetgen_Facet.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Facet::Tetgen_Facet()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Tetgen_Facet::~Tetgen_Facet()
{

}

// ============================================================================
/*!
 *  \brief BoundaryMarker()
*/
// ============================================================================
Standard_Integer Tetgen_Facet::BoundaryMarker() const
{
    return myBoundaryMarker;
}

// ============================================================================
/*!
 *  \brief ChangeHoles()
*/
// ============================================================================
Tetgen_Array1OfHole& Tetgen_Facet::ChangeHoles()
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief ChangePolygons()
*/
// ============================================================================
Tetgen_Array1OfPolygon& Tetgen_Facet::ChangePolygons()
{
    return myPolygons;
}

// ============================================================================
/*!
 *  \brief Holes()
*/
// ============================================================================
const Tetgen_Array1OfHole& Tetgen_Facet::Holes() const
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief NbHoles()
*/
// ============================================================================
Standard_Integer Tetgen_Facet::NbHoles() const
{
    return myHoles.Size();
}

// ============================================================================
/*!
 *  \brief NbPolygons()
*/
// ============================================================================
Standard_Integer Tetgen_Facet::NbPolygons() const
{
    return myPolygons.Size();
}

// ============================================================================
/*!
 *  \brief Polygons()
*/
// ============================================================================
const Tetgen_Array1OfPolygon& Tetgen_Facet::Polygons() const
{
    return myPolygons;
}

// ============================================================================
/*!
 *  \brief SetBoundaryMaker()
*/
// ============================================================================
void Tetgen_Facet::SetBoundaryMarker(const Standard_Integer theBoundaryMarker)
{
    myBoundaryMarker = theBoundaryMarker;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Tetgen_Facet, Tetgen_Object)
IMPLEMENT_STANDARD_RTTIEXT(Tetgen_Facet, Tetgen_Object)

