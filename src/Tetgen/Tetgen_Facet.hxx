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


#ifndef __Tetgen_Facet_hxx__
#define __Tetgen_Facet_hxx__

// Spartacus
#include <Tetgen_Array1OfHole.hxx>
#include <Tetgen_Array1OfPolygon.hxx>
#include <Tetgen_Object.hxx>

// OpenCascade
#include <Tetgen_Array1OfHole.hxx>

// Forward declarations
class Tetgen_Facet;

// Handles
DEFINE_STANDARD_HANDLE(Tetgen_Facet, Tetgen_Object)



// ============================================================================
/*!
 *  \brief Tetgen_Facet
*/
// ============================================================================
class Tetgen_Facet : public Tetgen_Object
{

public:
    // constructors
    Standard_EXPORT Tetgen_Facet();
    // destructors
    Standard_EXPORT ~Tetgen_Facet();

public:

    Standard_EXPORT Standard_Integer                BoundaryMarker() const;
    Standard_EXPORT Tetgen_Array1OfHole&            ChangeHoles();
    Standard_EXPORT Tetgen_Array1OfPolygon&         ChangePolygons();
    Standard_EXPORT const Tetgen_Array1OfHole&      Holes() const;
    Standard_EXPORT Standard_Integer                NbHoles() const;
    Standard_EXPORT Standard_Integer                NbPolygons() const;
    Standard_EXPORT const Tetgen_Array1OfPolygon&   Polygons() const;
    Standard_EXPORT void                            SetBoundaryMarker(const Standard_Integer theBoundaryMarker);

private:

    Standard_Integer        myBoundaryMarker;
    Tetgen_Array1OfHole     myHoles;
    Tetgen_Array1OfPolygon  myPolygons;

public:

    DEFINE_STANDARD_RTTIEXT(Tetgen_Facet, Tetgen_Object)

};


#endif // __Tetgen_Facet_hxx__
