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

// OpenCascade
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshAbs_TypeOfDimensionality.hxx>
#include <MeshDS_Node.hxx>
#include <MeshLib_MakeObject.hxx>


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
    // constructors
    Standard_EXPORT MeshLib_MakeNode(const gp_Pnt1d& thePoint);
    Standard_EXPORT MeshLib_MakeNode(const gp_Pnt2d& thePoint);
    Standard_EXPORT MeshLib_MakeNode(const gp_Pnt& thePoint);

    // destructors
    Standard_EXPORT ~MeshLib_MakeNode();

public:

    Standard_EXPORT void                    Initialize(const gp_Pnt1d& thePoint);
    Standard_EXPORT void                    Initialize(const gp_Pnt2d& thePoint);
    Standard_EXPORT void                    Initialize(const gp_Pnt& thePoint);

public:

    Standard_EXPORT const MeshDS_Node&      Node();
    Standard_EXPORT operator                MeshDS_Node();

};


#endif // __MeshLib_MakeNode_hxx__
