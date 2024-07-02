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


#ifndef __CableLib_CatenaryEquilibrium_hxx__
#define __CableLib_CatenaryEquilibrium_hxx__

// OpenCascade
#include <Standard.hxx>



// ============================================================================
/*!
 *  \brief CableLib_CatenaryEquilibrium
*/
// ============================================================================
class CableLib_CatenaryEquilibrium
{

public:

    static Standard_Real    Length(const Standard_Real H,
                                   const Standard_Real A,
                                   const Standard_Real W);

    static Standard_Real    Length(const Standard_Real H,
                                   const Standard_Real A,
                                   const Standard_Real B,
                                   const Standard_Real W);

    static Standard_Real    LengthDH1(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real W);

    static Standard_Real    LengthDH1(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real B,
                                      const Standard_Real W);

    static void             LowPoint(const Standard_Real H,
                                     const Standard_Real A,
                                     const Standard_Real W,
                                     Standard_Real& U,
                                     Standard_Real& V);

    static void             LowPoint(const Standard_Real H,
                                     const Standard_Real A,
                                     const Standard_Real B,
                                     const Standard_Real W,
                                     Standard_Real& U,
                                     Standard_Real& V);

    static Standard_Real    LowPointU(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real W);

    static Standard_Real    LowPointU(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real B,
                                      const Standard_Real W);

    static Standard_Real    LowPointV(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real W);

    static Standard_Real    LowPointV(const Standard_Real H,
                                      const Standard_Real A,
                                      const Standard_Real B,
                                      const Standard_Real W);

    static Standard_Real    MeanTension(const Standard_Real H,
                                        const Standard_Real A,
                                        const Standard_Real W);

    static Standard_Real    MeanTension(const Standard_Real H,
                                        const Standard_Real A,
                                        const Standard_Real B,
                                        const Standard_Real W);

    static Standard_Real    MeanTensionDH1(const Standard_Real H,
                                           const Standard_Real A,
                                           const Standard_Real W);

    static Standard_Real    MeanTensionDH1(const Standard_Real H,
                                           const Standard_Real A,
                                           const Standard_Real B,
                                           const Standard_Real W);

    static Standard_Real    Parameter(const Standard_Real H,
                                      const Standard_Real W);

    static Standard_Real    Sag(const Standard_Real H,
                                const Standard_Real A,
                                const Standard_Real W);

    static Standard_Real    Sag(const Standard_Real H,
                                const Standard_Real A,
                                const Standard_Real B,
                                const Standard_Real W);

    static Standard_Real    SagDH1(const Standard_Real H,
                                   const Standard_Real A,
                                   const Standard_Real W);

    static Standard_Real    SagDH1(const Standard_Real H,
                                   const Standard_Real A,
                                   const Standard_Real B,
                                   const Standard_Real W);

    static Standard_Real    Slack(const Standard_Real H,
                                  const Standard_Real A,
                                  const Standard_Real W);

    static Standard_Real    Slack(const Standard_Real H,
                                  const Standard_Real A,
                                  const Standard_Real B,
                                  const Standard_Real W);

    static Standard_Real    TotalTension(const Standard_Real H,
                                         const Standard_Real A,
                                         const Standard_Real W);

    static Standard_Real    TotalTensionP1(const Standard_Real H,
                                           const Standard_Real A,
                                           const Standard_Real B,
                                           const Standard_Real W);

    static Standard_Real    TotalTensionP2(const Standard_Real H,
                                           const Standard_Real A,
                                           const Standard_Real B,
                                           const Standard_Real W);

};

#endif // __CableLib_CatenaryEquilibrium_hxx__
