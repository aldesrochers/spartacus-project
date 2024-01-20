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


#ifndef __ACSR_ComponentParameters_hxx__
#define __ACSR_ComponentParameters_hxx__

// OpenCascade
#include <Standard.hxx>

// Spartacus
#include <ACSR_StressStrainCurve.hxx>


// ============================================================================
/*!
 *  \brief ACSR_ComponentParameters
*/
// ============================================================================
class ACSR_ComponentParameters
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ACSR_ComponentParameters();
    // destructors
    Standard_EXPORT ~ACSR_ComponentParameters();

public:

    Standard_EXPORT Standard_Real               Area() const;
    Standard_EXPORT Standard_Integer            NbStrands() const;
    Standard_EXPORT void                        SetArea(const Standard_Real theArea);
    Standard_EXPORT void                        SetNbStrands(const Standard_Integer theNbStrands);
    Standard_EXPORT void                        SetStrandDiameter(const Standard_Real theStrandDiameter);
    Standard_EXPORT void                        SetStressStrainCurve(const ACSR_StressStrainCurve& theStressStrainCurve);
    Standard_EXPORT void                        SetTensileStrength(const Standard_Real theTensileStrength);
    Standard_EXPORT Standard_Real               StrandDiameter() const;
    Standard_EXPORT ACSR_StressStrainCurve      StressStrainCurve() const;
    Standard_EXPORT Standard_Real               TensileStrengh() const;


private:

    Standard_Real           myArea;
    Standard_Integer        myNbStrands;
    Standard_Real           myStrandDiameter;
    ACSR_StressStrainCurve  myStressStrainCurve;
    Standard_Real           myTensileStrengh;

};


#endif // __ACSR_ComponentParameters_hxx__
