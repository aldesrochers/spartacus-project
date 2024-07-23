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


#ifndef __Triangle_hxx__
#define __Triangle_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Poly_Triangulation.hxx>

// Spartacus
#include <Triangle_Model.hxx>
#include <Triangle_Parameters.hxx>

// ============================================================================
/*!
 *  \brief Triangle
*/
// ============================================================================
class Triangle
{

public:

    DEFINE_STANDARD_ALLOC

public:

    static Standard_EXPORT Standard_Boolean     MakeModel(const Handle(Poly_Triangulation)& theTriangulation,
                                                          Handle(Triangle_Model)& theModel);

    static Standard_EXPORT Standard_Boolean     MakeTriangulation(const Handle(Triangle_Model)& theModel,
                                                                  Handle(Poly_Triangulation)& theTriangulation);

    static Standard_EXPORT void                 Triangulate(const Triangle_Parameters& theParameters,
                                                            const Handle(Triangle_Model)& theInput,
                                                            Handle(Triangle_Model)& theOutput,
                                                            Handle(Triangle_Model)& theVeronoi);

    static Standard_EXPORT const TCollection_AsciiString&   Switches(const Triangle_Parameters& theParameters);

};


#endif // __Triangle_hxx__
