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


#ifndef __Mech1d_Node_hxx__
#define __Mech1d_Node_hxx__

// Spartacus
#include <DOF_Translation.hxx>
#include <FE1d_Node.hxx>
#include <gp_Pnt1d.hxx>

// Forward declarations
class Mech1d_Node;

// Handles
DEFINE_STANDARD_HANDLE(Mech1d_Node, FE1d_Node)


// ============================================================================
/*!
 *  \brief Mech1d_Node
*/
// ============================================================================
class Mech1d_Node : public FE1d_Node
{

public:
    // constructors
    Standard_EXPORT Mech1d_Node();
    Standard_EXPORT Mech1d_Node(const gp_Pnt1d& thePoint);
    // destructorsgeom
    Standard_EXPORT ~Mech1d_Node();

public:

    Standard_EXPORT const Handle(DOF_Translation)&  DX() const;
    Standard_EXPORT void                            SetDX(const Handle(DOF_Translation)& theDX);

private:

    Handle(DOF_Translation)     myDX;

public:

    DEFINE_STANDARD_RTTIEXT(Mech1d_Node, FE1d_Node)

};


#endif // __Mech1d_Node_hxx__
