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
#include <Triangle_Mesh.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Mesh::Triangle_Mesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Mesh::~Triangle_Mesh()
{

}

// ============================================================================
/*!
 *  \brief ChangeEdges()
*/
// ============================================================================
Triangle_Array1OfEdge& Triangle_Mesh::ChangeEdges()
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief ChangeElements()
*/
// ============================================================================
Triangle_Array1OfElement& Triangle_Mesh::ChangeElements()
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief ChangeNodes()
*/
// ============================================================================
Triangle_Array1OfNode& Triangle_Mesh::ChangeNodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const Handle(Triangle_Edge)& Triangle_Mesh::Edge(const Standard_Integer theIndex) const
{
    return myEdges.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Edges()
*/
// ============================================================================
const Triangle_Array1OfEdge& Triangle_Mesh::Edges() const
{
    return myEdges;
}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const Handle(Triangle_Element)& Triangle_Mesh::Element(const Standard_Integer theIndex) const
{
    return myElements.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Elements()
*/
// ============================================================================
const Triangle_Array1OfElement& Triangle_Mesh::Elements() const
{
    return myElements;
}

// ============================================================================
/*!
 *  \brief NbEdges()
*/
// ============================================================================
Standard_Integer Triangle_Mesh::NbEdges() const
{
    return myEdges.Size();
}

// ============================================================================
/*!
 *  \brief NbElements()
*/
// ============================================================================
Standard_Integer Triangle_Mesh::NbElements() const
{
    return myElements.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Triangle_Mesh::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const Handle(Triangle_Node)& Triangle_Mesh::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const Triangle_Array1OfNode& Triangle_Mesh::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeEdges()
*/
// ============================================================================
void Triangle_Mesh::ResizeEdges(const Standard_Integer theNbEdges,
                                const Standard_Boolean toCopyData)
{
    myEdges.Resize(1, theNbEdges, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeElements()
*/
// ============================================================================
void Triangle_Mesh::ResizeElements(const Standard_Integer theNbElements,
                                   const Standard_Boolean toCopyData)
{
    myElements.Resize(1, theNbElements, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Triangle_Mesh::ResizeNodes(const Standard_Integer theNbNodes,
                                const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetEdge()
*/
// ============================================================================
void Triangle_Mesh::SetEdge(const Standard_Integer theIndex,
                            const Handle(Triangle_Edge) &theEdge)
{
    myEdges.SetValue(theIndex, theEdge);
}

// ============================================================================
/*!
 *  \brief SetElement()
*/
// ============================================================================
void Triangle_Mesh::SetElement(const Standard_Integer theIndex,
                               const Handle(Triangle_Element) &theElement)
{
    myElements.SetValue(theIndex, theElement);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Triangle_Mesh::SetNode(const Standard_Integer theIndex,
                             const Handle(Triangle_Node) &theNode)
{
    myNodes.SetValue(theIndex, theNode);
}




// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Triangle_Mesh, Triangle_Object)
IMPLEMENT_STANDARD_RTTIEXT(Triangle_Mesh, Triangle_Object)

