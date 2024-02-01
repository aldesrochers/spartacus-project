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
#include <MeshDS_TNode1d.hxx>
#include <MeshDS_TNode2d.hxx>
#include <MeshDS_TNode3d.hxx>
#include <MeshDS_Tool.hxx>

// OpenCascade
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
//gp_Pnt MeshDS_Tool::Point(const MeshDS_Node &theNode)
//{
//    const MeshDS_TNode3d* aTNode = static_cast<const MeshDS_TNode3d*>(theNode.TObject().get());
//    if (aTNode == 0)
//        throw Standard_NullObject("MeshDS_Tool::Point()");
//    const gp_Pnt& aPoint = aTNode->Point();
//    return aPoint;
//}
