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


#ifndef __MeshDS_TNode_hxx__
#define __MeshDS_TNode_hxx__

// Spartacus
#include <MeshDS_ListOfCell.hxx>
#include <MeshDS_TObject.hxx>

// OpenCascade
#include <gp_Pnt.hxx>

// Forward declarations
class MeshDS_TNode;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TNode, MeshDS_TObject);


// ============================================================================
/*!
 *  \brief MeshDS_TNode
*/
// ============================================================================
class MeshDS_TNode : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TNode();
    // destructors
    Standard_EXPORT ~MeshDS_TNode();

public:

    Standard_EXPORT const MeshDS_ListOfCell&    LinkedCells() const;
    Standard_EXPORT MeshDS_ListOfCell&          LinkedCells();
    Standard_EXPORT const gp_Pnt&               Point() const;
    Standard_EXPORT void                        SetPoint(const gp_Pnt& thePoint);

private:

    MeshDS_ListOfCell   myLinkedCells;
    gp_Pnt              myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TNode, MeshDS_TObject);

};


#endif // __MeshDS_TNode_hxx__
