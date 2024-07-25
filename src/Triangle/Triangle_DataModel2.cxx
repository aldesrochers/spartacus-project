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
#include <Triangle_DataModel.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_DataModel::Triangle_DataModel()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_DataModel::~Triangle_DataModel()
{

}

// ============================================================================
/*!
 *  \brief ChangeEdges()
*/
// ============================================================================
Triangle_Array1OfEdge& Triangle_DataModel::ChangeEdges()
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief ChangeElements()
*/
// ============================================================================
Triangle_Array1OfElement& Triangle_DataModel::ChangeElements()
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief ChangeHoles()
*/
// ============================================================================
Triangle_Array1OfHole& Triangle_DataModel::ChangeHoles()
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief ChangeNodes()
*/
// ============================================================================
Triangle_Array1OfNode& Triangle_DataModel::ChangeNodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ChangeRegions()
*/
// ============================================================================
Triangle_Array1OfRegion& Triangle_DataModel::ChangeRegions()
{
    return myRegions;
}

// ============================================================================
/*!
 *  \brief ChangeSegments()
*/
// ============================================================================
Triangle_Array1OfSegment& Triangle_DataModel::ChangeSegments()
{
    return mySegments;
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const Handle(Triangle_Edge)& Triangle_DataModel::Edge(const Standard_Integer theIndex) const
{
    return myEdges.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Edges()
*/
// ============================================================================
const Triangle_Array1OfEdge& Triangle_DataModel::Edges() const
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const Handle(Triangle_Element)& Triangle_DataModel::Element(const Standard_Integer theIndex) const
{
    return myElements.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
const Triangle_Array1OfElement& Triangle_DataModel::Elements() const
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief Hole()
*/
// ============================================================================
const Handle(Triangle_Hole)& Triangle_DataModel::Hole(const Standard_Integer theIndex) const
{
    return myHoles.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Holes()
*/
// ============================================================================
const Triangle_Array1OfHole& Triangle_DataModel::Holes() const
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief NbHoles()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbHoles() const
{
    return myHoles.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbRegions()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbRegions() const
{
    return myRegions.Size();
}

// ============================================================================
/*!
 *  \brief NbSegments()
*/
// ============================================================================
Standard_Integer Triangle_DataModel::NbSegments() const
{
    return mySegments.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Triangle_Node)& Triangle_DataModel::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Triangle_Array1OfNode& Triangle_DataModel::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Region()
*/
// ============================================================================
const Handle(Triangle_Region)& Triangle_DataModel::Region(const Standard_Integer theIndex) const
{
    return myRegions.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Regions()
*/
// ============================================================================
const Triangle_Array1OfRegion& Triangle_DataModel::Regions() const
{
    return myRegions;
}

// ============================================================================
/*!
 *  \brief ResizeEdges()
*/
// ============================================================================
void Triangle_DataModel::ResizeEdges(const Standard_Integer theNbEdges,
                                     const Standard_Boolean toCopyData)
{
    myEdges.Resize(1, theNbEdges, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeElements()
*/
// ============================================================================
void Triangle_DataModel::ResizeElements(const Standard_Integer theNbElements,
                                        const Standard_Boolean toCopyData)
{
    myElements.Resize(1, theNbElements, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeHoles()
*/
// ============================================================================
void Triangle_DataModel::ResizeHoles(const Standard_Integer theNbHoles,
                                 const Standard_Boolean toCopyData)
{
    myHoles.Resize(1, theNbHoles, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Triangle_DataModel::ResizeNodes(const Standard_Integer theNbNodes,
                                 const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeRegions()
*/
// ============================================================================
void Triangle_DataModel::ResizeRegions(const Standard_Integer theNbRegions,
                                   const Standard_Boolean toCopyData)
{
    myRegions.Resize(1, theNbRegions, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeSegments()
*/
// ============================================================================
void Triangle_DataModel::ResizeSegments(const Standard_Integer theNbSegments,
                                    const Standard_Boolean toCopyData)
{
    mySegments.Resize(1, theNbSegments, toCopyData);
}

// ============================================================================
/*!
 *  \brief Segment()
*/
// ============================================================================
const Handle(Triangle_Segment)& Triangle_DataModel::Segment(const Standard_Integer theIndex) const
{
    return mySegments.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Segments()
*/
// ============================================================================
const Triangle_Array1OfSegment& Triangle_DataModel::Segments() const
{
    return mySegments;
}

// ============================================================================
/*!
 *  \brief SetEdge()
*/
// ============================================================================
void Triangle_DataModel::SetEdge(const Standard_Integer theIndex,
                                 const Handle(Triangle_Edge) &theEdge)
{
    myEdges.SetValue(theIndex, theEdge);
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void Triangle_DataModel::SetElement(const Standard_Integer theIndex,
                                    const Handle(Triangle_Element) &theElement)
{
    myElements.SetValue(theIndex, theElement);
}

// ============================================================================
/*!
 *  \brief SetHole()
*/
// ============================================================================
void Triangle_DataModel::SetHole(const Standard_Integer theIndex,
                             const Handle(Triangle_Hole) &theHole)
{
    myHoles.SetValue(theIndex, theHole);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Triangle_DataModel::SetNode(const Standard_Integer theIndex,
                             const Handle(Triangle_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetRegion()
*/
// ============================================================================
void Triangle_DataModel::SetRegion(const Standard_Integer theIndex,
                               const Handle(Triangle_Region) &theRegion)
{
    myRegions.SetValue(theIndex, theRegion);
}

// ============================================================================
/*!
 *  \brief SetSegment()
*/
// ============================================================================
void Triangle_DataModel::SetSegment(const Standard_Integer theIndex,
                                const Handle(Triangle_Segment) &theSegment)
{
    mySegments.SetValue(theIndex, theSegment);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_DataModel, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_DataModel, Triangle_Object)

