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


#ifndef __MeshLib_MakePolygon_hxx__
#define __MeshLib_MakePolygon_hxx__

// Spartacus
#include <MeshLib_MakeObject.hxx>
#include <MeshDS_Polygon.hxx>
#include <MeshDS_Vertex.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_MakePolygon
*/
// ============================================================================
class MeshLib_MakePolygon : public MeshLib_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshLib_MakePolygon();
    // destructors
    Standard_EXPORT ~MeshLib_MakePolygon();

public:

    Standard_EXPORT const MeshDS_Polygon&      Polygon();
    Standard_EXPORT operator                MeshDS_Polygon();

};


#endif // __MeshLib_MakePolygon_hxx__
