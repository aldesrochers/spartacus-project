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


#ifndef __DOFAdaptor_DOF_hxx__
#define __DOFAdaptor_DOF_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <DOF_DegreeOfFreedom.hxx>
#include <DOFAbs_TypeOfAxis.hxx>
#include <DOFAbs_TypeOfDOF.hxx>
#include <DOFAbs_TypeOfMotion.hxx>

// Forward declarations
class DOFAdaptor_DOF;


// ============================================================================
/*!
 *  \brief DOFAdaptor_DOF
*/
// ============================================================================
class DOFAdaptor_DOF
{

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT DOFAdaptor_DOF();
    Standard_EXPORT DOFAdaptor_DOF(const Handle(DOF_DegreeOfFreedom)& theDOF);
    // destructors
    Standard_EXPORT ~DOFAdaptor_DOF();

public:

    Standard_EXPORT DOFAbs_TypeOfAxis                   AxisType() const;
    Standard_EXPORT const Handle(DOF_DegreeOfFreedom)&  DOF() const;
    Standard_EXPORT DOFAbs_TypeOfDOF                    DOFType() const;
    Standard_EXPORT DOFAbs_TypeOfMotion                 MotionType() const;
    Standard_EXPORT void                                SetDOF(const Handle(DOF_DegreeOfFreedom)& theDOF);

private:

    Handle(DOF_DegreeOfFreedom)     myDOF;

};


#endif // __DOFAdaptor_DOF_hxx__
