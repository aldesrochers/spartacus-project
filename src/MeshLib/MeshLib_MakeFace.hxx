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


#ifndef __MeshLib_MakeFace_hxx__
#define __MeshLib_MakeFace_hxx__

// Spartacus
#include <MeshLib_MakeObject.hxx>
#include <MeshDS_Face.hxx>
#include <MeshDS_Vertex.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_MakeFace
*/
// ============================================================================
class MeshLib_MakeFace : public MeshLib_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshLib_MakeFace();
    // destructors
    Standard_EXPORT ~MeshLib_MakeFace();

public:

    Standard_EXPORT const MeshDS_Face&      Face();
    Standard_EXPORT operator                MeshDS_Face();

};


#endif // __MeshLib_MakeFace_hxx__
