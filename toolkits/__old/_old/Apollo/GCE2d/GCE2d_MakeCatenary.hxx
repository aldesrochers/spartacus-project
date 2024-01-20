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


#ifndef __GCE2d_MakeCatenary_hxx__
#define __GCE2d_MakeCatenary_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

// Spartacus
#include <GCE2d_ExtraRoot.hxx>
#include <Geom2d_Catenary.hxx>

// Forward declarations
class gp_Catenary2d;
class gp_Ax22d;
class gp_Pnt2d;


// ============================================================================
/*!
 *  \brief GCE2d_MakeCatenary
 *  Class implementation of construction algorithms for trimmed catenary curves.
*/
// ============================================================================
class GCE2d_MakeCatenary  : public GCE2d_ExtraRoot
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT GCE2d_MakeCatenary(const gp_Catenary2d& theCatenary);

    Standard_EXPORT GCE2d_MakeCatenary(const gp_Ax22d& thePosition,
                                       const Standard_Real theParameter);

    Standard_EXPORT GCE2d_MakeCatenary(const gp_Ax2d& theMirrorAxis,
                                       const Standard_Real theParameter,
                                       const Standard_Boolean theSense = Standard_True);
  
public:

    Standard_EXPORT const Handle(Geom2d_Catenary)&  Value() const;

public:

    operator const Handle(Geom2d_Catenary)& () const;

private:

    Handle(Geom2d_Catenary)     myCurve;

};

#endif // __GCE2d_MakeCatenary_hxx__
