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
#include <ModelDS_TDegreeOfFreedom.hxx>
#include <ModelDS_TNode.hxx>
#include <ModelDS_Tool.hxx>

// OpenCascade
#include <Standard_NullObject.hxx>



// ============================================================================
/*!
 *  \brief DOFType()
 *  Retrieve the type of a degree of freedom.
*/
// ============================================================================
ModelAbs_TypeOfDOF ModelDS_Tool::DOFType(const ModelDS_DegreeOfFreedom &theDOF)
{
    const ModelDS_TDegreeOfFreedom* aTDOF =
            static_cast<const ModelDS_TDegreeOfFreedom*>(theDOF.TObject().get());
    if(aTDOF == 0)
        throw Standard_NullObject("ModelDS_Tool::DOFType()");

    return aTDOF->DOFType();
}

// ============================================================================
/*!
 *  \brief Point()
 *  Retrieve a point from a mesh node.
*/
// ============================================================================
const gp_Pnt& ModelDS_Tool::Point(const ModelDS_Node &theNode)
{
    const ModelDS_TNode* aTNode = static_cast<const ModelDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("ModelDS_Tool::Point()");

    const gp_Pnt& aPoint = aTNode->Point();
    return aPoint;
}
