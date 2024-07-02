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

// Spartacus
#include <GC_MakeCatenary.hxx>

// OpenCascade
#include <gp_Ax2.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
GC_MakeCatenary::GC_MakeCatenary(const gp_Catenary& theCatenary)
{
    myCurve = new Geom_Catenary(theCatenary);
    myError = gce_EXTRA_Done;
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
GC_MakeCatenary::GC_MakeCatenary(const gp_Ax2& thePosition,
                                 const Standard_Real theParameter)
{
    if(theParameter < 0.) {
        myError = gce_EXTRA_NullParameter;
    } else {
        myCurve = new Geom_Catenary(thePosition, theParameter);
        myError = gce_EXTRA_Done;
    }
}

// ============================================================================
/*!
 *  \brief operator()
*/
// ============================================================================
GC_MakeCatenary::operator const opencascade::handle<Geom_Catenary> &() const
{
    return Value();
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
const Handle(Geom_Catenary)& GC_MakeCatenary::Value() const
{
    StdFail_NotDone_Raise_if(myError != gce_EXTRA_Done,
                             "GC_MakeCatenary::Value->Not done.");
    return myCurve;
}

