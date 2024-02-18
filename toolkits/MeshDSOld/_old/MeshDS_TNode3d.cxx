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
#include <MeshDS_TNode3d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TNode3d::MeshDS_TNode3d()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TNode3d::MeshDS_TNode3d(const gp_Pnt& thePoint)
    : myPoint(thePoint)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TNode3d::~MeshDS_TNode3d()
{

}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt& MeshDS_TNode3d::Point() const
{
    return myPoint;
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void MeshDS_TNode3d::SetPoint(const gp_Pnt &thePoint)
{
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief SetX()
*/
// ============================================================================
void MeshDS_TNode3d::SetX(const Standard_Real theX)
{
    myPoint.SetX(theX);
}

// ============================================================================
/*!
 *  \brief SetY()
*/
// ============================================================================
void MeshDS_TNode3d::SetY(const Standard_Real theY)
{
    myPoint.SetY(theY);
}

// ============================================================================
/*!
 *  \brief SetZ()
*/
// ============================================================================
void MeshDS_TNode3d::SetZ(const Standard_Real theZ)
{
    myPoint.SetZ(theZ);
}

// ============================================================================
/*!
 *  \brief X()
*/
// ============================================================================
Standard_Real MeshDS_TNode3d::X() const
{
    return myPoint.X();
}

// ============================================================================
/*!
 *  \brief Y()
*/
// ============================================================================
Standard_Real MeshDS_TNode3d::Y() const
{
    return myPoint.Y();
}

// ============================================================================
/*!
 *  \brief Z()
*/
// ============================================================================
Standard_Real MeshDS_TNode3d::Z() const
{
    return myPoint.Z();
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TNode3d, MeshDS_TNode);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TNode3d, MeshDS_TNode);
