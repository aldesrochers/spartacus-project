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


#ifndef __Triangle_DataModel_hxx__
#define __Triangle_DataModel_hxx__

// Spartacus
#include <Triangle_Array1OfEdge.hxx>
#include <Triangle_Array1OfElement.hxx>
#include <Triangle_Array1OfSegment.hxx>
#include <Triangle_Array1OfHole.hxx>
#include <Triangle_Array1OfNode.hxx>
#include <Triangle_Array1OfRegion.hxx>
#include <Triangle_Object.hxx>

// Forward declarations
class Triangle_DataModel;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_DataModel, Triangle_Object)



// ============================================================================
/*!
 *  \brief Triangle_DataModel
*/
// ============================================================================
class Triangle_DataModel : public Triangle_Object
{

public:
    // constructors
    Standard_EXPORT Triangle_DataModel();
    // destructors
    Standard_EXPORT ~Triangle_DataModel();

public:

    Standard_EXPORT Triangle_Array1OfEdge&          ChangeEdges();
    Standard_EXPORT Triangle_Array1OfElement&       ChangeElements();
    Standard_EXPORT Triangle_Array1OfHole&          ChangeHoles();
    Standard_EXPORT Triangle_Array1OfNode&          ChangeNodes();
    Standard_EXPORT Triangle_Array1OfRegion&        ChangeRegions();
    Standard_EXPORT Triangle_Array1OfSegment&       ChangeSegments();
    Standard_EXPORT const Handle(Triangle_Edge)&    Edge(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfEdge&    Edges() const;
    Standard_EXPORT const Handle(Triangle_Element)& Element(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfElement& Elements() const;
    Standard_EXPORT const Handle(Triangle_Hole)&    Hole(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfHole&    Holes() const;
    Standard_EXPORT Standard_Integer                NbEdges() const;
    Standard_EXPORT Standard_Integer                NbElements() const;
    Standard_EXPORT Standard_Integer                NbHoles() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT Standard_Integer                NbRegions() const;
    Standard_EXPORT Standard_Integer                NbSegments() const;
    Standard_EXPORT const Handle(Triangle_Node)&    Node(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfNode&    Nodes() const;
    Standard_EXPORT const Handle(Triangle_Region)&  Region(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfRegion&  Regions() const;
    Standard_EXPORT void                            ResizeEdges(const Standard_Integer theNbEdges,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeElements(const Standard_Integer theNbElements,
                                                                   const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeHoles(const Standard_Integer theNbHoles,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeRegions(const Standard_Integer theNbRegions,
                                                                  const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeSegments(const Standard_Integer theNbSegments,
                                                                   const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT const Handle(Triangle_Segment)& Segment(const Standard_Integer theIndex) const;
    Standard_EXPORT const Triangle_Array1OfSegment& Segments() const;
    Standard_EXPORT void                            SetEdge(const Standard_Integer theIndex,
                                                            const Handle(Triangle_Edge)& theNole);
    Standard_EXPORT void                            SetElement(const Standard_Integer theIndex,
                                                               const Handle(Triangle_Element)& theNole);
    Standard_EXPORT void                            SetHole(const Standard_Integer theIndex,
                                                            const Handle(Triangle_Hole)& theNole);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Handle(Triangle_Node)& theNode);
    Standard_EXPORT void                            SetRegion(const Standard_Integer theIndex,
                                                              const Handle(Triangle_Region)& theRegion);
    Standard_EXPORT void                            SetSegment(const Standard_Integer theIndex,
                                                               const Handle(Triangle_Segment)& theSegment);

private:

    Triangle_Array1OfEdge       myEdges;
    Triangle_Array1OfElement    myElements;
    Triangle_Array1OfHole       myHoles;
    Triangle_Array1OfNode       myNodes;
    Triangle_Array1OfRegion     myRegions;
    Triangle_Array1OfSegment    mySegments;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_DataModel, Triangle_Object)

};


#endif // __Triangle_DataModel_hxx__
