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
#include <MeshDS_Builder.hxx>
#include <MeshLib_MeshBuilder1d.hxx>
#include <mp_Node1d.hxx>
#include <mp_LinearLine2N.hxx>
#include <mp_QuadraticLine3N.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MeshBuilder1d::~MeshLib_MeshBuilder1d()
{

}

// ============================================================================
/*!
 *  \brief AddLinearLine2N()
*/
// ============================================================================
void MeshLib_MeshBuilder1d::AddLinearLine2N(const Standard_Integer theNode1,
                                            const Standard_Integer theNode2)
{
    mp_LinearLine2N aLine(theNode1, theNode2);
    myLinearLines2N.Append(aLine);
}

// ============================================================================
/*!
 *  \brief AddNode()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::AddNode(const gp_Pnt1d& thePoint)
{
    mp_Node1d aNode(thePoint);
    Standard_Integer aNodeId = FindNodeId();
    myNodes.Bind(aNodeId, aNode);
    return aNodeId;
}

// ============================================================================
/*!
 *  \brief AddQuadraticLine3N()
*/
// ============================================================================
void MeshLib_MeshBuilder1d::AddQuadraticLine3N(const Standard_Integer theNode1,
                                               const Standard_Integer theNode2,
                                               const Standard_Integer theNode3)
{
    mp_QuadraticLine3N aLine(theNode1, theNode2, theNode3);
    myQuadraticLines3N.Append(aLine);
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshLib_MeshBuilder1d::Build()
{

}

// ============================================================================
/*!
 *  \brief NbLinearLines2N()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbLinearLines2N() const
{
    return myLinearLines2N.Size();
}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief NbQuadraticLines3N()
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::NbQuadraticLines3N() const
{
    return myQuadraticLines3N.Size();
}

// ============================================================================
/*!
 *  \brief FindNodeId()
 *  Internal helper function used to find an unused node id.
*/
// ============================================================================
Standard_Integer MeshLib_MeshBuilder1d::FindNodeId() const
{
    Standard_Integer aNodeId = 1;
    while(myNodes.IsBound(aNodeId))
        aNodeId++;
    return aNodeId;
}
