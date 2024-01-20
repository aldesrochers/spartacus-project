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
#include <ACSR_ComponentParameters.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ACSR_ComponentParameters::ACSR_ComponentParameters()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ACSR_ComponentParameters::~ACSR_ComponentParameters()
{

}

// ============================================================================
/*!
 *  \brief Area()
*/
// ============================================================================
Standard_Real ACSR_ComponentParameters::Area() const
{
    return myArea;
}

// ============================================================================
/*!
 *  \brief NbStrands()
*/
// ============================================================================
Standard_Integer ACSR_ComponentParameters::NbStrands() const
{
    return myNbStrands;
}

// ============================================================================
/*!
 *  \brief SetArea()
*/
// ============================================================================
void ACSR_ComponentParameters::SetArea(const Standard_Real theArea)
{
    myArea = theArea;
}

// ============================================================================
/*!
 *  \brief SetNbStrands()
*/
// ============================================================================
void ACSR_ComponentParameters::SetNbStrands(const Standard_Integer theNbStrands)
{
    myNbStrands = theNbStrands;
}

// ============================================================================
/*!
 *  \brief SetStrandDiameter()
*/
// ============================================================================
void ACSR_ComponentParameters::SetStrandDiameter(const Standard_Real theStrandDiameter)
{
    myStrandDiameter = theStrandDiameter;
}

// ============================================================================
/*!
 *  \brief SetStressStrainCurve()
*/
// ============================================================================
void ACSR_ComponentParameters::SetStressStrainCurve(const ACSR_StressStrainCurve& theStressStrainCurve)
{
    myStressStrainCurve = theStressStrainCurve;
}

// ============================================================================
/*!
 *  \brief SetTensileStrength()
*/
// ============================================================================
void ACSR_ComponentParameters::SetTensileStrength(const Standard_Real theTensileStrength)
{
    myTensileStrengh = theTensileStrength;
}

// ============================================================================
/*!
 *  \brief StrandDiameter()
*/
// ============================================================================
Standard_Real ACSR_ComponentParameters::StrandDiameter() const
{
    return myStrandDiameter;
}

// ============================================================================
/*!
 *  \brief StressStrainCurve()
*/
// ============================================================================
ACSR_StressStrainCurve ACSR_ComponentParameters::StressStrainCurve() const
{
    return myStressStrainCurve;
}

// ============================================================================
/*!
 *  \brief TensileStrengh()
*/
// ============================================================================
Standard_Real ACSR_ComponentParameters::TensileStrengh() const
{
    return myTensileStrengh;
}

