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


#ifndef __Triangle_Node_hxx__
#define __Triangle_Node_hxx__

// Spartacus
#include <Triangle_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>
#include <gp_Pnt2d.hxx>

// Forward declarations
class Triangle_Node;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_Node, Triangle_Object)



// ============================================================================
/*!
 *  \brief Triangle_Node
*/
// ============================================================================
class Triangle_Node : public Triangle_Object
{

public:
    // constructors
    Standard_EXPORT Triangle_Node();
    Standard_EXPORT Triangle_Node(const gp_Pnt2d& thePoint);
    // destructors
    Standard_EXPORT ~Triangle_Node();

public:

    Standard_EXPORT const TColStd_Array1OfInteger&  Attributes() const;
    Standard_EXPORT Standard_Integer                BoundaryMarker() const;
    Standard_EXPORT TColStd_Array1OfInteger&        ChangeAttributes();
    Standard_EXPORT gp_Pnt2d&                       ChangePoint();
    Standard_EXPORT Standard_Integer                NbAttributes() const;
    Standard_EXPORT const gp_Pnt2d&                 Point() const;
    Standard_EXPORT void                            SetBoundaryMarker(const Standard_Integer theBoundaryMarker);
    Standard_EXPORT void                            SetPoint(const gp_Pnt2d& thePoint);

private:

    TColStd_Array1OfInteger myAttributes;
    Standard_Integer        myBoundaryMarker;
    gp_Pnt2d                myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_Node, Triangle_Object)

};


#endif // __Triangle_Node_hxx__
