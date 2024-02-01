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
#include <MeshDS_TNode2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TNode2d::MeshDS_TNode2d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TNode2d::~MeshDS_TNode2d()
{

}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
MeshAbs_TypeOfObject MeshDS_TNode2d::ObjectType() const
{
    return MeshAbs_OT_Node2d;
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& MeshDS_TNode2d::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void MeshDS_TNode2d::SetPoint(const gp_Pnt2d &thePoint)
{
    myPoint = thePoint;
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TNode2d, MeshDS_TNode);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TNode2d, MeshDS_TNode);
