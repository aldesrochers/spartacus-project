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


#ifndef __ElCLib_Catenary_hxx__
#define __ElCLib_Catenary_hxx__

// OpenCascade
#include <Standard.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Forward declarations
class gp_Catenary;
class gp_Catenary2d;


// ============================================================================
/*!
 *  \brief ElCLib_Catenary
 *  Class implementation of geometric function on 2d parametric curves.
 *  Similar to functions defined in OpenCascade ELCLib.
*/
// ============================================================================
class ElCLib_Catenary
{

public:

    static Standard_EXPORT void             CatenaryD1(const Standard_Real U,
                                                       const gp_Ax22d& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt2d& P,
                                                       gp_Vec2d& V1);

    static Standard_EXPORT void             CatenaryD1(const Standard_Real U,
                                                       const gp_Ax2& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1);

    static Standard_EXPORT void             CatenaryD2(const Standard_Real U,
                                                       const gp_Ax22d& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt2d& P,
                                                       gp_Vec2d& V1,
                                                       gp_Vec2d& V2);

    static Standard_EXPORT void             CatenaryD2(const Standard_Real U,
                                                       const gp_Ax2& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1,
                                                       gp_Vec& V2);

    static Standard_EXPORT void             CatenaryD3(const Standard_Real U,
                                                       const gp_Ax22d& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt2d& P,
                                                       gp_Vec2d& V1,
                                                       gp_Vec2d& V2,
                                                       gp_Vec2d& V3);

    static Standard_EXPORT void             CatenaryD3(const Standard_Real U,
                                                       const gp_Ax2& theAxis,
                                                       const Standard_Real theParameter,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1,
                                                       gp_Vec& V2,
                                                       gp_Vec& V3);

    static Standard_EXPORT gp_Vec2d         CatenaryDN(const Standard_Real U,
                                                       const gp_Ax22d& theAxis,
                                                       const Standard_Real theParameter,
                                                       const Standard_Integer N);

    static Standard_EXPORT gp_Vec           CatenaryDN(const Standard_Real U,
                                                       const gp_Ax2& theAxis,
                                                       const Standard_Real theParameter,
                                                       const Standard_Integer N);

    static Standard_EXPORT void             CatenaryDP1(const Standard_Real U,
                                                        const gp_Ax22d& theAxis,
                                                        const Standard_Real theParameter,
                                                        gp_Pnt2d& P,
                                                        gp_Vec2d& V1);

    static Standard_EXPORT Standard_Real    CatenaryParameter(const gp_Ax22d& Pos,
                                                              const gp_Pnt2d& P);

    static Standard_EXPORT Standard_Real    CatenaryParameter(const gp_Ax2& Pos,
                                                              const gp_Pnt& P);

    static Standard_EXPORT gp_Pnt2d         CatenaryValue(const Standard_Real U,
                                                          const gp_Ax22d& theAxis,
                                                          const Standard_Real theParameter);

    static Standard_EXPORT gp_Pnt           CatenaryValue(const Standard_Real U,
                                                          const gp_Ax2& theAxis,
                                                          const Standard_Real theParameter);

public:

    static Standard_Real        Parameter(const gp_Catenary2d& C,
                                          const gp_Pnt2d& P);

    static Standard_Real        Parameter(const gp_Catenary& C,
                                          const gp_Pnt& P);
};


#endif // __ElCLib_Catenary_hxx__
