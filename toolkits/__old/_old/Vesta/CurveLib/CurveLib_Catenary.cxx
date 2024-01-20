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
#include <CurveLib_Catenary.hxx>

// OpenCascade
#include <Standard_OutOfRange.hxx>


// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
gp_Pnt CurveLib_Catenary::Point(const Standard_Real U,
                                const gp_Ax2 &Pos,
                                const Standard_Real Parameter)
{
    return ElCLib_Catenary::CatenaryValue(U, Pos, Parameter);
}

// ============================================================================
/*!
 *  \brief PointDP()
 *  Calculate the partial derivative with respect to the catenary
 *  shape parameter 'P'.
*/
// ============================================================================
gp_Vec CurveLib_Catenary::PointDP(const Standard_Real U,
                                  const gp_Ax2 &Pos,
                                  const Standard_Real Parameter)
{
    gp_XYZ Vxyz;
    gp_XYZ XDir = Pos.XDirection().XYZ();
    gp_XYZ YDir = Pos.YDirection().XYZ();

    if(Parameter == 0.) {
        // degenerated catenary
        return gp_Vec(XDir);
    }

    Standard_Real P = Parameter;
    Standard_Real D1 = -U/P * Sinh(U/P) + Cosh(U/P) - 1.;
    Vxyz.SetLinearForm(D1, XDir, YDir);
    return gp_Vec(Vxyz);
}

// ============================================================================
/*!
 *  \brief PointDU()
*/
// ============================================================================
gp_Vec CurveLib_Catenary::PointDU(const Standard_Real U,
                                  const gp_Ax2 &Pos,
                                  const Standard_Real Parameter)
{
    return ElCLib_Catenary::CatenaryDN(U, Pos, Parameter, 1);
}

// ============================================================================
/*!
 *  \brief PointDX0()
*/
// ============================================================================
gp_Vec CurveLib_Catenary::PointDX0(const Standard_Real U,
                                   const gp_Ax2 &Pos,
                                   const Standard_Real Parameter)
{
    gp_Vec aVec(1.,0.,0.);
    return aVec;
}

// ============================================================================
/*!
 *  \brief PointDY0()
*/
// ============================================================================
gp_Vec CurveLib_Catenary::PointDY0(const Standard_Real U,
                                   const gp_Ax2 &Pos,
                                   const Standard_Real Parameter)
{
    gp_Vec aVec(0.,1.,0.);
    return aVec;
}

// ============================================================================
/*!
 *  \brief PointDZ0()
*/
// ============================================================================
gp_Vec CurveLib_Catenary::PointDZ0(const Standard_Real U,
                                   const gp_Ax2 &Pos,
                                   const Standard_Real Parameter)
{
    gp_Vec aVec(0.,0.,1.);
    return aVec;
}

// ============================================================================
/*!
 *  \brief SegmentLength()
 *  Calculate the catenary segment length between parameters U1 and U2.
*/
// ============================================================================
Standard_Real CurveLib_Catenary::SegmentLength(const Standard_Real U1,
                                               const Standard_Real U2,
                                               const Standard_Real Parameter)
{
    Standard_Real P = Parameter;
    return P * (Sinh(U2/P) - Sinh(U1/P));
}
