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


#ifndef __FEM_Model_hxx__
#define __FEM_Model_hxx__

// Spartacus
#include <FEM_Object.hxx>

// Forward declarations
class FEM_Model;

// Handles
DEFINE_STANDARD_HANDLE(FEM_Model, FEM_Object)


// ============================================================================
/*!
 *  \brief FEM_Model
*/
// ============================================================================
class FEM_Model : public FEM_Object
{

public:
    // constructors
    Standard_EXPORT FEM_Model();
    // destructors
    Standard_EXPORT ~FEM_Model();

public:

    DEFINE_STANDARD_RTTIEXT(FEM_Model, FEM_Object)

};


#endif // __FEM_Model_hxx__
