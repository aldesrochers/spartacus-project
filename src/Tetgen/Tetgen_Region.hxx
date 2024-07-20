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


#ifndef __Tetgen_Region_hxx__
#define __Tetgen_Region_hxx__

// Spartacus
#include <Tetgen_Object.hxx>

// OpenCascade
#include <gp_Pnt.hxx>

// Forward declarations
class Tetgen_Region;

// Handles
DEFINE_STANDARD_HANDLE(Tetgen_Region, Tetgen_Object)


// ============================================================================
/*!
 *  \brief Tetgen_Region
*/
// ============================================================================
class Tetgen_Region : public Tetgen_Object
{

public:
    // constructors
    Standard_EXPORT Tetgen_Region();
    Standard_EXPORT Tetgen_Region(const gp_Pnt& thePoint);
    // destructors
    Standard_EXPORT ~Tetgen_Region();

public:

    Standard_EXPORT Standard_Integer    Attribute() const;
    Standard_EXPORT gp_Pnt&             ChangePoint();
    Standard_EXPORT Standard_Real       MaxVolumne() const;
    Standard_EXPORT const gp_Pnt&       Point() const;
    Standard_EXPORT void                SetAttribute(const Standard_Integer theAttribute);
    Standard_EXPORT void                SetMaxVolumne(const Standard_Real theMaxVolumne);
    Standard_EXPORT void                SetPoint(const gp_Pnt& thePoint);

public:

    DEFINE_STANDARD_RTTIEXT(Tetgen_Region, Tetgen_Object)

private:

    Standard_Integer    myAttribute;
    Standard_Real       myMaxVolumne;
    gp_Pnt              myPoint;

};


#endif // __Tetgen_Region_hxx__
