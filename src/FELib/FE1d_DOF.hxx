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


#ifndef __FE1d_DOF_hxx__
#define __FE1d_DOF_hxx__


// Spartacus
#include <FE1d_Object.hxx>
#include <FEAbs_TypeOfDOF1d.hxx>

// Forward declarations
class FE1d_DOF;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_DOF, FE1d_Object)


// ============================================================================
/*!
 *  \brief FE1d_DOF
*/
// ============================================================================
class FE1d_DOF : public FE1d_Object
{

public:
    // constructors
    Standard_EXPORT FE1d_DOF(FEAbs_TypeOfDOF1d theDOFType);
    // destructors
    Standard_EXPORT ~FE1d_DOF();

public:

    Standard_EXPORT Standard_Real       CommitedValue() const;
    Standard_EXPORT FEAbs_TypeOfDOF1d   DOFType() const;
    Standard_EXPORT Standard_Real       InitialValue() const;
    Standard_EXPORT Standard_Real       TrialValue() const;

public:

    Standard_Real           myCommitedValue;
    FEAbs_TypeOfDOF1d       myDOFType;
    Standard_Real           myInitialValue;
    Standard_Real           myTrialValue;

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_DOF, FE1d_Object)

};


#endif // __FE1d_DOF_hxx__
