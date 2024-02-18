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


#ifndef __Mesh_Grid_hxx__
#define __Mesh_Grid_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <TColgp_Array1OfPnt1d.hxx>


// Forward declarations
class Mesh_Grid;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Grid, Standard_Transient)


// ============================================================================
/*!
 *  \brief Mesh_Grid
*/
// ============================================================================
class Mesh_Grid : public Standard_Transient
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_Grid();
    // destructors
    Standard_EXPORT ~Mesh_Grid();

private:

    TColgp_Array1OfPnt1d        myPoints;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Grid, Standard_Transient);

};


#endif // __Mesh_Grid_hxx__
