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
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshLib_MakeNode2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode2d::MeshLib_MakeNode2d(const Standard_Real theX,
                                       const Standard_Real theY)
{
    Initialize(theX, theY);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode2d::MeshLib_MakeNode2d(const gp_Pnt2d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeNode2d::MeshLib_MakeNode2d(const Handle(Mesh2d_Node)& theNode2d)
{
    Initialize(theNode2d);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeNode2d::~MeshLib_MakeNode2d()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void MeshLib_MakeNode2d::Build()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode2d::Initialize(const Standard_Real theX,
                                    const Standard_Real theY)
{
    gp_Pnt2d aPoint(theX, theY);
    Initialize(aPoint);
}


// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode2d::Initialize(const gp_Pnt2d &thePoint)
{
    Handle(Mesh2d_Node) aNode = new Mesh2d_Node(thePoint);
    Initialize(aNode);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeNode2d::Initialize(const Handle(Mesh2d_Node)& theNode2d)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeNode(MeshDS::Node(myObject), theNode2d);
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const MeshDS_Node&  MeshLib_MakeNode2d::Node()
{
    return MeshDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Node()
*/
// ============================================================================
MeshLib_MakeNode2d::operator MeshDS_Node()
{
    return Node();
}

