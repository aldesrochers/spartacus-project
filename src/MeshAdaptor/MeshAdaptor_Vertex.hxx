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


#ifndef __MeshAdaptor_Vertex_hxx__
#define __MeshAdaptor_Vertex_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshAbs_TypeOfDimensionality.hxx>
#include <MeshDS_Vertex.hxx>

// Forward declarations
class MeshAdaptor_Vertex;


// ============================================================================
/*!
 *  \brief MeshAdaptor_Vertex
*/
// ============================================================================
class MeshAdaptor_Vertex
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshAdaptor_Vertex();
    Standard_EXPORT MeshAdaptor_Vertex(const MeshDS_Vertex& theVertex);
    // destructors
    Standard_EXPORT ~MeshAdaptor_Vertex();

public:

    Standard_EXPORT MeshAbs_TypeOfDimensionality    Dimensionality() const;
    Standard_EXPORT void                            Initialize(const MeshDS_Vertex& theVertex);
    Standard_EXPORT const gp_Pnt1d&                 Point1d() const;
    Standard_EXPORT const gp_Pnt2d&                 Point2d() const;
    Standard_EXPORT const gp_Pnt&                   Point3d() const;
    Standard_EXPORT const TopoDS_Vertex&            Vertex() const;

private:

    MeshDS_Vertex       myVertex;

};


#endif // __MeshAdaptor_Vertex_hxx__
