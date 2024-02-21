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


#ifndef __Mech2d_Truss_hxx__
#define __Mech2d_Truss_hxx__

// Spartacus
#include <Mech2d_Element.hxx>
#include <Mesh2d_LinearLine.hxx>
#include <Trsf2d_Truss.hxx>

// Forward declarations
class Mech2d_Truss;

// Handles
DEFINE_STANDARD_HANDLE(Mech2d_Truss, Mech2d_Element)


// ============================================================================
/*!
 *  \brief Mech2d_Truss
*/
// ============================================================================
class Mech2d_Truss : public Mech2d_Element
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mech2d_Truss();
    // destructors
    Standard_EXPORT ~Mech2d_Truss();

public:

    Standard_EXPORT const Handle(Mesh2d_LinearLine)&    Cell() const;
    Standard_EXPORT void                                SetCell(const Handle(Mesh2d_LinearLine)& theCell);
    Standard_EXPORT void                                SetTransformation(const Handle(Trsf2d_Truss)& theTransformation);
    Standard_EXPORT const Handle(Trsf2d_Truss)&         Transformation() const;

protected:

    Handle(Mesh2d_LinearLine)   myCell;
    Handle(Trsf2d_Truss)        myTransformation;

public:

    DEFINE_STANDARD_RTTIEXT(Mech2d_Truss, Mech2d_Element);

};


#endif // __Mech2d_Truss_hxx__
