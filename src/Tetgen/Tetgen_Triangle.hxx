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


#ifndef __Tetgen_Triangle_hxx__
#define __Tetgen_Triangle_hxx__

// Spartacus
#include <Tetgen_Object.hxx>

// Forward declarations
class Tetgen_Triangle;

// Handles
DEFINE_STANDARD_HANDLE(Tetgen_Triangle, Tetgen_Object)



// ============================================================================
/*!
 *  \brief Tetgen_Triangle
*/
// ============================================================================
class Tetgen_Triangle : public Tetgen_Object
{

public:
    // constructors
    Standard_EXPORT Tetgen_Triangle();
    // destructors
    Standard_EXPORT ~Tetgen_Triangle();

public:

    DEFINE_STANDARD_RTTIEXT(Tetgen_Triangle, Tetgen_Object)

};


#endif // __Tetgen_Triangle_hxx__
