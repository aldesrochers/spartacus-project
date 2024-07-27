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


#ifndef __MeshData_Shell_hxx__
#define __MeshData_Shell_hxx__

// Spartacus
#include <MeshData_Shape.hxx>


// Forward declarations
class MeshData_Shell;

// Handles
DEFINE_STANDARD_HANDLE(MeshData_Shell, MeshData_Shape)


// ============================================================================
/*!
 *  \brief MeshData_Shell
*/
// ============================================================================
class MeshData_Shell : public MeshData_Shape
{

public:
    // constructors
    Standard_EXPORT MeshData_Shell();
    // destructors
    Standard_EXPORT ~MeshData_Shell();

public:

    DEFINE_STANDARD_RTTIEXT(MeshData_Shell, MeshData_Shape)

};


#endif // __MeshData_Shell_hxx__
