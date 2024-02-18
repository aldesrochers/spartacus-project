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


#ifndef __MeshDS_PointRepresentation_hxx__
#define __MeshDS_PointRepresentation_hxx__

// Spartacus
#include <MeshDS_Representation.hxx>

// OpenCascade
#include <gp_Pnt.hxx>
#include <gp_Pnt1d.hxx>
#include <gp_Pnt2d.hxx>

// Forward declarations
class MeshDS_PointRepresentation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_PointRepresentation, MeshDS_Representation);


// ============================================================================
/*!
 *  \brief MeshDS_PointRepresentation
*/
// ============================================================================
class MeshDS_PointRepresentation : public MeshDS_Representation
{

public:
    // constructors
    Standard_EXPORT MeshDS_PointRepresentation();
    // destructors
    Standard_EXPORT ~MeshDS_PointRepresentation();

public:

    virtual Standard_EXPORT Standard_Boolean    IsPoint1d() const;
    virtual Standard_EXPORT Standard_Boolean    IsPoint2d() const;
    virtual Standard_EXPORT Standard_Boolean    IsPoint3d() const;
    virtual const gp_Pnt1d&                     Point1d() const;
    virtual const gp_Pnt2d&                     Point2d() const;
    virtual const gp_Pnt&                       Point3d() const;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_PointRepresentation, MeshDS_Representation);

};


#endif // __MeshDS_PointRepresentation_hxx__
