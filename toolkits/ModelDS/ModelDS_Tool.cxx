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
#include <ModelDS_Point1d.hxx>
#include <ModelDS_TNode.hxx>
#include <ModelDS_Tool.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>
#include <Standard_NullObject.hxx>


// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
gp_Pnt1d ModelDS_Tool::Point1d(const ModelDS_Node& theNode)
{
    const ModelDS_TNode* aTNode = static_cast<const ModelDS_TNode*>(theNode.TObject().get());
    if(aTNode == 0)
        throw Standard_NullObject("ModelDS_Tool::Point()->Invalid node.");
    const Handle(ModelDS_Point)& aPoint = aTNode->Point();
    if(!aPoint->IsPoint1d())
        throw Standard_DomainError("ModelDS_Node::Point()->Not a 1d point.");
    const Handle(ModelDS_Point1d)& aPoint1d = Handle(ModelDS_Point1d)::DownCast(aPoint);
    return aPoint1d->Point1d();
}

