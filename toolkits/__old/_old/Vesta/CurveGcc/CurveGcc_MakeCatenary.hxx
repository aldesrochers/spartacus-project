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


#ifndef __CurveGcc_MakeCatenary_hxx__
#define __CurveGcc_MakeCatenary_hxx__

// Spartacus
#include <CurveGcc_MakeRoot.hxx>

// OpenCascade
#include <gp_Catenary.hxx>
#include <gp_Pnt.hxx>


// ============================================================================
/*!
 *  \brief CurveGcc_MakeCatenary
*/
// ============================================================================
class CurveGcc_MakeCatenary : public CurveGcc_MakeRoot
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CurveGcc_MakeCatenary(const gp_Pnt& thePoint1,
                                          const gp_Pnt& thePoint2,
                                          const Standard_Real theParameter,
                                          const gp_Dir& theMirrorDir = gp_Dir(0,1,0),
                                          const Standard_Integer theNbIterations = 100,
                                          const Standard_Real theTolerance = 1E-8);
    // destructors
    Standard_EXPORT ~CurveGcc_MakeCatenary();

public:

    Standard_EXPORT const gp_Catenary&      Value() const;

private:

    gp_Catenary     myCatenary;

};

#endif // __CurveGcc_MakeCatenary_hxx__
