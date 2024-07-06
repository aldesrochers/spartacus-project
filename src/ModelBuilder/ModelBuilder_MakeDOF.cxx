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
#include <ModelDS_Builder.hxx>
#include <ModelDS.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeDOF::ModelBuilder_MakeDOF(const ModelAbs_TypeOfDOF theDOFType)
{
    Initialize(theDOFType);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeDOF::~ModelBuilder_MakeDOF()
{

}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
const ModelDS_DOF& ModelBuilder_MakeDOF::DOF() const
{
    return ModelDS::DOF(Object());
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeDOF::Initialize(const ModelAbs_TypeOfDOF theDOFType)
{
    // make DOF
    ModelDS_Builder aBuilder;
    aBuilder.MakeDOF(ModelDS::DOF(myObject), theDOFType);
    SetDone();
}

// ============================================================================
/*!
 *  \brief operator ModelDS_DOF()
*/
// ============================================================================
ModelBuilder_MakeDOF::operator ModelDS_DOF() const
{
    return DOF();
}
