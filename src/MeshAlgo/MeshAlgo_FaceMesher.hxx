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


#ifndef __MeshAlgo_FaceMesher_hxx__
#define __MeshAlgo_FaceMesher_hxx__

// Spartacus
#include <MeshAlgo_Mesher.hxx>

// OpenCascade
#include <TopoDS_Face.hxx>


// ============================================================================
/*!
 *  \brief MeshAlgo_FaceMesher
*/
// ============================================================================
class MeshAlgo_FaceMesher : public MeshAlgo_Mesher
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshAlgo_FaceMesher();
    // destructors
    Standard_EXPORT ~MeshAlgo_FaceMesher();

public:

    Standard_EXPORT const TopoDS_Face&  Face() const;
    Standard_EXPORT void                SetFace(const TopoDS_Face& theFace);

protected:

    TopoDS_Face     myFace;

};

#endif // __MeshAlgo_FaceMesher_hxx__
