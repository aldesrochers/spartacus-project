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


#ifndef __ModelAbs_TypeOfObject_hxx__
#define __ModelAbs_TypeOfObject_hxx__


// ============================================================================
/*!
 *  \brief ModelAbs_TypeOfObject
*/
// ============================================================================
enum ModelAbs_TypeOfObject
{
    ModelAbs_OBJ_Boundary,
    ModelAbs_OBJ_DegreeOfFreedom,
    ModelAbs_OBJ_DOF,
    ModelAbs_OBJ_Element,
    ModelAbs_OBJ_Equation,
    ModelAbs_OBJ_Mapping,
    ModelAbs_OBJ_Model,
    ModelAbs_OBJ_Load,
    ModelAbs_OBJ_Loading,
    ModelAbs_OBJ_Node
};


#endif // __ModelAbs_TypeOfObject_hxx__
