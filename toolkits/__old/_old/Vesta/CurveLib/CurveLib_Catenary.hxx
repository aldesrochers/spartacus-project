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


#ifndef __CurveLib_Catenary_hxx__
#define __CurveLib_Catenary_hxx__

// OpenCascade
#include <Standard.hxx>
#include <gp_Ax2.hxx>

// Spartacus
#include <ElCLib_Catenary.hxx>


// ============================================================================
/*!
 *  \brief CurveLib_Catenary
*/
// ============================================================================
class CurveLib_Catenary
{

public:

    static Standard_EXPORT gp_Pnt           Point(const Standard_Real U,
                                                  const gp_Ax2& Pos,
                                                  const Standard_Real Parameter);

    static Standard_EXPORT gp_Vec           PointDP(const Standard_Real U,
                                                    const gp_Ax2& Pos,
                                                    const Standard_Real Parameter);

    static Standard_EXPORT gp_Vec           PointDU(const Standard_Real U,
                                                    const gp_Ax2& Pos,
                                                    const Standard_Real Parameter);

    static Standard_EXPORT gp_Vec           PointDX0(const Standard_Real U,
                                                     const gp_Ax2& Pos,
                                                     const Standard_Real Parameter);

    static Standard_EXPORT gp_Vec           PointDY0(const Standard_Real U,
                                                     const gp_Ax2& Pos,
                                                     const Standard_Real Parameter);

    static Standard_EXPORT gp_Vec           PointDZ0(const Standard_Real U,
                                                     const gp_Ax2& Pos,
                                                     const Standard_Real Parameter);

    static Standard_EXPORT Standard_Real    SegmentLength(const Standard_Real U1,
                                                          const Standard_Real U2,
                                                          const Standard_Real Parameter);
};

#endif // __CurveLib_Catenary_hxx__
