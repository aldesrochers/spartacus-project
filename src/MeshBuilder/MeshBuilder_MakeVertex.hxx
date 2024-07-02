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


#ifndef __MeshBuilder_MakeVertex_hxx__
#define __MeshBuilder_MakeVertex_hxx__

// Spartacus
#include <MeshBuilder_MakeObject.hxx>
#include <MeshDS_Vertex.hxx>
#include <gp_Pnt1d.hxx>

// OpenCascade
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <TColStd_SequenceOfReal.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeVertex
*/
// ============================================================================
class MeshBuilder_MakeVertex : public MeshBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeVertex(const gp_Pnt1d& thePoint);
    Standard_EXPORT MeshBuilder_MakeVertex(const gp_Pnt2d& thePoint);
    Standard_EXPORT MeshBuilder_MakeVertex(const gp_Pnt& thePoint);
    Standard_EXPORT MeshBuilder_MakeVertex(const Standard_Real theX);
    Standard_EXPORT MeshBuilder_MakeVertex(const Standard_Real theX,
                                           const Standard_Real theY);
    Standard_EXPORT MeshBuilder_MakeVertex(const Standard_Real theX,
                                           const Standard_Real theY,
                                           const Standard_Real theZ);

    // destructors
    Standard_EXPORT ~MeshBuilder_MakeVertex();

public:

    Standard_EXPORT const MeshDS_Vertex&    Vertex();
    Standard_EXPORT operator                MeshDS_Vertex();

public:

    Standard_EXPORT void        Initialize(const gp_Pnt1d& thePoint);
    Standard_EXPORT void        Initialize(const gp_Pnt2d& thePoint);
    Standard_EXPORT void        Initialize(const gp_Pnt& thePoint);
    Standard_EXPORT void        Initialize(const Standard_Real theX);
    Standard_EXPORT void        Initialize(const Standard_Real theX,
                                           const Standard_Real theY);
    Standard_EXPORT void        Initialize(const Standard_Real theX,
                                           const Standard_Real theY,
                                           const Standard_Real theZ);

};


#endif // __MeshBuilder_MakeVertex_hxx__
