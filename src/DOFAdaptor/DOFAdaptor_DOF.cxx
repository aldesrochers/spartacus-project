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
#include <DOF_Rotation.hxx>
#include <DOF_Translation.hxx>
#include <DOFAdaptor_DOF.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOFAdaptor_DOF::DOFAdaptor_DOF()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DOFAdaptor_DOF::DOFAdaptor_DOF(const Handle(DOF_DegreeOfFreedom)& theDOF)
    : myDOF(theDOF)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DOFAdaptor_DOF::~DOFAdaptor_DOF()
{

}

// ============================================================================
/*!
 *  \brief DOF()
*/
// ============================================================================
const Handle(DOF_DegreeOfFreedom)& DOFAdaptor_DOF::DOF() const
{
    return myDOF;
}

// ============================================================================
/*!
 *  \brief AxisType()
*/
// ============================================================================
DOFAbs_TypeOfAxis DOFAdaptor_DOF::AxisType() const
{
    Handle(Standard_Type) aType = myDOF->DynamicType();
    if(aType == STANDARD_TYPE(DOF_Translation) || aType == STANDARD_TYPE(DOF_Rotation)) {
        Handle(DOF_Motion) aMotion = Handle(DOF_Motion)::DownCast(myDOF);
        return aMotion->Axis();
    } else {
        // not a valid motion dof
        throw Standard_DomainError("DOFAdaptor_DOF::AxisType()");
    }
}

// ============================================================================
/*!
 *  \brief DOFType()
*/
// ============================================================================
DOFAbs_TypeOfDOF DOFAdaptor_DOF::DOFType() const
{
    Handle(Standard_Type) aType = myDOF->DynamicType();
    if(aType == STANDARD_TYPE(DOF_Rotation)) {
        DOFAbs_TypeOfAxis anAxis = AxisType();
        if(anAxis == DOFAbs_AXIS_X) {
            return DOFAbs_DOF_DRX;
        } else if(anAxis == DOFAbs_AXIS_Y) {
            return DOFAbs_DOF_DRY;
        } else if(anAxis == DOFAbs_AXIS_Z) {
            return DOFAbs_DOF_DRZ;
        } else {
            // not a valid axis of motion
            throw Standard_DomainError("DOFAdaptor_DOF::DOFType()");
        }
    } else if(aType == STANDARD_TYPE(DOF_Translation)) {
        DOFAbs_TypeOfAxis anAxis = AxisType();
        if(anAxis == DOFAbs_AXIS_X) {
            return DOFAbs_DOF_DX;
        } else if(anAxis == DOFAbs_AXIS_Y) {
            return DOFAbs_DOF_DY;
        } else if(anAxis == DOFAbs_AXIS_Z) {
            return DOFAbs_DOF_DZ;
        } else {
            // not a valid axis of motion
            throw Standard_DomainError("DOFAdaptor_DOF::DOFType()");
        }
    } else {
        // not a valid motion dof
        throw Standard_DomainError("DOFAdaptor_DOF::DOFType()");
    }
}

// ============================================================================
/*!
 *  \brief MotionType()
*/
// ============================================================================
DOFAbs_TypeOfMotion DOFAdaptor_DOF::MotionType() const
{
    Handle(Standard_Type) aType = myDOF->DynamicType();
    if(aType == STANDARD_TYPE(DOF_Rotation)) {
        return DOFAbs_TOM_Rotation;
    } else if(aType == STANDARD_TYPE(DOF_Translation)) {
        return DOFAbs_TOM_Translation;
    } else {
        // not a valid motion dof
        throw Standard_DomainError("DOFAdaptor_DOF::MotionType()");
    }
}

// ============================================================================
/*!
 *  \brief SetDOF()
*/
// ============================================================================
void DOFAdaptor_DOF::SetDOF(const Handle(DOF_DegreeOfFreedom) &theDOF)
{
    myDOF = theDOF;
}

