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


#ifndef __ModelDS_TNode_hxx__
#define __ModelDS_TNode_hxx__

// OpenCascade
#include <gp_Pnt.hxx>

// Spartacus
#include <ModelAbs_TypeOfDegreeOfFreedom.hxx>
#include <ModelDS_DataMapOfIntegerObject.hxx>
#include <ModelDS_DegreeOfFreedom.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TNode;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TNode, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TNode
*/
// ============================================================================
class ModelDS_TNode : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TNode();
    // destructors
    Standard_EXPORT ~ModelDS_TNode();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_DegreeOfFreedom&  DegreeOfFreedom(const ModelAbs_TypeOfDegreeOfFreedom theType) const;
    Standard_EXPORT Standard_Integer                NbDegreesOfFreedom() const;
    Standard_EXPORT const gp_Pnt&                   Point() const;
    Standard_EXPORT void                            SetDegreeOfFreedom(const ModelAbs_TypeOfDegreeOfFreedom theType,
                                                                       const ModelDS_DegreeOfFreedom& theDegreeOfFreedom);
    Standard_EXPORT void                            SetPoint(const gp_Pnt& thePoint);

private:

    ModelDS_DataMapOfIntegerObject  myDegreesOfFreedom;
    gp_Pnt                          myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TNode, ModelDS_TObject)

};


#endif // __ModelDS_TNode_hxx__
