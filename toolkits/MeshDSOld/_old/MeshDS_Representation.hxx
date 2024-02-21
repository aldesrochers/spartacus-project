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


#ifndef __MeshDS_Representation_hxx__
#define __MeshDS_Representation_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Forward declarations
class MeshDS_Representation;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_Representation, Standard_Transient);


// ============================================================================
/*!
 *  \brief MeshDS_Representation
*/
// ============================================================================
class MeshDS_Representation : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT MeshDS_Representation();
    // destructors
    Standard_EXPORT ~MeshDS_Representation();

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_Representation, Standard_Transient);

};


#endif // __MeshDS_Representation_hxx__