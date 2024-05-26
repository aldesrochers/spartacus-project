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

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>

// Forward declarations
class Mech1d_Node;

// Handles
DEFINE_STANDARD_HANDLE(Mech1d_Node, Standard_Transient)


// ============================================================================
/*!
 *  \brief Mech1d_Node
*/
// ============================================================================
class Mech1d_Node : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Mech1d_Node();
    // destructors
    Standard_EXPORT ~Mech1d_Node();

public:

    Standard_EXPORT const gp_Pnt1d&     Point() const;
    Standard_EXPORT void                SetPoint(const gp_Pnt1d& thePoint);

private:

    gp_Pnt1d        myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(Mech1d_Node, Standard_Transient);

};


#endif // __Mech1d_Node_hxx__
