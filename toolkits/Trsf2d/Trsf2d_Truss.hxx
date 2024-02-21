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


#ifndef __Trsf2d_Truss_hxx__
#define __Trsf2d_Truss_hxx__

// Spartacus
#include <Mesh2d_LinearLine.hxx>
#include <Trsf2d_Transformation.hxx>

// Forward declarations
class Trsf2d_Truss;

// Handles
DEFINE_STANDARD_HANDLE(Trsf2d_Truss, Trsf2d_Transformation)


// ============================================================================
/*!
 *  \brief Trsf2d_Truss
*/
// ============================================================================
class Trsf2d_Truss : public Trsf2d_Transformation
{

public:
    // constructors
    Standard_EXPORT Trsf2d_Truss();
    Standard_EXPORT Trsf2d_Truss(const Handle(Mesh2d_LinearLine)& theCell);
    // destructors
    Standard_EXPORT ~Trsf2d_Truss();

public:

    Standard_EXPORT const Handle(Mesh2d_LinearLine)&    Cell() const;
    Standard_EXPORT void                                SetCell(const Handle(Mesh2d_LinearLine)& theCell);

protected:

    Handle(Mesh2d_LinearLine)   myCell;

public:

    DEFINE_STANDARD_RTTIEXT(Trsf2d_Truss, Trsf2d_Transformation)

};


#endif // __Trsf2d_Truss_hxx__
