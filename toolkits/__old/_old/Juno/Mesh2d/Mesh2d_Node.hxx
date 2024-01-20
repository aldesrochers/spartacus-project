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


#ifndef __Mesh2d_Node_hxx__
#define __Mesh2d_Node_hxx__

// Spartacus
#include <Mesh2d_Object.hxx>
#include <mp_Node2d.hxx>

// Forward declarations
class Mesh2d_Node;

// Handles
DEFINE_STANDARD_HANDLE(Mesh2d_Node, Mesh2d_Object);


// ============================================================================
/*!
 *  \brief Mesh2d_Node
*/
// ============================================================================
class Mesh2d_Node : public Mesh2d_Object
{

public:
    // constructors
    Standard_EXPORT Mesh2d_Node();
    Standard_EXPORT Mesh2d_Node(const Standard_Real theX,
                                const Standard_Real theY);
    // destructors
    Standard_EXPORT ~Mesh2d_Node();

public:

    Standard_EXPORT Standard_Real       Distance(const Handle(Mesh2d_Node)& theOther) const;
    Standard_EXPORT const mp_Node2d&    Node2d() const;
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT void                SetY(const Standard_Real theY);
    Standard_EXPORT Standard_Real       X() const;
    Standard_EXPORT Standard_Real       Y() const;

private:

    mp_Node2d       myNode2d;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh2d_Node, Mesh2d_Object);

};

#endif // __Mesh2d_Node_hxx__
