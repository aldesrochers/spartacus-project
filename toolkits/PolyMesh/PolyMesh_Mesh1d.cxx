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
#include <PolyMesh_Mesh1d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
PolyMesh_Mesh1d::PolyMesh_Mesh1d()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
PolyMesh_Mesh1d::~PolyMesh_Mesh1d()
{

}

// ============================================================================
/*!
 *  \brief LinearLine()
*/
// ============================================================================
const pmp_LinearLine& PolyMesh_Mesh1d::LinearLine(const Standard_Integer theIndex) const
{
    return myLinearLines.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief NbLinearLines()
*/
// ============================================================================
Standard_Integer PolyMesh_Mesh1d::NbLinearLines() const
{
    return myLinearLines.Size();
}

// ============================================================================
/*!
 *  \brief NbPoints()
*/
// ============================================================================
Standard_Integer PolyMesh_Mesh1d::NbPoints() const
{
    return myPoints.Size();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt1d& PolyMesh_Mesh1d::Point(const Standard_Integer theIndex) const
{
    return myPoints.Value(theIndex);
}

// ============================================================================
/*!
 *  \brief ResizeLinearLines()
*/
// ============================================================================
void PolyMesh_Mesh1d::ResizeLinearLines(const Standard_Integer theNbLinearLines,
                                        const Standard_Boolean toCopyData)
{
    myLinearLines.Resize(1, theNbLinearLines, toCopyData);
}

// ============================================================================
/*!
 *  \brief ResizePoints()
*/
// ============================================================================
void PolyMesh_Mesh1d::ResizePoints(const Standard_Integer theNbPoints,
                                   const Standard_Boolean toCopyData)
{
    myPoints.Resize(1, theNbPoints, toCopyData);
}

// ============================================================================
/*!
 *  \brief SetLinearLine()
*/
// ============================================================================
void PolyMesh_Mesh1d::SetLinearLine(const Standard_Integer theIndex,
                                    const pmp_LinearLine &theLinearLine)
{
    myLinearLines.SetValue(theIndex, theLinearLine);
}

// ============================================================================
/*!
 *  \brief SetPoint()
*/
// ============================================================================
void PolyMesh_Mesh1d::SetPoint(const Standard_Integer theIndex,
                               const gp_Pnt1d &thePoint)
{
    myPoints.SetValue(theIndex, thePoint);
}

// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(PolyMesh_Mesh1d, Standard_Transient)
IMPLEMENT_STANDARD_RTTIEXT(PolyMesh_Mesh1d, Standard_Transient)
