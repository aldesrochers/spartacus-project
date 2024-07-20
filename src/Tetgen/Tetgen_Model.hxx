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


#ifndef __Tetgen_Model_hxx__
#define __Tetgen_Model_hxx__

// Spartacus
#include <Tetgen_Array1OfFacet.hxx>
#include <Tetgen_Array1OfHole.hxx>
#include <Tetgen_Array1OfNode.hxx>
#include <Tetgen_Array1OfRegion.hxx>
#include <Tetgen_Object.hxx>

// Forward declarations
class Tetgen_Model;

// Handles
DEFINE_STANDARD_HANDLE(Tetgen_Model, Tetgen_Object)



// ============================================================================
/*!
 *  \brief Tetgen_Model
*/
// ============================================================================
class Tetgen_Model : public Tetgen_Object
{

public:
    // constructors
    Standard_EXPORT Tetgen_Model();
    // destructors
    Standard_EXPORT ~Tetgen_Model();

public:

    Standard_EXPORT Tetgen_Array1OfFacet&           ChangeFacets();
    Standard_EXPORT Tetgen_Array1OfHole&            ChangeHoles();
    Standard_EXPORT Tetgen_Array1OfNode&            ChangeNodes();
    Standard_EXPORT Tetgen_Array1OfRegion&          ChangeRegions();
    Standard_EXPORT const Tetgen_Array1OfFacet&     Facets() const;
    Standard_EXPORT const Tetgen_Array1OfHole&      Holes() const;
    Standard_EXPORT Standard_Integer                NbFacets() const;
    Standard_EXPORT Standard_Integer                NbHoles() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT Standard_Integer                NbRegions() const;
    Standard_EXPORT const Tetgen_Array1OfNode&      Nodes() const;
    Standard_EXPORT const Tetgen_Array1OfRegion&    Regions() const;

private:

    Tetgen_Array1OfFacet    myFacets;
    Tetgen_Array1OfHole     myHoles;
    Tetgen_Array1OfNode     myNodes;
    Tetgen_Array1OfRegion   myRegions;

public:

    DEFINE_STANDARD_RTTIEXT(Tetgen_Model, Tetgen_Object)

};


#endif // __Tetgen_Model_hxx__
