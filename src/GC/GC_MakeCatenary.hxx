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


#ifndef __GC_MakeCatenary_hxx__
#define __GC_MakeCatenary_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

// Spartacus
#include <GC_ExtraRoot.hxx>
#include <Geom_Catenary.hxx>

// Forward declarations
class gp_Catenary;
class gp_Ax2;
class gp_Pnt;


// ============================================================================
/*!
 *  \brief GC_MakeCatenary
 *  Class implementation of construction algorithms for trimmed catenary curves.
*/
// ============================================================================
class GC_MakeCatenary  : public GC_ExtraRoot
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT GC_MakeCatenary(const gp_Catenary& theCatenary);

    Standard_EXPORT GC_MakeCatenary(const gp_Ax2& thePosition,
                                    const Standard_Real theParameter);
  
public:

    Standard_EXPORT const Handle(Geom_Catenary)&  Value() const;

public:

    operator const Handle(Geom_Catenary)& () const;

private:

    Handle(Geom_Catenary)     myCurve;

};

#endif // __GC_MakeCatenary_hxx__
