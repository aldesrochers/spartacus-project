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


#ifndef __ModelAbs_TypeOfDOF_hxx__
#define __ModelAbs_TypeOfDOF_hxx__


// ============================================================================
/*!
 *  \brief ModelAbs_TypeOfDOF
*/
// ============================================================================
enum ModelAbs_TypeOfDOF
{
    ModelAbs_DOF_DRX,
    ModelAbs_DOF_DRY,
    ModelAbs_DOF_DRZ,
    ModelAbs_DOF_DX,
    ModelAbs_DOF_DY,
    ModelAbs_DOF_DZ,
    ModelAbs_DOF_Null,
    ModelAbs_DOF_Time,
    ModelAbs_DOF_Temperature
};

#endif // __ModelAbs_TypeOfDOF_hxx__
