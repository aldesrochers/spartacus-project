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


#ifndef __MeshDS_Builder_hxx__
#define __MeshDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <MeshDS_Cell.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshDS_Node.hxx>
#include <MeshDS_Object.hxx>
#include <MeshDS_TObject.hxx>
#include <mp_Point.hxx>
#include <mp_Point1d.hxx>
#include <mp_Point2d.hxx>


// ============================================================================
/*!
 *  \brief MeshDS_Builder
*/
// ============================================================================
class MeshDS_Builder
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshDS_Builder();
    // destructors
    Standard_EXPORT ~MeshDS_Builder();

public:

    Standard_EXPORT void    MakeMesh(MeshDS_Mesh& theMesh) const;

    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const mp_Point1d& thePoint) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const mp_Point2d& thePoint) const;
    Standard_EXPORT void    MakeNode(MeshDS_Node& theNode,
                                     const mp_Point& thePoint) const;

    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const mp_Point1d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const mp_Point2d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const MeshDS_Node& theNode,
                                       const mp_Point& thePoint) const;

protected:

    Standard_EXPORT void    MakeObject(MeshDS_Object& theObject,
                                       const Handle(MeshDS_TObject)& theTObject) const;

};


#endif // __MeshDS_Builder_hxx__
