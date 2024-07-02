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

// Apollo
#include <ElCLib_Catenary.hxx>
#include <gp_Catenary.hxx>
#include <gp_Catenary2d.hxx>


// ============================================================================
/*!
 *  \brief CatenaryD1()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD1(const Standard_Real U,
                                 const gp_Ax22d &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt2d &P,
                                 gp_Vec2d &V1)
{
    gp_XY Vxy;
    gp_XY XDir = theAxis.XDirection().XY();
    gp_XY YDir = theAxis.YDirection().XY();
    gp_XY Location = theAxis.XDirection().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        V1.SetXY(XDir);
        Vxy.SetLinearForm(U, XDir, Location);
        P.SetXY(Vxy);
    } else {
        Standard_Real C;
        Standard_Real D1;
        C = theParameter * (Cosh(U/theParameter) - 1.);
        D1 = Sinh(U/theParameter);
        Vxy.SetLinearForm(D1, XDir, YDir);
        V1.SetXY(Vxy);
        Vxy.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXY(Vxy);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryD1()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD1(const Standard_Real U,
                                 const gp_Ax2 &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt &P,
                                 gp_Vec &V1)
{
    gp_XYZ Vxyz;
    gp_XYZ XDir = theAxis.XDirection().XYZ();
    gp_XYZ YDir = theAxis.YDirection().XYZ();
    gp_XYZ Location = theAxis.XDirection().XYZ();

    if(theParameter == 0.) {
        // degenerated catenary
        V1.SetXYZ(XDir);
        Vxyz.SetLinearForm(U, XDir, Location);
        P.SetXYZ(Vxyz);
    } else {
        Standard_Real C;
        Standard_Real D1;
        C = theParameter * (Cosh(U/theParameter) - 1.);
        D1 = Sinh(U/theParameter);
        Vxyz.SetLinearForm(D1, XDir, YDir);
        V1.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXYZ(Vxyz);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryD2()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD2(const Standard_Real U,
                                 const gp_Ax22d &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt2d &P,
                                 gp_Vec2d &V1,
                                 gp_Vec2d &V2)
{
    gp_XY Vxy;
    gp_XY XDir = theAxis.XDirection().XY();
    gp_XY YDir = theAxis.YDirection().XY();
    gp_XY Location = theAxis.Location().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        V2.SetCoord(0., 0.);
        V1.SetXY(XDir);
        Vxy.SetLinearForm(U, XDir, Location);
        P.SetXY(Vxy);
    } else {
        Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
        Standard_Real D1 = Sinh(U/theParameter);
        Standard_Real D2 = Cosh(U/theParameter) / theParameter;
        Vxy.SetLinearForm(D2, XDir, YDir);
        V2.SetXY(Vxy);
        Vxy.SetLinearForm(D1, XDir, YDir);
        V1.SetXY(Vxy);
        Vxy.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXY(Vxy);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryD2()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD2(const Standard_Real U,
                                 const gp_Ax2 &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt &P,
                                 gp_Vec &V1,
                                 gp_Vec &V2)
{
    gp_XYZ Vxyz;
    gp_XYZ XDir = theAxis.XDirection().XYZ();
    gp_XYZ YDir = theAxis.YDirection().XYZ();
    gp_XYZ Location = theAxis.Location().XYZ();

    if(theParameter == 0.) {
        // degenerated catenary
        V2.SetCoord(0., 0.);
        V1.SetXYZ(XDir);
        Vxyz.SetLinearForm(U, XDir, Location);
        P.SetXYZ(Vxyz);
    } else {
        Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
        Standard_Real D1 = Sinh(U/theParameter);
        Standard_Real D2 = Cosh(U/theParameter) / theParameter;
        Vxyz.SetLinearForm(D2, XDir, YDir);
        V2.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(D1, XDir, YDir);
        V1.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXYZ(Vxyz);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryD3()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD3(const Standard_Real U,
                                 const gp_Ax22d &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt2d &P,
                                 gp_Vec2d &V1,
                                 gp_Vec2d &V2,
                                 gp_Vec2d &V3)
{
    gp_XY Vxy;
    gp_XY XDir = theAxis.XDirection().XY();
    gp_XY YDir = theAxis.YDirection().XY();
    gp_XY Location = theAxis.Location().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        V3.SetCoord(0., 0.);
        V2.SetCoord(0., 0.);
        V1.SetXY(XDir);
        Vxy.SetLinearForm(U, XDir, Location);
        P.SetXY(Vxy);
    } else {
        Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
        Standard_Real D1 = Sinh(U/theParameter);
        Standard_Real D2 = Cosh(U/theParameter) / theParameter;
        Standard_Real D3 = Sinh(U/theParameter) / Pow(theParameter, 2.);
        Vxy.SetLinearForm(D3, XDir, YDir);
        V3.SetXY(Vxy);
        Vxy.SetLinearForm(D2, XDir, YDir);
        V2.SetXY(Vxy);
        Vxy.SetLinearForm(D1, XDir, YDir);
        V1.SetXY(Vxy);
        Vxy.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXY(Vxy);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryD3()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryD3(const Standard_Real U,
                                 const gp_Ax2 &theAxis,
                                 const Standard_Real theParameter,
                                 gp_Pnt &P,
                                 gp_Vec &V1,
                                 gp_Vec &V2,
                                 gp_Vec &V3)
{
    gp_XYZ Vxyz;
    gp_XYZ XDir = theAxis.XDirection().XYZ();
    gp_XYZ YDir = theAxis.YDirection().XYZ();
    gp_XYZ Location = theAxis.Location().XYZ();

    if(theParameter == 0.) {
        // degenerated catenary
        V3.SetCoord(0., 0.);
        V2.SetCoord(0., 0.);
        V1.SetXYZ(XDir);
        Vxyz.SetLinearForm(U, XDir, Location);
        P.SetXYZ(Vxyz);
    } else {
        Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
        Standard_Real D1 = Sinh(U/theParameter);
        Standard_Real D2 = Cosh(U/theParameter) / theParameter;
        Standard_Real D3 = Sinh(U/theParameter) / Pow(theParameter, 2.);
        Vxyz.SetLinearForm(D3, XDir, YDir);
        V3.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(D2, XDir, YDir);
        V2.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(D1, XDir, YDir);
        V1.SetXYZ(Vxyz);
        Vxyz.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXYZ(Vxyz);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryDN()
*/
// ============================================================================
gp_Vec2d ElCLib_Catenary::CatenaryDN(const Standard_Real U,
                                     const gp_Ax22d &theAxis,
                                     const Standard_Real theParameter,
                                     const Standard_Integer N)
{
    gp_XY Vxy;
    gp_XY XDir = theAxis.XDirection().XY();
    gp_XY YDir = theAxis.YDirection().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        if(N == 1) {
            return gp_Vec2d(XDir);
        } else {
            return gp_Vec2d(0., 0.);
        }
    }


    if(N % 2 != 0) {
        // odd derivative
        Standard_Real DN = Sinh(U/theParameter) / Pow(theParameter, N);
        Vxy.SetLinearForm(DN, XDir, YDir);
        return gp_Vec2d(Vxy);
    } else {
        // even derivative
        Standard_Real DN = Cosh(U/theParameter) / Pow(theParameter, N);
        Vxy.SetLinearForm(DN, XDir, YDir);
        return gp_Vec2d(Vxy);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryDN()
*/
// ============================================================================
gp_Vec ElCLib_Catenary::CatenaryDN(const Standard_Real U,
                                   const gp_Ax2 &theAxis,
                                   const Standard_Real theParameter,
                                   const Standard_Integer N)
{
    gp_XYZ Vxyz;
    gp_XYZ XDir = theAxis.XDirection().XYZ();
    gp_XYZ YDir = theAxis.YDirection().XYZ();

    if(theParameter == 0.) {
        // degenerated catenary
        if(N == 1) {
            return gp_Vec(XDir);
        } else {
            return gp_Vec(0., 0., 0.);
        }
    }


    if(N % 2 != 0) {
        // odd derivative
        Standard_Real DN = Sinh(U/theParameter) / Pow(theParameter, N-1);
        Vxyz.SetLinearForm(DN, XDir, YDir);
        return gp_Vec(Vxyz);
    } else {
        // even derivative
        Standard_Real DN = Cosh(U/theParameter) / Pow(theParameter, N-1);
        Vxyz.SetLinearForm(DN, XDir, YDir);
        return gp_Vec(Vxyz);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryDP1()
*/
// ============================================================================
void ElCLib_Catenary::CatenaryDP1(const Standard_Real U,
                                  const gp_Ax22d &theAxis,
                                  const Standard_Real theParameter,
                                  gp_Pnt2d &P,
                                  gp_Vec2d &V1)
{
    gp_XY Vxy;
    gp_XY XDir = theAxis.XDirection().XY();
    gp_XY YDir = theAxis.YDirection().XY();
    gp_XY Location = theAxis.XDirection().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        V1.SetXY(XDir);
        Vxy.SetLinearForm(U, XDir, Location);
        P.SetXY(Vxy);
    } else {
        Standard_Real C;
        Standard_Real D1;
        C = theParameter * (Cosh(U/theParameter) - 1.);
        D1 = -1./theParameter*U*Sinh(U/theParameter) + Cosh(U/theParameter) - 1.;
        Vxy.SetLinearForm(D1, XDir, YDir);
        V1.SetXY(Vxy);
        Vxy.SetLinearForm(C, XDir, U, YDir, Location);
        P.SetXY(Vxy);
    }
}

// ============================================================================
/*!
 *  \brief CatenaryParameter()
*/
// ============================================================================
Standard_Real ElCLib_Catenary::CatenaryParameter(const gp_Ax22d &Pos,
                                                 const gp_Pnt2d &P)
{
    gp_Vec2d aYDir(Pos.YDirection().XY());
    return gp_Vec2d(Pos.Location(), P).Dot(aYDir);
}

// ============================================================================
/*!
 *  \brief CatenaryParameter()
*/
// ============================================================================
Standard_Real ElCLib_Catenary::CatenaryParameter(const gp_Ax2 &Pos,
                                                 const gp_Pnt &P)
{
    gp_Vec aYDir(Pos.YDirection().XYZ());
    return gp_Vec(Pos.Location(), P).Dot(aYDir);
}

// ============================================================================
/*!
 *  \brief CatenaryValue()
*/
// ============================================================================
gp_Pnt2d ElCLib_Catenary::CatenaryValue(const Standard_Real U,
                                        const gp_Ax22d &theAxis,
                                        const Standard_Real theParameter)
{
    const gp_XY& XDir = theAxis.XDirection().XY();
    const gp_XY& YDir = theAxis.YDirection().XY();
    const gp_XY& Location = theAxis.Location().XY();

    if(theParameter == 0.) {
        // degenerated catenary
        return gp_Pnt2d(U * XDir.X() + Location.X(),
                        U * XDir.Y() + Location.Y());
    }
    Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
    return gp_Pnt2d(C * XDir.X() + U * YDir.X() + Location.X(),
                    C * XDir.Y() + U * YDir.Y() + Location.Y());
}

// ============================================================================
/*!
 *  \brief CatenaryValue()
*/
// ============================================================================
gp_Pnt ElCLib_Catenary::CatenaryValue(const Standard_Real U,
                                      const gp_Ax2 &theAxis,
                                      const Standard_Real theParameter)
{
    const gp_XYZ& XDir = theAxis.XDirection().XYZ();
    const gp_XYZ& YDir = theAxis.YDirection().XYZ();
    const gp_XYZ& Location = theAxis.Location().XYZ();

    if(theParameter == 0.) {
        // degenerated catenary
        return gp_Pnt(U * XDir.X() + Location.X(),
                      U * XDir.Y() + Location.Y(),
                      U * XDir.Z() + Location.Z());
    }
    Standard_Real C = theParameter * (Cosh(U/theParameter) - 1.);
    return gp_Pnt(C * XDir.X() + U * YDir.X() + Location.X(),
                  C * XDir.Y() + U * YDir.Y() + Location.Y(),
                  C * XDir.Z() + U * YDir.Z() + Location.Z());
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real ElCLib_Catenary::Parameter(const gp_Catenary2d &C,
                                         const gp_Pnt2d &P)
{
    return CatenaryParameter(C.Position(), P);
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real ElCLib_Catenary::Parameter(const gp_Catenary &C,
                                         const gp_Pnt &P)
{
    return CatenaryParameter(C.Position(), P);
}
