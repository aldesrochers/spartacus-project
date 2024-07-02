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


#ifndef __FE1d_Truss_hxx__
#define __FE1d_Truss_hxx__


// Spartacus
#include <FE1d_MechElement.hxx>

// Forward declarations
class FE1d_Truss;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_Truss, FE1d_MechElement)


// ============================================================================
/*!
 *  \brief FE1d_Truss
*/
// ============================================================================
class FE1d_Truss : public FE1d_MechElement
{

public:
    // constructors
    Standard_EXPORT FE1d_Truss(const gp_Pnt1d& thePoint1,
                               const gp_Pnt1d& thePoint2);
    // destructors
    Standard_EXPORT ~FE1d_Truss();

public:

    Standard_EXPORT TColfep_SequenceOfDOF1d     Connectivity() const Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Real       InitialLength() const;
    Standard_EXPORT const gp_Pnt1d&     Point1() const;
    Standard_EXPORT const gp_Pnt1d&     Point2() const;

protected:

    gp_Pnt1d    myPoint1;
    gp_Pnt1d    myPoint2;

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_Truss, FE1d_MechElement)

};


#endif // __FE1d_Truss_hxx__
