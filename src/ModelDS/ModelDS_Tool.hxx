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


#ifndef __ModelDS_Tool_hxx__
#define __ModelDS_Tool_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <gp_Pnt1d.hxx>
#include <Model_Point.hxx>
#include <ModelAbs_TypeOfDimensionality.hxx>
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelAbs_TypeOfModelization.hxx>
#include <ModelAbs_TypeOfPhenomenon.hxx>
#include <ModelDS_Boundary.hxx>
#include <ModelDS_DOF.hxx>
#include <ModelDS_DOFGroup.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Equation.hxx>
#include <ModelDS_ListOfObject.hxx>
#include <ModelDS_Loading.hxx>
#include <ModelDS_Mapping.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_Modelization.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_SequenceOfObject.hxx>


// ============================================================================
/*!
 *  \brief ModelDS_Tool
*/
// ============================================================================
class ModelDS_Tool
{

public:

    DEFINE_STANDARD_ALLOC;

public:


    static Standard_EXPORT const ModelDS_ListOfObject&      Boundaries(const ModelDS_Loading& theLoading);

    static Standard_EXPORT const ModelDS_ListOfObject&      DOFs(const ModelDS_Boundary& theBoundary);
    static Standard_EXPORT const ModelDS_SequenceOfObject&  DOFs(const ModelDS_Mapping& theMapping);

    static Standard_EXPORT ModelAbs_TypeOfDOF               DOFType(const ModelDS_DOF& theDOF);

    static Standard_EXPORT const ModelDS_ListOfObject&      Elements(const ModelDS_Model& theModel);

    static Standard_EXPORT const Handle(Mech1d_Model)&    Mechanical1d(const ModelDS_Modelization& theModelization);

    static Standard_EXPORT Standard_Boolean                 IsFree(const ModelDS_Equation& theEquation);
    static Standard_EXPORT Standard_Boolean                 IsFixed(const ModelDS_Equation& theEquation);

    static Standard_EXPORT Standard_Boolean                 IsMechanical1d(const ModelDS_Modelization& theModelization);

    static Standard_EXPORT Standard_Boolean                 IsPoint1d(const ModelDS_Node& theNode);

    static Standard_EXPORT const gp_Pnt1d&                  Point1d(const ModelDS_Node& theNode);

    static Standard_EXPORT const Handle(Model_Point)&       Point(const ModelDS_Node& theNode);

};


#endif // __ModelDS_Tool_hxx__
