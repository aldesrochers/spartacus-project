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
#include <Triangle_Model.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Model::Triangle_Model()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Model::~Triangle_Model()
{

}

// ============================================================================
/*!
 *  \brief ChangeHoles()
*/
// ============================================================================
Triangle_Array1OfHole& Triangle_Model::ChangeHoles()
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief ChangeNodes()
*/
// ============================================================================
Triangle_Array1OfNode& Triangle_Model::ChangeNodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ChangeRegions()
*/
// ============================================================================
Triangle_Array1OfRegion& Triangle_Model::ChangeRegions()
{
    return myRegions;
}

// ============================================================================
/*!
 *  \brief ChangeSegments()
*/
// ============================================================================
Triangle_Array1OfSegment& Triangle_Model::ChangeSegments()
{
    return mySegments;
}

// ============================================================================
/*!
 *  \brief Hole()
*/
// ============================================================================
const Handle(Triangle_Hole)& Triangle_Model::Hole(const Standard_Integer theIndex) const
{
    return myHoles.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Holes()
*/
// ============================================================================
const Triangle_Array1OfHole& Triangle_Model::Holes() const
{
    return myHoles;
}

// ============================================================================
/*!
 *  \brief NbHoles()
*/
// ============================================================================
Standard_Integer Triangle_Model::NbHoles() const
{
    return myHoles.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Triangle_Model::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbRegions()
*/
// ============================================================================
Standard_Integer Triangle_Model::NbRegions() const
{
    return myRegions.Size();
}

// ============================================================================
/*!
 *  \brief NbSegments()
*/
// ============================================================================
Standard_Integer Triangle_Model::NbSegments() const
{
    return mySegments.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Triangle_Node)& Triangle_Model::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Triangle_Array1OfNode& Triangle_Model::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Region()
*/
// ============================================================================
const Handle(Triangle_Region)& Triangle_Model::Region(const Standard_Integer theIndex) const
{
    return myRegions.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Regions()
*/
// ============================================================================
const Triangle_Array1OfRegion& Triangle_Model::Regions() const
{
    return myRegions;
}

// ============================================================================
/*!
 *  \brief ResizeHoles()
*/
// ============================================================================
void Triangle_Model::ResizeHoles(const Standard_Integer theNbHoles,
                                 const Standard_Boolean toCopyData)
{
    myHoles.Resize(1, theNbHoles, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Triangle_Model::ResizeNodes(const Standard_Integer theNbNodes,
                                 const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeRegions()
*/
// ============================================================================
void Triangle_Model::ResizeRegions(const Standard_Integer theNbRegions,
                                   const Standard_Boolean toCopyData)
{
    myRegions.Resize(1, theNbRegions, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeSegments()
*/
// ============================================================================
void Triangle_Model::ResizeSegments(const Standard_Integer theNbSegments,
                                    const Standard_Boolean toCopyData)
{
    mySegments.Resize(1, theNbSegments, toCopyData);
}

// ============================================================================
/*!
 *  \brief Segment()
*/
// ============================================================================
const Handle(Triangle_Segment)& Triangle_Model::Segment(const Standard_Integer theIndex) const
{
    return mySegments.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Segments()
*/
// ============================================================================
const Triangle_Array1OfSegment& Triangle_Model::Segments() const
{
    return mySegments;
}

// ============================================================================
/*!
 *  \brief SetHole()
*/
// ============================================================================
void Triangle_Model::SetHole(const Standard_Integer theIndex,
                             const Handle(Triangle_Hole) &theHole)
{
    myHoles.SetValue(theIndex, theHole);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Triangle_Model::SetNode(const Standard_Integer theIndex,
                             const Handle(Triangle_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetRegion()
*/
// ============================================================================
void Triangle_Model::SetRegion(const Standard_Integer theIndex,
                               const Handle(Triangle_Region) &theRegion)
{
    myRegions.SetValue(theIndex, theRegion);
}

// ============================================================================
/*!
 *  \brief SetSegment()
*/
// ============================================================================
void Triangle_Model::SetSegment(const Standard_Integer theIndex,
                                const Handle(Triangle_Segment) &theSegment)
{
    mySegments.SetValue(theIndex, theSegment);
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Model, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Model, Triangle_Object)

