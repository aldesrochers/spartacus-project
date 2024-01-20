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
#include <MechLib_CatenaryCable.hxx>


// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::Length(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real W)
{
    Standard_Real P = Parameter(H, W);
    return 2.*P*Sinh(A/(2.*P));
}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::Length(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real B,
                                            const Standard_Real W)
{
    Standard_Real Sn = Length(H,A,W);
    return Sqrt(Pow(Sn,2.) + Pow(B,2.));
}

// ============================================================================
/*!
 *  \brief LowPoint()
*/
// ============================================================================
void MechLib_CatenaryCable::LowPoint(const Standard_Real H,
                                     const Standard_Real A,
                                     const Standard_Real W,
                                     Standard_Real& U,
                                     Standard_Real& V)
{
    U = A/2.;
    V = -1. * Sag(H, A, W);
}

// ============================================================================
/*!
 *  \brief LowPoint()
*/
// ============================================================================
void MechLib_CatenaryCable::LowPoint(const Standard_Real H,
                                     const Standard_Real A,
                                     const Standard_Real B,
                                     const Standard_Real W,
                                     Standard_Real& U,
                                     Standard_Real& V)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real S = Length(H,A,B,W);
    Standard_Real Sn = Length(H,A,W);
    Standard_Real Tn = TotalTension(H,A,W);
    U = A/2. - P*ASinh(B/Sn);
    V = P*(1. - S/Sn*Tn/H) + B/2.;
}

// ============================================================================
/*!
 *  \brief MeanTension()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::MeanTension(const Standard_Real H,
                                                 const Standard_Real A,
                                                 const Standard_Real W)
{
    Standard_Real Sn = Length(H,A,W);
    Standard_Real Tn = TotalTension(H,A,W);
    return (H*A+Tn*Sn)/(2.*Sn);
}

// ============================================================================
/*!
 *  \brief MeanTension()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::MeanTension(const Standard_Real H,
                                                 const Standard_Real A,
                                                 const Standard_Real B,
                                                 const Standard_Real W)
{
    Standard_Real S = Length(H,A,B,W);
    Standard_Real Sn = Length(H,A,W);
    Standard_Real TMn = MeanTension(H,A,W);
    Standard_Real Tn = TotalTension(H,A,W);
    return S/Sn * (TMn + Pow(B,2.)/Pow(Sn,2.)*Tn);
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::Parameter(const Standard_Real H,
                                               const Standard_Real W)
{
    return H/W;
}

// ============================================================================
/*!
 *  \brief Sag()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::Sag(const Standard_Real H,
                                         const Standard_Real A,
                                         const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real Tn = TotalTension(H,A,W);
    return P*(Tn/H - 1.);
}

// ============================================================================
/*!
 *  \brief TotalTension()
*/
// ============================================================================
Standard_Real MechLib_CatenaryCable::TotalTension(const Standard_Real H,
                                                  const Standard_Real A,
                                                  const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    return H*Cosh(A/(2.*P));
}
