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


#ifndef __Triangle_Mesh_hxx__
#define __Triangle_Mesh_hxx__

// Spartacus
#include <Triangle_Array1OfEdge.hxx>
#include <Triangle_Array1OfNode.hxx>
#include <Triangle_Array1OfElement.hxx>
#include <Triangle_Object.hxx>

// Forward declarations
class Triangle_Mesh;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_Mesh, Triangle_Object)



// ============================================================================
/*!
 *  \brief Triangle_Mesh
*/
// ============================================================================
class Triangle_Mesh : public Triangle_Object
{

public:
    // constructors
    Standard_EXPORT Triangle_Mesh();
    // destructors
    Standard_EXPORT ~Triangle_Mesh();

public:

    Standard_EXPORT Triangle_Array1OfEdge&          ChangeEdges();
    Standard_EXPORT Triangle_Array1OfElement&       ChangeElements();
    Standard_EXPORT Triangle_Array1OfNode&          ChangeNodes();
    Standard_EXPORT const Handle(Triangle_Edge)&    Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfEdge&    Edges() const;
    Standard_EXPORT const Handle(Triangle_Element)& Element(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfElement& Elements() const;
    Standard_EXPORT Standard_Integer                NbEdges() const;
    Standard_EXPORT Standard_Integer                NbElements() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT const Handle(Triangle_Node)&    Node(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfNode&    Nodes() const;
    Standard_EXPORT void                            ResizeEdges(const Standard_Integer theNbEdges,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeElements(const Standard_Integer theNbElements,
                                                                   const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetEdge(const Standard_Integer theIndex,
                                                            const Handle(Triangle_Edge)& theEdge);
    Standard_EXPORT void                            SetElement(const Standard_Integer theIndex,
                                                               const Handle(Triangle_Element)& theElement);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Handle(Triangle_Node)& theNode);



private:

    Triangle_Array1OfEdge       myEdges;
    Triangle_Array1OfElement    myElements;
    Triangle_Array1OfNode       myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_Mesh, Triangle_Object)

};


#endif // __Triangle_Mesh_hxx__
