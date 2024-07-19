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


#ifndef __MeshAlgo_MakeMesh_hxx__
#define __MeshAlgo_MakeMesh_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Shape.hxx>

// ============================================================================
/*!
 *  \brief MeshAlgo_MakeMesh
*/
// ============================================================================
class MeshAlgo_MakeMesh
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT MeshAlgo_MakeMesh();
    // destructors
    Standard_EXPORT ~MeshAlgo_MakeMesh();

public:

    Standard_EXPORT void                Perform();
    Standard_EXPORT void                SetShape(const TopoDS_Shape& theShape);
    Standard_EXPORT const TopoDS_Shape& Shape() const;

private:

    TopoDS_Shape        myShape;

};

#endif // __MeshAlgo_MakeMesh_hxx__
