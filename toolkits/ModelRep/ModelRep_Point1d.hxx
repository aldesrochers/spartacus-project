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


#ifndef __ModelRep_Point1d_hxx__
#define __ModelRep_Point1d_hxx__

// Spartacus
#include <ModelRep_Point.hxx>

// Forward declarations
class ModelRep_Point1d;

// Handles
DEFINE_STANDARD_HANDLE(ModelRep_Point1d, ModelRep_Point)


// ============================================================================
/*!
 *  \brief ModelRep_Point1d
*/
// ============================================================================
class ModelRep_Point1d : public ModelRep_Point
{

public:
    // constructors
    Standard_EXPORT ModelRep_Point1d(const gp_Pnt1d& thePoint1d);
    // destructors
    Standard_EXPORT ~ModelRep_Point1d();

public:

    Standard_EXPORT Standard_Boolean    IsPoint1d() const Standard_OVERRIDE;
    Standard_EXPORT const gp_Pnt1d&     Point1d() const Standard_OVERRIDE;

private:

    gp_Pnt1d        myPoint1d;

public:

    DEFINE_STANDARD_RTTIEXT(ModelRep_Point1d, ModelRep_Point)

};


#endif // __ModelRep_Point1d_hxx__
