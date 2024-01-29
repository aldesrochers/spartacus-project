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
#include <Mesh2d_Grid.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh2d_Grid::Mesh2d_Grid()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh2d_Grid::~Mesh2d_Grid()
{

}

// ============================================================================
/*!
 *  \brief GroupOfLinearLines2N()
*/
// ============================================================================
const mp_Group& Mesh2d_Grid::GroupOfLinearLines2N(const Standard_Integer theIndex) const
{
    return myGroupsOfLinearLines2N.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief GroupOfNodes()
*/
// ============================================================================
const mp_Group& Mesh2d_Grid::GroupOfNodes(const Standard_Integer theIndex) const
{
    return myGroupsOfNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief GroupOfQuadraticLines3N()
*/
// ============================================================================
const mp_Group& Mesh2d_Grid::GroupOfQuadraticLines3N(const Standard_Integer theIndex) const
{
    return myGroupsOfQuadraticLines3N.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief GroupsOfLinearLines2N()
*/
// ============================================================================
const TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfLinearLines2N() const
{
    return myGroupsOfLinearLines2N;
}

// ============================================================================
/*!
 *  \brief GroupsOfLinearLines2N()
*/
// ============================================================================
TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfLinearLines2N()
{
    return myGroupsOfLinearLines2N;
}

// ============================================================================
/*!
 *  \brief GroupsOfNodes()
*/
// ============================================================================
const TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfNodes() const
{
    return myGroupsOfNodes;
}

// ============================================================================
/*!
 *  \brief GroupsOfNodes()
*/
// ============================================================================
TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfNodes()
{
    return myGroupsOfNodes;
}

// ============================================================================
/*!
 *  \brief GroupsOfQuadraticLines3N()
*/
// ============================================================================
const TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfQuadraticLines3N() const
{
    return myGroupsOfQuadraticLines3N;
}

// ============================================================================
/*!
 *  \brief GroupsOfQuadraticLines3N()
*/
// ============================================================================
TColmp_Array1OfGroup& Mesh2d_Grid::GroupsOfQuadraticLines3N()
{
    return myGroupsOfQuadraticLines3N;
}

// ============================================================================
/*!
 *  \brief LinearLine2N()
*/
// ============================================================================
const mp_LinearLine2N& Mesh2d_Grid::LinearLine2N(const Standard_Integer theIndex) const
{
    return myLinearLines2N.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief LinearLines2N()
*/
// ============================================================================
const TColmp_Array1OfLinearLine2N& Mesh2d_Grid::LinearLines2N() const
{
    return myLinearLines2N;
}

// ============================================================================
/*!
 *  \brief LinearLines2N()
*/
// ============================================================================
TColmp_Array1OfLinearLine2N& Mesh2d_Grid::LinearLines2N()
{
    return myLinearLines2N;
}

// ============================================================================
/*!
 *  \brief NbGroupsOfLinearLines2N()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbGroupsOfLinearLines2N() const
{
    return myGroupsOfLinearLines2N.Size();
}

// ============================================================================
/*!
 *  \brief NbGroupsOfNodes()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbGroupsOfNodes() const
{
    return myGroupsOfNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbGroupsOfQuadraticLines3N()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbGroupsOfQuadraticLines3N() const
{
    return myGroupsOfQuadraticLines3N.Size();
}

// ============================================================================
/*!
 *  \brief NbLinearLines2N()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbLinearLines2N() const
{
    return myLinearLines2N.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbQuadraticLines3N()
*/
// ============================================================================
Standard_Integer Mesh2d_Grid::NbQuadraticLines3N() const
{
    return myQuadraticLines3N.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const mp_Node2d& Mesh2d_Grid::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
const TColmp_Array1OfNode2d& Mesh2d_Grid::Nodes() const
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief Nodes()
*/
// ============================================================================
TColmp_Array1OfNode2d& Mesh2d_Grid::Nodes()
{
    return myNodes;
}

// ============================================================================
/*!
 *  \brief ResizeGroupsOfLinearLines2N()
*/
// ============================================================================
void Mesh2d_Grid::ResizeGroupsOfLinearLines2N(const Standard_Integer theNbGroups,
                                              const Standard_Boolean toCopyData)
{
    myGroupsOfLinearLines2N.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroupsOfNodes()
*/
// ============================================================================
void Mesh2d_Grid::ResizeGroupsOfNodes(const Standard_Integer theNbGroups,
                                      const Standard_Boolean toCopyData)
{
    myGroupsOfNodes.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeGroupsOfQuadraticLines3N()
*/
// ============================================================================
void Mesh2d_Grid::ResizeGroupsOfQuadraticLines3N(const Standard_Integer theNbGroups,
                                                 const Standard_Boolean toCopyData)
{
    myGroupsOfQuadraticLines3N.Resize(1, theNbGroups, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeLinearLines2N()
*/
// ============================================================================
void Mesh2d_Grid::ResizeLinearLines2N(const Standard_Integer theNbLinearLines,
                                      const Standard_Boolean toCopyData)
{
    myLinearLines2N.Resize(1, theNbLinearLines, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void Mesh2d_Grid::ResizeNodes(const Standard_Integer theNbLinearLines,
                                      const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbLinearLines, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizeQuadraticLines3N()
*/
// ============================================================================
void Mesh2d_Grid::ResizeQuadraticLines3N(const Standard_Integer theNbLinearLines,
                                      const Standard_Boolean toCopyData)
{
    myQuadraticLines3N.Resize(1, theNbLinearLines, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetGroupOfLinearLines2N()
*/
// ============================================================================
void Mesh2d_Grid::SetGroupOfLinearLines2N(const Standard_Integer theIndex,
                                          const mp_Group& theGroup)
{
    myGroupsOfLinearLines2N.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetGroupOfNodes()
*/
// ============================================================================
void Mesh2d_Grid::SetGroupOfNodes(const Standard_Integer theIndex,
                                  const mp_Group& theGroup)
{
    myGroupsOfNodes.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetGroupOfQuadraticLines3N()
*/
// ============================================================================
void Mesh2d_Grid::SetGroupOfQuadraticLines3N(const Standard_Integer theIndex,
                                             const mp_Group& theGroup)
{
    myGroupsOfQuadraticLines3N.SetValue(theIndex, theGroup);
}

// ============================================================================
/*!
 *  \brief SetLinearLine2N()
*/
// ============================================================================
void Mesh2d_Grid::SetLinearLine2N(const Standard_Integer theIndex,
                                  const mp_LinearLine2N& theLinearLine2N)
{
    myLinearLines2N.SetValue(theIndex, theLinearLine2N);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void Mesh2d_Grid::SetNode(const Standard_Integer theIndex,
                          const mp_Node2d& theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetQuadraticLine3N()
*/
// ============================================================================
void Mesh2d_Grid::SetQuadraticLine3N(const Standard_Integer theIndex,
                                     const mp_QuadraticLine3N& theQuadraticLine3N)
{
    myQuadraticLines3N.SetValue(theIndex, theQuadraticLine3N);
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(Mesh2d_Grid, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(Mesh2d_Grid, Standard_Transient)
