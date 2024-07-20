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
#include <Tetgen_Model.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Tetgen_Model::Tetgen_Model()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Tetgen_Model::~Tetgen_Model()
{

}

// ============================================================================
/*!
 *  \brief ChangeFacets()
*/
// ============================================================================
Tetgen_Array1OfFacet& Tetgen_Model::ChangeFacets()
{
    return myFacets;
}

// ============================================================================
/*!
 *  \brief ChangeHoles()
*/
// ============================================================================
Tetgen_Array1OfHole& Tetgen_Model::ChangeHoles()
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief ChangeNodes()
*/
// ============================================================================
Tetgen_Array1OfNode& Tetgen_Model::ChangeNodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ChangeRegions()
*/
// ============================================================================
Tetgen_Array1OfRegion& Tetgen_Model::ChangeRegions()
{
    return myRegions;
}

// ============================================================================
/*!
 *  \brief Facets()
*/
// ============================================================================
const Tetgen_Array1OfFacet& Tetgen_Model::Facets() const
{
    return myFacets;
}

// ============================================================================
/*!
 *  \brief Holes()
*/
// ============================================================================
const Tetgen_Array1OfHole& Tetgen_Model::Holes() const
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief NbFacets()
*/
// ============================================================================
Standard_Integer Tetgen_Model::NbFacets() const
{
    return myFacets.Size();
}

// ============================================================================
/*!
 *  \brief NbHoles()
*/
// ============================================================================
Standard_Integer Tetgen_Model::NbHoles() const
{
    return myHoles.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Tetgen_Model::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbRegions()
*/
// ============================================================================
Standard_Integer Tetgen_Model::NbRegions() const
{
    return myRegions.Size();
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Tetgen_Array1OfNode& Tetgen_Model::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Regions()
*/
// ============================================================================
const Tetgen_Array1OfRegion& Tetgen_Model::Regions() const
{
    return myRegions;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Tetgen_Model, Tetgen_Object)
IMPLEMENT_STANDARD_RTTIEXT(Tetgen_Model, Tetgen_Object)

