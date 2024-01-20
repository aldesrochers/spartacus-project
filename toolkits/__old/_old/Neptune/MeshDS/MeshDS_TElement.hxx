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


#ifndef __MeshDS_TElement_hxx__
#define __MeshDS_TElement_hxx__

// Spartacus
#include <MeshAbs_TypeOfElement.hxx>
#include <MeshDS_Array1OfObject.hxx>
#include <MeshDS_ListOfObject.hxx>
#include <MeshDS_Node.hxx>
#include <MeshDS_TObject.hxx>

// Forward declarations
class MeshDS_TElement;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TElement, MeshDS_TObject);


// ============================================================================
/*!
 *  \brief MeshDS_TElement
*/
// ============================================================================
class MeshDS_TElement : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TElement();
    // destructors
    Standard_EXPORT ~MeshDS_TElement();

public:

    Standard_EXPORT MeshAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT MeshAbs_TypeOfElement   ElementType() const;
    Standard_EXPORT MeshDS_ListOfObject&    LinkedGroups();
    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT const MeshDS_Node&      Node(const Standard_Integer theIndex) const;
    Standard_EXPORT MeshDS_Array1OfObject&  Nodes();
    Standard_EXPORT void                    ResizeNodes(const Standard_Integer theNbNodes,
                                                        const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                    SetElementType(const MeshAbs_TypeOfElement theElementType);
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const MeshDS_Node& theNode);

protected:

    Standard_Integer            myElementId;
    MeshAbs_TypeOfElement       myElementType;
    MeshDS_ListOfObject         myLinkedGroups;
    MeshDS_Array1OfObject       myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TElement, MeshDS_TObject);

};

#endif // __MeshDS_TElement_hxx__
