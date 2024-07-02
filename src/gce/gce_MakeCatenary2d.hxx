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


#ifndef __gce_MakeCatenary2d_hxx__
#define __gce_MakeCatenary2d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <gce_ExtraRoot.hxx>
#include <gp_Catenary2d.hxx>


// ============================================================================
/*!
 *  \brief gce_MakeCatenary2d
 *  Class implementation of direct constructors for 2d catenary curves.
*/
// ============================================================================
class gce_MakeCatenary2d : public gce_ExtraRoot
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT gce_MakeCatenary2d(const gp_Ax22d& thePosition,
                                       const Standard_Real theParameter);
    Standard_EXPORT gce_MakeCatenary2d(const gp_Ax2d& theMirrorAxis,
                                       const Standard_Real theParameter,
                                       const Standard_Boolean theSense = Standard_True);

public:

    Standard_EXPORT const gp_Catenary2d&    Operator() const;
    Standard_EXPORT const gp_Catenary2d&    Value() const;

public:

    Standard_EXPORT operator        gp_Catenary2d() const;

private:

    gp_Catenary2d       myCatenary;

};

#endif // __gce_MakeCatenary2d_hxx__
