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


#ifndef __fep_TypeOfDOF_hxx__
#define __fep_TypeOfDOF_hxx__


// ============================================================================
/*!
 *  \brief fep_TypeOfDOF
*/
// ============================================================================
enum fep_TypeOfDOF
{
    fep_DOF_NULL,
    fep_DOF_DX,
    fep_DOF_DY,
    fep_DOF_DZ,
    fep_DOF_DRX,
    fep_DOF_DRY,
    fep_DOF_DRZ,
    fep_DOF_TEMP
};


#endif // __fep_TypeOfDOF_hxx__
