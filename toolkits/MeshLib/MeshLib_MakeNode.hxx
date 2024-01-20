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


#ifndef __MeshLib_MakeNode_hxx__
#define __MeshLib_MakeNode_hxx__

// Spartacus
#include <MeshDS_Node.hxx>
#include <MeshLib_MakeObject.hxx>
#include <mp_Point.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_MakeNode
*/
// ============================================================================
class MeshLib_MakeNode : public MeshLib_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    Standard_EXPORT MeshLib_MakeNode(const Standard_Real theX,
                                     const Standard_Real theY,
                                     const Standard_Real theZ);
    Standard_EXPORT MeshLib_MakeNode(const mp_Point& thePoint);
    // destructors
    Standard_EXPORT ~MeshLib_MakeNode();

public:

    Standard_EXPORT void    Initialize(const Standard_Real theX,
                                       const Standard_Real theY,
                                       const Standard_Real theZ);
    Standard_EXPORT void    Initialize(const mp_Point& thePoint);

public:

    Standard_EXPORT const MeshDS_Node&      Node();
    Standard_EXPORT operator                MeshDS_Node();

};


#endif // __MeshLib_MakeNode_hxx__
