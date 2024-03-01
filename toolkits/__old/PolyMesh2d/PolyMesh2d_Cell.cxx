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
#include <PolyMesh2d_Cell.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Cell::PolyMesh2d_Cell()
    : myType(PolyMeshAbs_Invalid2d)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Cell::PolyMesh2d_Cell(const Standard_Integer theNbNodes,
                                 const PolyMeshAbs_TypeOfCell2d theType)
    : myType(theType)
{
    myNodes.Resize(1, theNbNodes, Standard_False);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh2d_Cell::PolyMesh2d_Cell(const TColStd_Array1OfInteger &theNodes,
                                 const PolyMeshAbs_TypeOfCell2d theType)
    : myNodes(theNodes), myType(theType)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
PolyMesh2d_Cell::~PolyMesh2d_Cell()
{

}

// ============================================================================
/*!
 *  \brief NbNodes()
*/
// ============================================================================
Standard_Integer PolyMesh2d_Cell::NbNodes() const
{
    return myNodes.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
Standard_Integer PolyMesh2d_Cell::Node(const Standard_Integer theIndex) const
{
    return myNodes.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeNodes()
*/
// ============================================================================
void PolyMesh2d_Cell::ResizeNodes(const Standard_Integer theNbNodes,
                                  const Standard_Boolean toCopyData)
{
    myNodes.Resize(1, theNbNodes, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetNode()
*/
// ============================================================================
void PolyMesh2d_Cell::SetNode(const Standard_Integer theIndex,
                              const Standard_Integer theNode)
{
    myNodes.SetValue(theIndex, theNode);
}

// ============================================================================
/*!
 *  \brief SetType()
*/
// ============================================================================
void PolyMesh2d_Cell::SetType(const PolyMeshAbs_TypeOfCell2d theType)
{
    myType = theType;
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
PolyMeshAbs_TypeOfCell2d PolyMesh2d_Cell::Type() const
{
    return myType;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh2d_Cell, PolyMesh2d_Object)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh2d_Cell, PolyMesh2d_Object)
