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
#include <Model_Modelization.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Modelization::Model_Modelization()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Modelization::Model_Modelization(const ModelAbs_Phenomenon thePhenomenon,
                                       const ModelAbs_Modelization theModelization)
    : myModelization(theModelization),
    myPhenomenon(thePhenomenon)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Modelization::~Model_Modelization()
{

}

// ============================================================================
/*!
 *  \brief Modelization()
*/
// ============================================================================
ModelAbs_Modelization Model_Modelization::Modelization() const
{
    return myModelization;
}

// ============================================================================
/*!
 *  \brief Phenomenon()
*/
// ============================================================================
ModelAbs_Phenomenon Model_Modelization::Phenomenon() const
{
    return myPhenomenon;
}

// ============================================================================
/*!
 *  \brief SetModelization()
*/
// ============================================================================
void Model_Modelization::SetModelization(const ModelAbs_Modelization theModelization)
{
    myModelization = theModelization;
}

// ============================================================================
/*!
 *  \brief SetPhenomenon()
*/
// ============================================================================
void Model_Modelization::SetPhenomenon(const ModelAbs_Phenomenon thePhenomenon)
{
    myPhenomenon = thePhenomenon;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Modelization, Model_Object)
IMPLEMENT_STANDARD_RTTIEXT(Model_Modelization, Model_Object)
