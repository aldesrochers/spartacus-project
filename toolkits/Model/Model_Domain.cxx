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
#include <Model_Domain.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Domain::Model_Domain()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Model_Domain::Model_Domain(const Handle(Model_Mesh)& theMesh)
    : myMesh(theMesh)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Model_Domain::~Model_Domain()
{

}

// ============================================================================
/*!
 *  \brief DegreeOfFreedom()
*/
// ============================================================================
Handle(Model_DegreeOfFreedom) Model_Domain::DegreeOfFreedom(const Standard_Integer theDegreeOfFreedomId) const
{
    return Handle(Model_DegreeOfFreedom)::DownCast(myDegreesOfFreedom.Find(theDegreeOfFreedomId));
}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const Handle(Model_Mesh)& Model_Domain::Mesh() const
{
    return myMesh;
}

// ============================================================================
/*!
 *  \brief NbDegreesOfFreedom()
*/
// ============================================================================
Standard_Integer Model_Domain::NbDegreesOfFreedom() const
{
    return myDegreesOfFreedom.Size();
}

// ============================================================================
/*!
 *  \brief SetDegreeOfFreedom()
*/
// ============================================================================
void Model_Domain::SetDegreeOfFreedom(const Standard_Integer theDegreeOfFreedomId,
                                      const Handle(Model_DegreeOfFreedom) &theDegreeOfFreedom)
{

}

// ============================================================================
/*!
 *  \brief SetMesh()
*/
// ============================================================================
void Model_Domain::SetMesh(const Handle(Model_Mesh) &theMesh)
{
    myMesh = theMesh;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Model_Domain, Model_Object);
IMPLEMENT_STANDARD_RTTIEXT(Model_Domain, Model_Object);
