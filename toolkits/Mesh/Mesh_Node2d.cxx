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
#include <Mesh_Node2d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node2d::Mesh_Node2d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node2d::Mesh_Node2d(const gp_Pnt2d &thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Mesh_Node2d::Mesh_Node2d(const Standard_Real theX,
                         const Standard_Real theY)
{
    myPoint.SetX(theX);
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Mesh_Node2d::~Mesh_Node2d()
{

}

// ============================================================================
/*!
 *  \brief Distance()
*/
// ============================================================================
Standard_Real Mesh_Node2d::Distance(const Mesh_Node2d &theNode) const
{
    return myPoint.Distance(theNode.Point());
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt2d& Mesh_Node2d::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void Mesh_Node2d::SetPoint(const gp_Pnt2d &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void Mesh_Node2d::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void Mesh_Node2d::SetY(const Standard_Real theY)
{
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief Type()
*/
// ============================================================================
MeshAbs_TypeOfNode Mesh_Node2d::Type() const
{
    return MeshAbs_Node2d;
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real Mesh_Node2d::X() const
{
    return myPoint.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real Mesh_Node2d::Y() const
{
    return myPoint.Y();
}
