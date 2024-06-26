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


#ifndef __TColMesh1d_DataMapOfIntegerNode_hxx__
#define __TColMesh1d_DataMapOfIntegerNode_hxx__

// OpenCascade
#include <NCollection_DataMap.hxx>
#include <TColStd_MapIntegerHasher.hxx>

// Spartacus
#include <Mesh1d_Node.hxx>

// Type definitions
typedef NCollection_DataMap<Standard_Integer, Handle(Mesh1d_Node), TColStd_MapIntegerHasher>            TColMesh1d_DataMapOfIntegerNode;
typedef NCollection_DataMap<Standard_Integer, Handle(Mesh1d_Node), TColStd_MapIntegerHasher>::Iterator  TColMesh1d_DataMapIteratorOfDataMapOfIntegerNode;

#endif  // __TColMesh1d_DataMapOfIntegerNode_hxx__
