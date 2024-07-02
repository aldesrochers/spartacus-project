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
#include <MeshDS_Tool.hxx>
#include <ModelBuilder_MakeElement.hxx>
#include <ModelBuilder_MakeModelization.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeElement::ModelBuilder_MakeElement()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeElement::~ModelBuilder_MakeElement()
{

}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const ModelDS_Element& ModelBuilder_MakeElement::Element() const
{
    return ModelDS::Element(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelBuilder_Element()
*/
// ============================================================================
ModelBuilder_MakeElement::operator ModelDS_Element() const
{
    return Element();
}


