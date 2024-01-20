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


#ifndef __DCPnts_UniformLength_hxx__
#define __DCPnts_UniformLength_hxx__

// Spartacus
#include <DCPnts_Root.hxx>

// OpenCascade
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <TColgp_SequenceOfPnt.hxx>


// ============================================================================
/*!
 *  \brief DCPnts_UniformLength
*/
// ============================================================================
class DCPnts_UniformLength : public DCPnts_Root
{

public:
    // constructors
    Standard_EXPORT DCPnts_UniformLength();
    Standard_EXPORT DCPnts_UniformLength(const Adaptor3d_Curve& theAdaptor,
                                         const Standard_Integer theNbSegments,
                                         const Standard_Integer theNbIterations = 100,
                                         const Standard_Real theTolerance = 1E-8);
    // destructors
    Standard_EXPORT ~DCPnts_UniformLength();

public:

    Standard_EXPORT Standard_Integer    NbPoints() const;
    Standard_EXPORT gp_Pnt              Point(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Real       SegmentLength() const;

private:

    TColgp_SequenceOfPnt        myPoints;

};

#endif // __DCPnts_UniformLength_hxx__
