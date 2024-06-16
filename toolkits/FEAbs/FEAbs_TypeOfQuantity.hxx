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


#ifndef __FEAbs_TypeOfQuantity_hxx__
#define __FEAbs_TypeOfQuantity_hxx__


// ============================================================================
/*!
 *  \brief FEAbs_TypeOfQuantity
*/
// ============================================================================
enum FEAbs_TypeOfQuantity
{
    FEAbs_QTE_DRX,
    FEAbs_QTE_DRY,
    FEAbs_QTE_DRZ,
    FEAbs_QTE_DX,
    FEAbs_QTE_DY,
    FEAbs_QTE_DZ,
    FEAbs_QTE_SigXX,
    FEAbs_QTE_SigYY,
    FEAbs_QTE_SigZZ,
    FEAbs_QTE_Temperature
};

#endif // __FEAbs_TypeOfQuantity_hxx__
