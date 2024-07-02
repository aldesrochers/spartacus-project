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
#include <ModelBuilder_MakeDOF.hxx>
#include <ModelBuilder_MakeModelization.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeModelization::ModelBuilder_MakeModelization(const Handle(Mech1d_Model)& theModel)
    : myError(ModelBuilder_ModelizationNoError)
{
    Initialize(theModel);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeModelization::~ModelBuilder_MakeModelization()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
ModelBuilder_ModelizationError ModelBuilder_MakeModelization::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeModelization::Initialize(const Handle(Mech1d_Model)& theModel)
{
    ModelDS_Builder aBuilder;
    aBuilder.MakeModelization(ModelDS::Modelization(myObject), theModel);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Modelization()
*/
// ============================================================================
const ModelDS_Modelization& ModelBuilder_MakeModelization::Modelization() const
{
    return ModelDS::Modelization(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelBuilder_Modelization()
*/
// ============================================================================
ModelBuilder_MakeModelization::operator ModelDS_Modelization() const
{
    return Modelization();
}
