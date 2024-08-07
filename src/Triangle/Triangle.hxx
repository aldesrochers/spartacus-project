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


#ifndef __Triangle_hxx__
#define __Triangle_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Triangle_MeshIO.hxx>

// Triangle
#ifndef __triangle_h__
#define __triangle_h__
    #include <triangle.h>
#endif  // __triangle_h__


// ============================================================================
/*!
 *  \brief Triangle
*/
// ============================================================================
class Triangle
{

public:

    DEFINE_STANDARD_ALLOC

public:

    static Standard_EXPORT Handle(Triangle_MeshIO)  MeshIO(const triangulateio& aTriangleIO);
    static Standard_EXPORT triangulateio            TriangleIO(const Handle(Triangle_MeshIO)& theMeshIO);


};


#endif // __Triangle_hxx__
