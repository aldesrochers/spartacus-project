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
#include <CableLib.hxx>
#include <CableLib_CatenaryEquilibrium.hxx>
#include <CableLib_SpanGeometry.hxx>

// OpenCascade
#include <gp.hxx>
#include <Standard_OutOfRange.hxx>


// ============================================================================
/*!
 *  \brief CableLength()
*/
// ============================================================================
Standard_Real CableLib::CableLength(const Standard_Real H,
                                    const Standard_Real A,
                                    const Standard_Real W,
                                    const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::Length(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableLength()
*/
// ============================================================================
Standard_Real CableLib::CableLength(const Standard_Real H,
                                    const Standard_Real A,
                                    const Standard_Real B,
                                    const Standard_Real W,
                                    const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::Length(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableLength()
*/
// ============================================================================
Standard_Real CableLib::CableLength(const Standard_Real H,
                                    const gp_Pnt2d &P1,
                                    const gp_Pnt2d &P2,
                                    const gp_Vec2d &L,
                                    const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableLength(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableLength()
*/
// ============================================================================
Standard_Real CableLib::CableLength(const Standard_Real H,
                                    const gp_Pnt &P1,
                                    const gp_Pnt &P2,
                                    const gp_Vec &L,
                                    const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableLength(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableLengthDH1()
*/
// ============================================================================
Standard_Real CableLib::CableLengthDH1(const Standard_Real H,
                                       const Standard_Real A,
                                       const Standard_Real W,
                                       const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::LengthDH1(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableLengthDH1()
*/
// ============================================================================
Standard_Real CableLib::CableLengthDH1(const Standard_Real H,
                                       const Standard_Real A,
                                       const Standard_Real B,
                                       const Standard_Real W,
                                       const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::LengthDH1(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableLengthDH1()
*/
// ============================================================================
Standard_Real CableLib::CableLengthDH1(const Standard_Real H,
                                       const gp_Pnt2d &P1,
                                       const gp_Pnt2d &P2,
                                       const gp_Vec2d &L,
                                       const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableLengthDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableLengthDH1()
*/
// ============================================================================
Standard_Real CableLib::CableLengthDH1(const Standard_Real H,
                                       const gp_Pnt &P1,
                                       const gp_Pnt &P2,
                                       const gp_Vec &L,
                                       const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableLengthDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableMeanTension()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTension(const Standard_Real H,
                                         const Standard_Real A,
                                         const Standard_Real W,
                                         const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::MeanTension(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableMeanTension()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTension(const Standard_Real H,
                                         const Standard_Real A,
                                         const Standard_Real B,
                                         const Standard_Real W,
                                         const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::MeanTension(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableMeanTension()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTension(const Standard_Real H,
                                         const gp_Pnt2d &P1,
                                         const gp_Pnt2d &P2,
                                         const gp_Vec2d &L,
                                         const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableMeanTension(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableMeanTension()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTension(const Standard_Real H,
                                         const gp_Pnt &P1,
                                         const gp_Pnt &P2,
                                         const gp_Vec &L,
                                         const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableMeanTension(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableMeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTensionDH1(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real W,
                                            const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::MeanTensionDH1(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableMeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTensionDH1(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real B,
                                            const Standard_Real W,
                                            const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::MeanTensionDH1(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableMeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTensionDH1(const Standard_Real H,
                                            const gp_Pnt2d &P1,
                                            const gp_Pnt2d &P2,
                                            const gp_Vec2d &L,
                                            const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableMeanTensionDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableMeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib::CableMeanTensionDH1(const Standard_Real H,
                                            const gp_Pnt &P1,
                                            const gp_Pnt &P2,
                                            const gp_Vec &L,
                                            const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableMeanTensionDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableSag()
*/
// ============================================================================
Standard_Real CableLib::CableSag(const Standard_Real H,
                                 const Standard_Real A,
                                 const Standard_Real W,
                                 const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::Sag(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableSag()
*/
// ============================================================================
Standard_Real CableLib::CableSag(const Standard_Real H,
                                 const Standard_Real A,
                                 const Standard_Real B,
                                 const Standard_Real W,
                                 const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::Sag(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableSag()
*/
// ============================================================================
Standard_Real CableLib::CableSag(const Standard_Real H,
                                 const gp_Pnt2d &P1,
                                 const gp_Pnt2d &P2,
                                 const gp_Vec2d &L,
                                 const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableSag(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableSag()
*/
// ============================================================================
Standard_Real CableLib::CableSag(const Standard_Real H,
                                 const gp_Pnt &P1,
                                 const gp_Pnt &P2,
                                 const gp_Vec &L,
                                 const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableSag(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableSagDH1()
*/
// ============================================================================
Standard_Real CableLib::CableSagDH1(const Standard_Real H,
                                    const Standard_Real A,
                                    const Standard_Real W,
                                    const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::SagDH1(H,A,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableSagDH1()
*/
// ============================================================================
Standard_Real CableLib::CableSagDH1(const Standard_Real H,
                                    const Standard_Real A,
                                    const Standard_Real B,
                                    const Standard_Real W,
                                    const CableLib_TypeOfCable T)
{
    if(T == CableLib_TYPE_Catenary)
        return CableLib_CatenaryEquilibrium::SagDH1(H,A,B,W);
    else
        throw Standard_OutOfRange();
}

// ============================================================================
/*!
 *  \brief CableSagDH1()
*/
// ============================================================================
Standard_Real CableLib::CableSagDH1(const Standard_Real H,
                                    const gp_Pnt2d &P1,
                                    const gp_Pnt2d &P2,
                                    const gp_Vec2d &L,
                                    const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableSagDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief CableSagDH1()
*/
// ============================================================================
Standard_Real CableLib::CableSagDH1(const Standard_Real H,
                                    const gp_Pnt &P1,
                                    const gp_Pnt &P2,
                                    const gp_Vec &L,
                                    const CableLib_TypeOfCable T)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    return CableSagDH1(H,A,B,W,T);
}

// ============================================================================
/*!
 *  \brief Catenary()
*/
// ============================================================================
gp_Catenary2d CableLib::Catenary(const Standard_Real H,
                                 const Standard_Real A,
                                 const Standard_Real W)
{
    Standard_Real U,V;
    CableLib_CatenaryEquilibrium::LowPoint(H,A,W,U,V);
    Standard_Real P = CableLib_CatenaryEquilibrium::Parameter(H,W);
    gp_Ax22d Axis(gp_Pnt2d(U,V), gp::DX2d());
    return gp_Catenary2d(Axis, P);
}

// ============================================================================
/*!
 *  \brief Catenary()
*/
// ============================================================================
gp_Catenary2d CableLib::Catenary(const Standard_Real H,
                                 const Standard_Real A,
                                 const Standard_Real B,
                                 const Standard_Real W)
{
    Standard_Real U,V;
    CableLib_CatenaryEquilibrium::LowPoint(H,A,B,W,U,V);
    Standard_Real P = CableLib_CatenaryEquilibrium::Parameter(H,W);
    gp_Ax22d Axis(gp_Pnt2d(U,V), gp::DX2d());
    return gp_Catenary2d(Axis, P);
}

// ============================================================================
/*!
 *  \brief Catenary()
*/
// ============================================================================
gp_Catenary2d CableLib::Catenary(const Standard_Real H,
                                 const gp_Pnt2d &P1,
                                 const gp_Pnt2d &P2,
                                 const gp_Vec2d &L)
{
    Standard_Real A = CableLib_SpanGeometry::SpanLength(P1,P2,L);
    Standard_Real B = CableLib_SpanGeometry::SlopeLength(P1,P2,L);
    Standard_Real W = L.Magnitude();
    Standard_Real U,V;
    CableLib_CatenaryEquilibrium::LowPoint(H,A,B,W,U,V);
    Standard_Real P = CableLib_CatenaryEquilibrium::Parameter(H,W);
    gp_Dir2d DA = CableLib_SpanGeometry::SpanDirection(P1,P2,L);
    gp_Dir2d DB = CableLib_SpanGeometry::SlopeDirection(P1,P2,L);
    gp_Pnt2d P0 = P1.Translated(U*DA + V*DB);
    gp_Ax22d Axis(P0, DA);
    return gp_Catenary2d(Axis, P);
}
