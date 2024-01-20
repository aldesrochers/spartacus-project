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


#ifndef __mp_LineSegment2d_hxx__
#define __mp_LineSegment2d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt2d.hxx>


// ============================================================================
/*!
 *  \brief mp_LineSegment2d
*/
// ============================================================================
class mp_LineSegment2d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT mp_LineSegment2d();
    Standard_EXPORT mp_LineSegment2d(const gp_Pnt2d& thePoint1,
                                     const gp_Pnt2d& thePoint2);
    // destructors
    Standard_EXPORT ~mp_LineSegment2d();



private:

    gp_Lin2d        myLine;

};

#endif // __mp_LineSegment2d_hxx__
