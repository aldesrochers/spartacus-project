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


#ifndef __Triangle_MakeTriangulation_hxx__
#define __Triangle_MakeTriangulation_hxx__

// Spartacus
#include <Triangle_Command.hxx>

// OpenCascade
#include <Poly_Triangulation.hxx>
#include <TColgp_Array1OfPnt2d.hxx>


// ============================================================================
/*!
 *  \brief Triangle_MakeTriangulation
*/
// ============================================================================
class Triangle_MakeTriangulation : public Triangle_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Triangle_MakeTriangulation(const TColgp_Array1OfPnt2d& thePoints,
                                               const Standard_Real theMaxArea);
    // destructors
    Standard_EXPORT ~Triangle_MakeTriangulation();

public:

    Standard_EXPORT const Handle(Poly_Triangulation)&   Triangulation() const;

protected:

    Standard_EXPORT void            Initialize(const TColgp_Array1OfPnt2d& thePoints,
                                               const Standard_Real theMaxArea);

private:

    Handle(Poly_Triangulation)      myTriangulation;

};


#endif // __Triangle_MakeTriangulation_hxx__
