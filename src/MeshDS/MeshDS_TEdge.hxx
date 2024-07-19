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


#ifndef __MeshDS_TEdge_hxx__
#define __MeshDS_TEdge_hxx__

// Spartacus
#include <MeshDS_Cell.hxx>
#include <MeshDS_TObject.hxx>

// OpenCascade
#include <TopoDS_Edge.hxx>

// Forward declarations
class MeshDS_TEdge;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TEdge, MeshDS_TObject)


// ============================================================================
/*!
 *  \brief MeshDS_TEdge
*/
// ============================================================================
class MeshDS_TEdge : public MeshDS_TObject
{

public:
    // constructors
    Standard_EXPORT MeshDS_TEdge();
    // destructors
    Standard_EXPORT ~MeshDS_TEdge();

public:

    Standard_EXPORT MeshAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const MeshDS_Cell&              Cell() const;
    Standard_EXPORT void                            SetCell(const MeshDS_Cell& theCell);

private:

    MeshDS_Cell                 myCell;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TEdge, MeshDS_TObject)

};


#endif // __MeshDS_TEdge_hxx__
