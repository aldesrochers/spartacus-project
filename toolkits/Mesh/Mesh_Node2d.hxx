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


#ifndef __Mesh_Node2d_hxx__
#define __Mesh_Node2d_hxx__

// Spartacus
#include <Mesh_Node.hxx>

// OpenCascade
#include <gp_Pnt2d.hxx>


// ============================================================================
/*!
 *  \brief Mesh_Node2d
*/
// ============================================================================
class Mesh_Node2d : public Mesh_Node
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_Node2d();
    Standard_EXPORT Mesh_Node2d(const Standard_Real theX,
                                const Standard_Real theY);
    Standard_EXPORT Mesh_Node2d(const gp_Pnt2d& thePoint);
    // destructors
    Standard_EXPORT ~Mesh_Node2d();

public:

    Standard_EXPORT Mesh_TypeOfNode     Type() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real       Distance(const Mesh_Node2d& theNode) const;
    Standard_EXPORT const gp_Pnt2d&     Point() const;
    Standard_EXPORT void                SetPoint(const gp_Pnt2d& thePoint);
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT void                SetY(const Standard_Real theY);
    Standard_EXPORT Standard_Real       X() const;
    Standard_EXPORT Standard_Real       Y() const;

private:

    gp_Pnt2d        myPoint;

};


#endif // __Mesh_Node2d_hxx__
