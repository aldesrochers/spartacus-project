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


#ifndef __MeshLib_MakeLine2d_hxx__
#define __MeshLib_MakeLine2d_hxx__

// Spartacus
#include <MeshLib_MakeObject.hxx>
#include <MeshDS_Edge.hxx>
#include <MeshDS_Vertex.hxx>

// OpenCascade
#include <gp_Pnt2d.hxx>

// ============================================================================
/*!
 *  \brief MeshLib_MakeLine2d
*/
// ============================================================================
class MeshLib_MakeLine2d : public MeshLib_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshLib_MakeLine2d(const MeshDS_Vertex& theVertex1,
                                       const MeshDS_Vertex& theVertex2);
    // destructors
    Standard_EXPORT ~MeshLib_MakeLine2d();

public:

    Standard_EXPORT const MeshDS_Edge&      Edge();
    Standard_EXPORT operator                MeshDS_Edge();

};


#endif // __MeshLib_MakeLine2d_hxx__
