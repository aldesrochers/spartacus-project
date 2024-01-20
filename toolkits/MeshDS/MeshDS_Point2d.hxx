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


#ifndef __MeshDS_Point2d_hxx__
#define __MeshDS_Point2d_hxx__

// Spartacus
#include <MeshDS_PointRepresentation.hxx>
#include <mp_Point2d.hxx>

// Forward declarations
class MeshDS_Point2d;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_Point2d, MeshDS_PointRepresentation);


// ============================================================================
/*!
 *  \brief MeshDS_Point2d
*/
// ============================================================================
class MeshDS_Point2d : public MeshDS_PointRepresentation
{

public:
    // constructors
    Standard_EXPORT MeshDS_Point2d();
    Standard_EXPORT MeshDS_Point2d(const mp_Point2d& thePoint);
    // destructors
    Standard_EXPORT ~MeshDS_Point2d();

public:

    Standard_EXPORT MeshAbs_TypeOfDimensionality    Dimensionality() const Standard_OVERRIDE;

private:

    mp_Point2d      myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_Point2d, MeshDS_PointRepresentation);

};


#endif // __MeshDS_Point2d_hxx__
