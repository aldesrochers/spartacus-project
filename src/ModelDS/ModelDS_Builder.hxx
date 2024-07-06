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


#ifndef __ModelDS_Builder_hxx__
#define __ModelDS_Builder_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TColStd_SequenceOfReal.hxx>

// Spartacus
#include <DOF_DegreeOfFreedom.hxx>
#include <gp_Pnt1d.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Vertex.hxx>
#include <ModelAbs_TypeOfDimensionality.hxx>
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelAbs_TypeOfModelization.hxx>
#include <ModelAbs_TypeOfPhenomenon.hxx>
#include <ModelDS_Boundary.hxx>
#include <ModelDS_DOF.hxx>
#include <ModelDS_DOFGroup.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Equation.hxx>
#include <ModelDS_Load.hxx>
#include <ModelDS_Loading.hxx>
#include <ModelDS_Mapping.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_Modelization.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_Object.hxx>
#include <ModelDS_TObject.hxx>




// ============================================================================
/*!
 *  \brief ModelDS_Builder
*/
// ============================================================================
class ModelDS_Builder
{

public:
    // constructors
    Standard_EXPORT ModelDS_Builder();
    // destructors
    Standard_EXPORT ~ModelDS_Builder();

public:

    Standard_EXPORT void    AddBoundary(const ModelDS_Loading& theLoading,
                                        const ModelDS_Boundary& theBoundary) const;

    Standard_EXPORT void    AddDOF(const ModelDS_Boundary& theBoundary,
                                   const ModelDS_DOF& theDOF) const;
    Standard_EXPORT void    AddDOF(const ModelDS_DOFGroup& theDOFGroup,
                                   const ModelDS_DOF& theDOF) const;
    Standard_EXPORT void    AddDOF(const ModelDS_Equation& theEquation,
                                   const ModelDS_DOF& theDOF) const;
    Standard_EXPORT void    AddDOF(const ModelDS_Load& theLoad,
                                   const ModelDS_DOF& theDOF) const;
    Standard_EXPORT void    AddDOF(const ModelDS_Mapping& theMapping,
                                   const ModelDS_DOF& theDOF) const;

    Standard_EXPORT void    AddDOF(const ModelDS_Modelization& theModelization,
                                   const ModelDS_DOF& theDOF) const;

    Standard_EXPORT void    AddDOF(const ModelDS_Node& theNode,
                                   const ModelDS_DOF& theDOF) const;

    Standard_EXPORT void    AddElement(const ModelDS_Model& theModel,
                                       const ModelDS_Element& theElement) const;

    Standard_EXPORT void    AddLoad(const ModelDS_Loading& theLoading,
                                    const ModelDS_Load& theLoad) const;

    Standard_EXPORT void    AddModelization(const ModelDS_Element& theElement,
                                            const ModelDS_Modelization& theModelization) const;

    Standard_EXPORT void    MakeBoundary(ModelDS_Boundary& theBoundary) const;

    Standard_EXPORT void    MakeDOF(ModelDS_DOF& theDOF) const;
    Standard_EXPORT void    MakeDOF(ModelDS_DOF& theDOF,
                                    const ModelAbs_TypeOfDOF theDOFType) const;

    Standard_EXPORT void    MakeDOFGroup(ModelDS_DOFGroup& theDOFGroup) const;
    Standard_EXPORT void    MakeDOFGroup(ModelDS_DOFGroup& theDOFGroup,
                                         const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    MakeElement(ModelDS_Element& theElement) const;
    Standard_EXPORT void    MakeElement(ModelDS_Element& theElement,
                                        const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    MakeEquation(ModelDS_Equation& theEquation) const;
    Standard_EXPORT void    MakeEquation(ModelDS_Equation& theEquation,
                                         const Standard_Boolean isFixed) const;

    Standard_EXPORT void    MakeLoad(ModelDS_Load& theLoad) const;

    Standard_EXPORT void    MakeLoading(ModelDS_Loading& theLoading) const;

    Standard_EXPORT void    MakeMapping(ModelDS_Mapping& theMapping) const;

    Standard_EXPORT void    MakeModel(ModelDS_Model& theModel) const;

    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode) const;
    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode,
                                     const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode,
                                     const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode,
                                     const gp_Pnt& thePoint) const;

    Standard_EXPORT void    MakeModelization(ModelDS_Modelization& theModelization) const;
    Standard_EXPORT void    MakeModelization(ModelDS_Modelization& theModelization,
                                             const Handle(Mech1d_Model)& theModel) const;

    Standard_EXPORT void    UpdateDOF(const ModelDS_DOF& theDOF,
                                      const ModelAbs_TypeOfDOF theDOFType) const;

    Standard_EXPORT void    UpdateDOF(const ModelDS_DOF& theDOF,
                                      const ModelDS_Node& theNode) const;

    Standard_EXPORT void    UpdateElement(const ModelDS_Element& theElement,
                                          const MeshDS_Cell& theCell) const;

    Standard_EXPORT void    UpdateDOFGroup(const ModelDS_DOFGroup& theDOFGroup,
                                           const MeshDS_Vertex& theVertex) const;

    Standard_EXPORT void    UpdateEquation(const ModelDS_Equation& theEquation,
                                           const Standard_Boolean isFixed) const;

    Standard_EXPORT void    UpdateModelization(const ModelDS_Modelization& theModelization,
                                               const Handle(Mech1d_Model)& theModel) const;

    Standard_EXPORT void    UpdateNode(const ModelDS_Node& theNode,
                                       const gp_Pnt1d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const ModelDS_Node& theNode,
                                       const gp_Pnt2d& thePoint) const;
    Standard_EXPORT void    UpdateNode(const ModelDS_Node& theNode,
                                       const gp_Pnt& thePoint) const;

protected:

    Standard_EXPORT void    MakeObject(ModelDS_Object& theObject,
                                       const Handle(ModelDS_TObject)& theTObject) const;

};


#endif // __ModelDS_Builder_hxx__
