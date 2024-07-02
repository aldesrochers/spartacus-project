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


#ifndef __CableLib_hxx__
#define __CableLib_hxx__

// OpenCascade
#include <Standard.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// Spartacus
#include <gp_Catenary.hxx>
#include <gp_Catenary2d.hxx>
#include <CableLib_TypeOfCable.hxx>

// ============================================================================
/*!
 *  \brief CableLib
*/
// ============================================================================
class CableLib
{

public:

    static Standard_EXPORT Standard_Real    CableLength(const Standard_Real H,
                                                        const Standard_Real A,
                                                        const Standard_Real W,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLength(const Standard_Real H,
                                                        const Standard_Real A,
                                                        const Standard_Real B,
                                                        const Standard_Real W,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLength(const Standard_Real H,
                                                        const gp_Pnt2d& P1,
                                                        const gp_Pnt2d& P2,
                                                        const gp_Vec2d& L,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLength(const Standard_Real H,
                                                        const gp_Pnt& P1,
                                                        const gp_Pnt& P2,
                                                        const gp_Vec& L,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLengthDH1(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real W,
                                                           const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLengthDH1(const Standard_Real H,
                                                           const Standard_Real A,
                                                           const Standard_Real B,
                                                           const Standard_Real W,
                                                           const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLengthDH1(const Standard_Real H,
                                                           const gp_Pnt2d& P1,
                                                           const gp_Pnt2d& P2,
                                                           const gp_Vec2d& L,
                                                           const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableLengthDH1(const Standard_Real H,
                                                           const gp_Pnt& P1,
                                                           const gp_Pnt& P2,
                                                           const gp_Vec& L,
                                                           const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTension(const Standard_Real H,
                                                             const Standard_Real A,
                                                             const Standard_Real W,
                                                             const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTension(const Standard_Real H,
                                                             const Standard_Real A,
                                                             const Standard_Real B,
                                                             const Standard_Real W,
                                                             const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTension(const Standard_Real H,
                                                             const gp_Pnt2d& P1,
                                                             const gp_Pnt2d& P2,
                                                             const gp_Vec2d& L,
                                                             const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTension(const Standard_Real H,
                                                             const gp_Pnt& P1,
                                                             const gp_Pnt& P2,
                                                             const gp_Vec& L,
                                                             const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTensionDH1(const Standard_Real H,
                                                                const Standard_Real A,
                                                                const Standard_Real W,
                                                                const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTensionDH1(const Standard_Real H,
                                                                const Standard_Real A,
                                                                const Standard_Real B,
                                                                const Standard_Real W,
                                                                const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTensionDH1(const Standard_Real H,
                                                                const gp_Pnt2d& P1,
                                                                const gp_Pnt2d& P2,
                                                                const gp_Vec2d& L,
                                                                const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableMeanTensionDH1(const Standard_Real H,
                                                                const gp_Pnt& P1,
                                                                const gp_Pnt& P2,
                                                                const gp_Vec& L,
                                                                const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSag(const Standard_Real H,
                                                     const Standard_Real A,
                                                     const Standard_Real W,
                                                     const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSag(const Standard_Real H,
                                                     const Standard_Real A,
                                                     const Standard_Real B,
                                                     const Standard_Real W,
                                                     const CableLib_TypeOfCable T= CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSag(const Standard_Real H,
                                                     const gp_Pnt2d& P1,
                                                     const gp_Pnt2d& P2,
                                                     const gp_Vec2d& L,
                                                     const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSag(const Standard_Real H,
                                                     const gp_Pnt& P1,
                                                     const gp_Pnt& P2,
                                                     const gp_Vec& L,
                                                     const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSagDH1(const Standard_Real H,
                                                        const Standard_Real A,
                                                        const Standard_Real W,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSagDH1(const Standard_Real H,
                                                        const Standard_Real A,
                                                        const Standard_Real B,
                                                        const Standard_Real W,
                                                        const CableLib_TypeOfCable T= CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSagDH1(const Standard_Real H,
                                                        const gp_Pnt2d& P1,
                                                        const gp_Pnt2d& P2,
                                                        const gp_Vec2d& L,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT Standard_Real    CableSagDH1(const Standard_Real H,
                                                        const gp_Pnt& P1,
                                                        const gp_Pnt& P2,
                                                        const gp_Vec& L,
                                                        const CableLib_TypeOfCable T = CableLib_TYPE_Catenary);

    static Standard_EXPORT gp_Catenary2d    Catenary(const Standard_Real H,
                                                     const Standard_Real A,
                                                     const Standard_Real W);

    static Standard_EXPORT gp_Catenary2d    Catenary(const Standard_Real H,
                                                     const Standard_Real A,
                                                     const Standard_Real B,
                                                     const Standard_Real W);

    static Standard_EXPORT gp_Catenary2d    Catenary(const Standard_Real H,
                                                     const gp_Pnt2d& P1,
                                                     const gp_Pnt2d& P2,
                                                     const gp_Vec2d& L);


};

#endif // __CableLib_hxx__
