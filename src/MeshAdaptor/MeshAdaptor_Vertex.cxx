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
#include <MeshAdaptor_Vertex.hxx>
#include <Mesh_Point1d.hxx>
#include <Mesh_Point2d.hxx>
#include <Mesh_Point3d.hxx>
#include <MeshDS_Tool.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeVertex.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshAdaptor_Vertex::MeshAdaptor_Vertex()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshAdaptor_Vertex::MeshAdaptor_Vertex(const MeshDS_Vertex& theVertex)
{
    Initialize(theVertex);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshAdaptor_Vertex::~MeshAdaptor_Vertex()
{

}

// ============================================================================
/*!
 *  \brief Dimensionality()
*/
// ============================================================================
MeshAbs_TypeOfDimensionality MeshAdaptor_Vertex::Dimensionality() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    Handle(Standard_Type) aType = aPoint->DynamicType();
    if(aType == STANDARD_TYPE(Mesh_Point1d)) {
        return MeshAbs_DIM_1d;
    } else if(aType == STANDARD_TYPE(Mesh_Point2d)) {
        return MeshAbs_DIM_2d;
    } else if(aType == STANDARD_TYPE(Mesh_Point3d)) {
        return MeshAbs_DIM_3d;
    } else {
        return MeshAbs_DIM_0d;
    }
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshAdaptor_Vertex::Initialize(const MeshDS_Vertex &theVertex)
{
    myVertex = theVertex;
}

// ============================================================================
/*!
 *  \brief IsPoint1d()
*/
// ============================================================================
Standard_Boolean MeshAdaptor_Vertex::IsPoint1d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    return aPoint->IsPoint1d();
}

// ============================================================================
/*!
 *  \brief IsPoint2d()
*/
// ============================================================================
Standard_Boolean MeshAdaptor_Vertex::IsPoint2d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    return aPoint->IsPoint2d();
}

// ============================================================================
/*!
 *  \brief IsPoint3d()
*/
// ============================================================================
Standard_Boolean MeshAdaptor_Vertex::IsPoint3d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    return aPoint->IsPoint3d();
}

// ============================================================================
/*!
 *  \brief Point1d()
*/
// ============================================================================
const gp_Pnt1d& MeshAdaptor_Vertex::Point1d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    if(aPoint->IsPoint1d()) {
        const Handle(Mesh_Point1d)& aPoint1d  = Handle(Mesh_Point1d)::DownCast(aPoint);
        return aPoint1d->Point1d();
    }
    throw Standard_DomainError("MeshAdaptor_Vertex::Point1d()");
}

// ============================================================================
/*!
 *  \brief Point2d()
*/
// ============================================================================
const gp_Pnt2d& MeshAdaptor_Vertex::Point2d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    if(aPoint->IsPoint2d()) {
        const Handle(Mesh_Point2d)& aPoint2d  = Handle(Mesh_Point2d)::DownCast(aPoint);
        return aPoint2d->Point2d();
    }
    throw Standard_DomainError("MeshAdaptor_Vertex::Point2d()");
}

// ============================================================================
/*!
 *  \brief Point3d()
*/
// ============================================================================
const gp_Pnt& MeshAdaptor_Vertex::Point3d() const
{
    const Handle(Mesh_Point)& aPoint = MeshDS_Tool::Point(myVertex);
    if(aPoint->IsPoint3d()) {
        const Handle(Mesh_Point3d)& aPoint3d  = Handle(Mesh_Point3d)::DownCast(aPoint);
        return aPoint3d->Point3d();
    }
    throw Standard_DomainError("MeshAdaptor_Vertex::Point3d()");
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const MeshDS_Vertex& MeshAdaptor_Vertex::Vertex() const
{
    return myVertex;
}
