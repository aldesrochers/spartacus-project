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


#ifndef __PolyMesh2d_Node_hxx__
#define __PolyMesh2d_Node_hxx__

// Spartacus
#include <gp_Pnt2d.hxx>
#include <PolyMesh2d_Object.hxx>

// Forward declarations
class PolyMesh2d_Node;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh2d_Node, PolyMesh2d_Object)


// ============================================================================
/*!
 *  \brief PolyMesh2d_Node
*/
// ============================================================================
class PolyMesh2d_Node : public PolyMesh2d_Object
{

public:
    // constructors
    Standard_EXPORT PolyMesh2d_Node();
    Standard_EXPORT PolyMesh2d_Node(const gp_Pnt2d& thePoint);
    Standard_EXPORT PolyMesh2d_Node(const Standard_Real theX,
                                    const Standard_Real theY);
    // destructors
    Standard_EXPORT ~PolyMesh2d_Node();

public:

    Standard_EXPORT const gp_Pnt2d&     Point() const;
    Standard_EXPORT void                SetPoint(const gp_Pnt2d& thePoint);
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT void                SetY(const Standard_Real theY);
    Standard_EXPORT Standard_Real       X() const;
    Standard_EXPORT Standard_Real       Y() const;

private:

    gp_Pnt2d    myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh2d_Node, PolyMesh2d_Object)

};


#endif // __PolyMesh2d_Node_hxx__
