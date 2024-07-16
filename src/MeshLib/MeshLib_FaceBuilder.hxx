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


#ifndef __MeshLib_FaceBuilder_hxx__
#define __MeshLib_FaceBuilder_hxx__

// Spartacus
#include <MeshDS_Face.hxx>
#include <MeshDS_Vertex.hxx>
#include <MeshLib_FaceError.hxx>
#include <MeshTools_IndexedMapOfObject.hxx>

// OpenCascade
#include <Geom2d_Line.hxx>
#include <gp_Lin2d.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_FaceBuilder
*/
// ============================================================================
class MeshLib_FaceBuilder
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshLib_FaceBuilder(const MeshDS_Vertex& theVertex1,
                                        const MeshDS_Vertex& theVertex2,
                                        const MeshDS_Vertex& theVertex3);
    // destructors
    Standard_EXPORT ~MeshLib_FaceBuilder();

public:

    Standard_EXPORT const MeshDS_Face&      Face();
    Standard_EXPORT operator                MeshDS_Face();

public:

    Standard_EXPORT MeshLib_FaceError       Error() const;

public:

    Standard_EXPORT void            Initialize(const MeshDS_Vertex& theVertex1,
                                               const MeshDS_Vertex& theVertex2,
                                               const MeshDS_Vertex& theVertex3);
    Standard_EXPORT void            Initialize(const gp_Lin2d& theLine,
                                               const MeshDS_Vertex& theVertex1,
                                               const MeshDS_Vertex& theVertex2);
    Standard_EXPORT void            Initialize(const Handle(Geom2d_Line)& theLine,
                                               const MeshDS_Vertex& theVertex1,
                                               const MeshDS_Vertex& theVertex2);

protected:

    MeshDS_Face                     myFace;
    MeshLib_FaceError               myError;
    MeshTools_IndexedMapOfObject    myVertices;

};


#endif // __MeshLib_FaceBuilder_hxx__
