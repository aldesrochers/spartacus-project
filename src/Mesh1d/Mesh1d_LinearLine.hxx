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


#ifndef __Mesh1d_LinearLine_hxx__
#define __Mesh1d_LinearLine_hxx__

// Spartacus
#include <Mesh1d_Cell.hxx>

// Forward declarations
class Mesh1d_LinearLine;

// Handles
DEFINE_STANDARD_HANDLE(Mesh1d_LinearLine, Mesh1d_Cell)


// ============================================================================
/*!
 *  \brief Mesh1d_LinearLine
*/
// ============================================================================
class Mesh1d_LinearLine : public Mesh1d_Cell
{

public:
    // constructors
    Standard_EXPORT Mesh1d_LinearLine(const Handle(Mesh1d_Vertex)& theVertex1,
                                      const Handle(Mesh1d_Vertex)& theVertex2);
    // destructors
    Standard_EXPORT ~Mesh1d_LinearLine();

public:

    DEFINE_STANDARD_RTTIEXT(Mesh1d_LinearLine, Mesh1d_Cell)

};


#endif // __Mesh1d_LinearLine_hxx__
