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


// Jupiter
#include <CableLib_SpanGeometry.hxx>


// ============================================================================
/*!
 *  \brief ChordDirection()
*/
// ============================================================================
gp_Dir CableLib_SpanGeometry::ChordDirection(const gp_Pnt &P1,
                                             const gp_Pnt &P2)
{
    gp_Vec C = ChordVector(P1,P2);
    return gp_Dir(C.Normalized());
}

// ============================================================================
/*!
 *  \brief ChordDirection()
*/
// ============================================================================
gp_Dir2d CableLib_SpanGeometry::ChordDirection(const gp_Pnt2d &P1,
                                               const gp_Pnt2d &P2)
{
    gp_Vec2d C = ChordVector(P1,P2);
    return gp_Dir2d(C.Normalized());
}

// ============================================================================
/*!
 *  \brief ChordLength()
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::ChordLength(const gp_Pnt &P1,
                                                 const gp_Pnt &P2)
{
    gp_Vec C = ChordVector(P1,P2);
    return C.Magnitude();
}

// ============================================================================
/*!
 *  \brief ChordLength()
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::ChordLength(const gp_Pnt2d &P1,
                                                 const gp_Pnt2d &P2)
{
    gp_Vec2d C = ChordVector(P1,P2);
    return C.Magnitude();
}

// ============================================================================
/*!
 *  \brief ChordVector()
*/
// ============================================================================
gp_Vec CableLib_SpanGeometry::ChordVector(const gp_Pnt &P1,
                                          const gp_Pnt &P2)
{
    return gp_Vec(P1, P2);
}

// ============================================================================
/*!
 *  \brief ChordVector()
*/
// ============================================================================
gp_Vec2d CableLib_SpanGeometry::ChordVector(const gp_Pnt2d &P1,
                                            const gp_Pnt2d &P2)
{
    return gp_Vec2d(P1, P2);
}

// ============================================================================
/*!
 *  \brief NormalDirection()
*/
// ============================================================================
gp_Dir CableLib_SpanGeometry::NormalDirection(const gp_Pnt &P1,
                                              const gp_Pnt &P2,
                                              const gp_Vec &L)
{
    gp_Vec N = NormalVector(P1,P2,L);
    return gp_Dir(N.Normalized());
}

// ============================================================================
/*!
 *  \brief NormalVector()
*/
// ============================================================================
gp_Vec CableLib_SpanGeometry::NormalVector(const gp_Pnt &P1,
                                           const gp_Pnt &P2,
                                           const gp_Vec &L)
{
    gp_Vec C = ChordVector(P1,P2);
    return -C.Crossed(L);
}

// ============================================================================
/*!
 *  \brief SpanDirection()
*/
// ============================================================================
gp_Dir CableLib_SpanGeometry::SpanDirection(const gp_Pnt &P1,
                                            const gp_Pnt &P2,
                                            const gp_Vec &L)
{
    gp_Vec A = SpanVector(P1,P2,L);
    return gp_Dir(A.Normalized());
}

// ============================================================================
/*!
 *  \brief SpanDirection()
*/
// ============================================================================
gp_Dir2d CableLib_SpanGeometry::SpanDirection(const gp_Pnt2d &P1,
                                              const gp_Pnt2d &P2,
                                              const gp_Vec2d &L)
{
    gp_Vec2d A = SpanVector(P1,P2,L);
    return gp_Dir2d(A.Normalized());
}

// ============================================================================
/*!
 *  \brief SpanLength()
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::SpanLength(const gp_Pnt &P1,
                                                const gp_Pnt &P2,
                                                const gp_Vec &L)
{
    gp_Vec A = SpanVector(P1,P2,L);
    return A.Magnitude();
}

// ============================================================================
/*!
 *  \brief SpanLength()
 *  Compute the length of a 2d span.
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::SpanLength(const gp_Pnt2d &P1,
                                                const gp_Pnt2d &P2,
                                                const gp_Vec2d &L)
{
    gp_Vec2d A = SpanVector(P1,P2,L);
    return A.Magnitude();
}

// ============================================================================
/*!
 *  \brief SpanVector()
 *  Compute the span vector (i.e. distance between P1 and P2) perpendicular
 *  to the applied load.
*/
// ============================================================================
gp_Vec CableLib_SpanGeometry::SpanVector(const gp_Pnt &P1,
                                         const gp_Pnt &P2,
                                         const gp_Vec &L)
{
    gp_Vec C = ChordVector(P1,P2);
    gp_Vec B = SlopeVector(P1,P2,L);
    return C - B;
}

// ============================================================================
/*!
 *  \brief SpanVector()
 *  Compute the span vector (i.e. distance between P1 and P2) perpendicular
 *  to the applied load.
*/
// ============================================================================
gp_Vec2d CableLib_SpanGeometry::SpanVector(const gp_Pnt2d &P1,
                                           const gp_Pnt2d &P2,
                                           const gp_Vec2d &L)
{
    gp_Vec2d C = ChordVector(P1,P2);
    gp_Vec2d B = SlopeVector(P1,P2,L);
    return C - B;
}

// ============================================================================
/*!
 *  \brief SlopeDirection()
*/
// ============================================================================
gp_Dir CableLib_SpanGeometry::SlopeDirection(const gp_Pnt &P1,
                                             const gp_Pnt &P2,
                                             const gp_Vec &L)
{
    gp_Vec A = SpanVector(P1,P2,L);
    return gp_Dir(A.Normalized());
}

// ============================================================================
/*!
 *  \brief SlopeDirection()
*/
// ============================================================================
gp_Dir2d CableLib_SpanGeometry::SlopeDirection(const gp_Pnt2d &P1,
                                               const gp_Pnt2d &P2,
                                               const gp_Vec2d &L)
{
    gp_Vec2d A = SpanVector(P1,P2,L);
    return gp_Dir2d(A.Normalized());
}

// ============================================================================
/*!
 *  \brief SlopeLength()
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::SlopeLength(const gp_Pnt &P1,
                                                 const gp_Pnt &P2,
                                                 const gp_Vec &L)
{
    gp_Vec B = SlopeVector(P1,P2,L);
    return B.Magnitude();
}

// ============================================================================
/*!
 *  \brief SlopeLength()
*/
// ============================================================================
Standard_Real CableLib_SpanGeometry::SlopeLength(const gp_Pnt2d &P1,
                                                 const gp_Pnt2d &P2,
                                                 const gp_Vec2d &L)
{
    gp_Vec2d B = SlopeVector(P1,P2,L);
    return B.Magnitude();
}

// ============================================================================
/*!
 *  \brief SlopeVector()
*/
// ============================================================================
gp_Vec CableLib_SpanGeometry::SlopeVector(const gp_Pnt &P1,
                                          const gp_Pnt &P2,
                                          const gp_Vec &L)
{
    gp_Vec C = ChordVector(P1,P2);
    gp_Dir D = -1.*gp_Dir(L.Normalized());
    return C.Dot(D) * D;
}

// ============================================================================
/*!
 *  \brief SlopeVector()
*/
// ============================================================================
gp_Vec2d CableLib_SpanGeometry::SlopeVector(const gp_Pnt2d &P1,
                                            const gp_Pnt2d &P2,
                                            const gp_Vec2d &L)
{
    gp_Vec2d C = ChordVector(P1,P2);
    gp_Dir2d D = -1.*gp_Dir2d(L.Normalized());
    return C.Dot(D) * D;
}

