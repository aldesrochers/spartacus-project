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


#ifndef __CableLib_SpanGeometry_hxx__
#define __CableLib_SpanGeometry_hxx__

// OpenCascade
#include <Standard.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>


// ============================================================================
/*!
 *  \brief CableLib_SpanGeometry
*/
// ============================================================================
class CableLib_SpanGeometry
{

public:

    static gp_Dir           ChordDirection(const gp_Pnt& P1,
                                           const gp_Pnt& P2);

    static gp_Dir2d         ChordDirection(const gp_Pnt2d& P1,
                                           const gp_Pnt2d& P2);

    static Standard_Real    ChordLength(const gp_Pnt& P1,
                                        const gp_Pnt& P2);

    static Standard_Real    ChordLength(const gp_Pnt2d& P1,
                                        const gp_Pnt2d& P2);

    static gp_Vec           ChordVector(const gp_Pnt& P1,
                                        const gp_Pnt& P2);

    static gp_Vec2d         ChordVector(const gp_Pnt2d& P1,
                                        const gp_Pnt2d& P2);

    static gp_Dir           NormalDirection(const gp_Pnt& P1,
                                            const gp_Pnt& P2,
                                            const gp_Vec& L);

    static gp_Vec           NormalVector(const gp_Pnt& P1,
                                         const gp_Pnt& P2,
                                         const gp_Vec& L);

    static gp_Dir           SpanDirection(const gp_Pnt& P1,
                                          const gp_Pnt& P2,
                                          const gp_Vec& L);

    static gp_Dir2d         SpanDirection(const gp_Pnt2d& P1,
                                          const gp_Pnt2d& P2,
                                          const gp_Vec2d& L);

    static Standard_Real    SpanLength(const gp_Pnt& P1,
                                       const gp_Pnt& P2,
                                       const gp_Vec& L);

    static Standard_Real    SpanLength(const gp_Pnt2d& P1,
                                       const gp_Pnt2d& P2,
                                       const gp_Vec2d& L);

    static gp_Vec           SpanVector(const gp_Pnt& P1,
                                       const gp_Pnt& P2,
                                       const gp_Vec& L);

    static gp_Vec2d         SpanVector(const gp_Pnt2d& P1,
                                       const gp_Pnt2d& P2,
                                       const gp_Vec2d& L);

    static gp_Dir           SlopeDirection(const gp_Pnt& P1,
                                           const gp_Pnt& P2,
                                           const gp_Vec& L);

    static gp_Dir2d         SlopeDirection(const gp_Pnt2d& P1,
                                           const gp_Pnt2d& P2,
                                           const gp_Vec2d& L);

    static Standard_Real    SlopeLength(const gp_Pnt& P1,
                                        const gp_Pnt& P2,
                                        const gp_Vec& L);

    static Standard_Real    SlopeLength(const gp_Pnt2d& P1,
                                        const gp_Pnt2d& P2,
                                        const gp_Vec2d& L);

    static gp_Vec           SlopeVector(const gp_Pnt& P1,
                                        const gp_Pnt& P2,
                                        const gp_Vec& L);

    static gp_Vec2d         SlopeVector(const gp_Pnt2d& P1,
                                        const gp_Pnt2d& P2,
                                        const gp_Vec2d& L);

};

#endif // __CableLib_SpanGeometry_hxx__
