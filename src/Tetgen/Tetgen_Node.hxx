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


#ifndef __Tetgen_Node_hxx__
#define __Tetgen_Node_hxx__

// Spartacus
#include <Tetgen_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>
#include <gp_Pnt.hxx>

// Forward declarations
class Tetgen_Node;

// Handles
DEFINE_STANDARD_HANDLE(Tetgen_Node, Tetgen_Object)



// ============================================================================
/*!
 *  \brief Tetgen_Node
*/
// ============================================================================
class Tetgen_Node : public Tetgen_Object
{

public:
    // constructors
    Standard_EXPORT Tetgen_Node();
    Standard_EXPORT Tetgen_Node(const gp_Pnt& thePoint);
    // destructors
    Standard_EXPORT ~Tetgen_Node();

public:

    Standard_EXPORT const TColStd_Array1OfInteger&  Attributes() const;
    Standard_EXPORT Standard_Integer                BoundaryMarker() const;
    Standard_EXPORT TColStd_Array1OfInteger&        ChangeAttributes();
    Standard_EXPORT gp_Pnt&                         ChangePoint();
    Standard_EXPORT Standard_Integer                NbAttributes() const;
    Standard_EXPORT const gp_Pnt&                   Point() const;
    Standard_EXPORT void                            SetBoundaryMarker(const Standard_Integer theBoundaryMarker);
    Standard_EXPORT void                            SetPoint(const gp_Pnt& thePoint);

private:

    TColStd_Array1OfInteger myAttributes;
    Standard_Integer        myBoundaryMarker;
    gp_Pnt                  myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Tetgen_Node, Tetgen_Object)

};


#endif // __Tetgen_Node_hxx__
