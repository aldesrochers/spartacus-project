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
#include <CableLib_CatenaryEquilibrium.hxx>


// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Length(const Standard_Real H,
                                                   const Standard_Real A,
                                                   const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    return 2.*P*Sinh(A/(2.*P));
}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Length(const Standard_Real H,
                                                   const Standard_Real A,
                                                   const Standard_Real B,
                                                   const Standard_Real W)
{
    Standard_Real Sn = Length(H,A,W);
    return Sqrt(Pow(Sn,2.) + Pow(B,2.));
}

// ============================================================================
/*!
 *  \brief LengthDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LengthDH1(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    return 2./W*S - A/H*C;
}

// ============================================================================
/*!
 *  \brief LengthDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LengthDH1(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real B,
                                                      const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    Standard_Real DN = 2.*S*(2.*S*H - A*W*C);
    Standard_Real DD = Pow(W,2.)*Sqrt((4.*Pow(S,2.)*Pow(H,2.))/Pow(W,2.) + Pow(B,2.));
    return DN/DD;
}

// ============================================================================
/*!
 *  \brief LowPoint()
*/
// ============================================================================
void CableLib_CatenaryEquilibrium::LowPoint(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real W,
                                            Standard_Real& U,
                                            Standard_Real& V)
{
    U = LowPointU(H,A,W);
    V = LowPointV(H,A,W);
}

// ============================================================================
/*!
 *  \brief LowPoint()
*/
// ============================================================================
void CableLib_CatenaryEquilibrium::LowPoint(const Standard_Real H,
                                            const Standard_Real A,
                                            const Standard_Real B,
                                            const Standard_Real W,
                                            Standard_Real& U,
                                            Standard_Real& V)
{
    U = LowPointU(H,A,B,W);
    V = LowPointV(H,A,B,W);
}

// ============================================================================
/*!
 *  \brief LowPointU()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LowPointU(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real W)
{
    return A/2.;
}

// ============================================================================
/*!
 *  \brief LowPointU()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LowPointU(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real B,
                                                      const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real Sn = Length(H,A,W);
    return A/2. - P*ASinh(B/Sn);
}

// ============================================================================
/*!
 *  \brief LowPointV()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LowPointV(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real W)
{
    Standard_Real Fn = Sag(H,A,W);
    return -Fn;
}

// ============================================================================
/*!
 *  \brief LowPointV()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::LowPointV(const Standard_Real H,
                                                      const Standard_Real A,
                                                      const Standard_Real B,
                                                      const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real S = Length(H,A,B,W);
    Standard_Real Sn = Length(H,A,W);
    Standard_Real Tn = TotalTension(H,A,W);
    return P*(1. - S/Sn*Tn/H) + B/2.;
}

// ============================================================================
/*!
 *  \brief MeanTension()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::MeanTension(const Standard_Real H,
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
Standard_Real CableLib_CatenaryEquilibrium::MeanTension(const Standard_Real H,
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
 *  \brief MeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::MeanTensionDH1(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    Standard_Real D1 = -A*W/(4.*H)*S;
    Standard_Real D2 = Pow(A,2.)*Pow(W,2.)/(8.*Pow(H,2.))*C/Pow(S,2.);
    Standard_Real D3 = C/2.;
    return D1 + D2 + D3;
}

// ============================================================================
/*!
 *  \brief MeanTensionDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::MeanTensionDH1(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real B,
                                                           const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    Standard_Real DN1 = 16.*C*Pow(S,5.)*Pow(H,5.);
    Standard_Real DN2 = -8.*A*W*Pow(S,6.)*Pow(H,4.);
    Standard_Real DN3 = (4.*Pow(A,2.)-8.*Pow(B,2.))*Pow(W,2.)*C*Pow(S,3.)*Pow(H,3.);
    Standard_Real DN4 = ((10.*A*Pow(B,2.)*Pow(W,3.)*Pow(C,2.)-2.*A*Pow(B,2.)*Pow(W,3.))*Pow(S,2.)-6.*A*Pow(B,2.)*Pow(W,3.)*Pow(S,4.))*Pow(H,2.);
    Standard_Real DN5 = (2.*Pow(A,2.)+Pow(B,2.)-4.*Pow(B,4.)*Pow(W,4.)*C*S*H);
    Standard_Real DN6 = -A*Pow(B,4.)*Pow(W,5.)*Pow(S,2.);
    Standard_Real DN7 = 3.*A*Pow(B,4.)*Pow(W,5.)*Pow(C,2.);
    Standard_Real DD = 16.*W*Pow(S,4.)*Pow(H,4.)*Sqrt((4.*Pow(S,2.)*Pow(H,2.))/Pow(W,2.)+Pow(B,2.));
    return (DN1 + DN2 + DN3 + DN4 + DN5 + DN6 + DN7) / DD;
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Parameter(const Standard_Real H,
                                                      const Standard_Real W)
{
    return H/W;
}

// ============================================================================
/*!
 *  \brief Sag()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Sag(const Standard_Real H,
                                                const Standard_Real A,
                                                const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real Tn = TotalTension(H,A,W);
    return P*(Tn/H - 1.);
}

// ============================================================================
/*!
 *  \brief Sag()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Sag(const Standard_Real H,
                                                const Standard_Real A,
                                                const Standard_Real B,
                                                const Standard_Real W)
{
    Standard_Real Fn = Sag(H,A,W);
    Standard_Real S = Length(H,A,B,W);
    Standard_Real Sn = Length(H,A,W);
    return Fn * S/Sn;
}

// ============================================================================
/*!
 *  \brief SagDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::SagDH1(const Standard_Real H,
                                                   const Standard_Real A,
                                                   const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    Standard_Real D1 = (C - 1.) / W;
    Standard_Real D2 = -A/(2.*H)*S;
    return D1 + D2;
}

// ============================================================================
/*!
 *  \brief SagDH1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::SagDH1(const Standard_Real H,
                                                   const Standard_Real A,
                                                   const Standard_Real B,
                                                   const Standard_Real W)
{
    Standard_Real S = Sinh((A*W)/(2.*H));
    Standard_Real C = Cosh((A*W)/(2.*H));
    Standard_Real DN1 = (8.*C-8.)*Pow(S,3.)*Pow(H,3.);
    Standard_Real DN2 = -4.*A*W*Pow(S,4.)*Pow(H,2.);
    Standard_Real DN3 = -A*Pow(B,2.)*Pow(W,3.)*Pow(S,2.);
    Standard_Real DN4 = A*Pow(B,2.)*Pow(W,3.)*Pow(C,2.);
    Standard_Real DN5 = -A*Pow(B,2.)*Pow(W,3.)*C;
    Standard_Real DD = 4.*Pow(W,2.)*Pow(S,2.)*Pow(H,2.)*Sqrt((4.*Pow(S,2.)*Pow(H,2.))/Pow(W,2.)+Pow(B,2.));
    return (DN1 + DN2 + DN3 + DN4 + DN5) / DD;
}

// ============================================================================
/*!
 *  \brief Slack()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Slack(const Standard_Real H,
                                                  const Standard_Real A,
                                                  const Standard_Real W)
{
    Standard_Real Sn = Length(H,A,W);
    return Sn - A;
}

// ============================================================================
/*!
 *  \brief Slack()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::Slack(const Standard_Real H,
                                                  const Standard_Real A,
                                                  const Standard_Real B,
                                                  const Standard_Real W)
{
    Standard_Real C = Sqrt(Pow(A,2.) + Pow(B,2.));
    Standard_Real S = Length(H,A,B,W);
    return S - C;
}

// ============================================================================
/*!
 *  \brief TotalTension()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::TotalTension(const Standard_Real H,
                                                         const Standard_Real A,
                                                         const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    return H*Cosh(A/(2.*P));
}

// ============================================================================
/*!
 *  \brief TotalTensionP1()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::TotalTensionP1(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real B,
                                                           const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real U = LowPointU(H,A,B,W);
    return H*Cosh(U/P);
}

// ============================================================================
/*!
 *  \brief TotalTensionP2()
*/
// ============================================================================
Standard_Real CableLib_CatenaryEquilibrium::TotalTensionP2(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real B,
                                                           const Standard_Real W)
{
    Standard_Real P = Parameter(H,W);
    Standard_Real U = LowPointU(H,A,B,W);
    return H*Cosh((A-U)/P);
}
