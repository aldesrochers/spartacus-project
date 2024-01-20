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
#include <CurveTools.hxx>

// OpenCascade
#include <gp_Vec2d.hxx>


// ============================================================================
/*!
 *  \brief CurveLength()
*/
// ============================================================================
Standard_Real CurveTools::CurveLength(const Handle(Geom2d_Curve) &theCurve,
                                      const Standard_Integer theNbSegments,
                                      const CurveTools_IntegrationScheme theScheme)
{
    Standard_Real B = theCurve->LastParameter();
    Standard_Real A = theCurve->FirstParameter();

    Standard_Real L = 0.;
    if(theScheme == CurveTools_MidpointIntegrationScheme) {

    } else if(theScheme == CurveTools_SimpsonIntegrationScheme) {

    } else {
        // default : trapezoid
        Standard_Real dU = (B-A)/theNbSegments;
        for(Standard_Integer i=0; i<=theNbSegments; i++) {
            Standard_Real U = dU * i + A;
            Standard_Real dV = theCurve->DN(U, 1).X();
            L += Sqrt(Pow(dU,2.) + Pow(dV,2.));
        }
    }

    return L;
}
