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
#include <ModelBuilder_MakeDegreeOfFreedom1d.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeDegreeOfFreedom1d::ModelBuilder_MakeDegreeOfFreedom1d(const DOFAbs_TypeOfDOF1d theType)
{
    Initialize(theType);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeDegreeOfFreedom1d::~ModelBuilder_MakeDegreeOfFreedom1d()
{

}

// ============================================================================
/*!
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
const ModelDS_DegreeOfFreedom& ModelBuilder_MakeDegreeOfFreedom1d::DegreeOfFreedom() const
{
    return ModelDS::DegreeOfFreedom(Object());
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeDegreeOfFreedom1d::Initialize(const DOFAbs_TypeOfDOF1d theType)
{
    Handle(DOF_DegreeOfFreedom) aDOF;
    //if(theType == DOFAbs_DOF1d_DX) {
    //    aDOF = new DOF_Translation();
    //}

    ModelDS_Builder aBuilder;
}

// ============================================================================
/*!
 *  \brief operator ModelDS_DegreeOfFreedom()
*/
// ============================================================================
ModelBuilder_MakeDegreeOfFreedom1d::operator ModelDS_DegreeOfFreedom() const
{
    return DegreeOfFreedom();
}
