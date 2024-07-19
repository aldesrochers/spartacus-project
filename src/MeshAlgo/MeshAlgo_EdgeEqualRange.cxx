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

#include <iostream>
using namespace std;

// Spartacus
#include <MeshAlgo_EdgeEqualRange.hxx>

// OpenCascade
#include <BRep_Tool.hxx>
#include <BRepAdaptor_Curve.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshAlgo_EdgeEqualRange::MeshAlgo_EdgeEqualRange()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshAlgo_EdgeEqualRange::~MeshAlgo_EdgeEqualRange()
{

}

// ============================================================================
/*!
 *  \brief NbSegments()
*/
// ============================================================================
Standard_Integer MeshAlgo_EdgeEqualRange::NbSegments() const
{
    return myNbSegments;
}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
void MeshAlgo_EdgeEqualRange::Perform()
{
    // check if valid edge
    if(myEdge.IsNull()) {
        return;
    }

    // check if valid number of segments
    if(myNbSegments < 1) {
        return;
    }

    // retrieve curve bounding parameters
    BRepAdaptor_Curve anAdaptor(myEdge);
    Standard_Real U1 = anAdaptor.FirstParameter();
    Standard_Real U2 = anAdaptor.LastParameter();
    Standard_Real dU = (U2-U1) / myNbSegments;

    // compute discret points on curve
    for(Standard_Integer i=1; i<=myNbSegments+1; i++) {
        Standard_Real U = U1 + (i-1) * dU;
        gp_Pnt aPoint = anAdaptor.Value(U);
    }



}

// ============================================================================
/*!
 *  \brief SetNbSegments()
*/
// ============================================================================
void MeshAlgo_EdgeEqualRange::SetNbSegments(const Standard_Integer theNbSegments)
{
    myNbSegments = theNbSegments;
}
