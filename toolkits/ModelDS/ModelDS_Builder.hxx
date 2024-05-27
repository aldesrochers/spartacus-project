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
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>

// Spartacus
#include <ModelDS_DegreeOfFreedom.hxx>
#include <ModelDS_Domain.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_Object.hxx>
#include <ModelDS_TObject.hxx>
#include <DOF_DegreeOfFreedom.hxx>
#include <gp_Pnt1d.hxx>


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

    Standard_EXPORT void    AddDegreeOfFreedom(ModelDS_Node& theNode,
                                               const ModelDS_DegreeOfFreedom& theDegreeOfFreedom) const;

    Standard_EXPORT void    MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom& theDegreeOfFreedom) const;
    Standard_EXPORT void    MakeDegreeOfFreedom(ModelDS_DegreeOfFreedom& theDegreeOfFreedom,
                                                const Handle(DOF_DegreeOfFreedom)& theDOF) const;

    Standard_EXPORT void    MakeDomain(ModelDS_Domain& theDomain) const;

    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode) const;
    Standard_EXPORT void    MakeNode(ModelDS_Node& theNode,
                                     const gp_Pnt& thePoint) const;

    Standard_EXPORT void    UpdateDegreeOfFreedom(const ModelDS_DegreeOfFreedom& theDegreeOfFreedom,
                                                  const Handle(DOF_DegreeOfFreedom)& theDOF) const;

    Standard_EXPORT void    UpdateNode(const ModelDS_Node& theNode,
                                       const gp_Pnt& thePoint) const;

protected:

    Standard_EXPORT void    MakeObject(ModelDS_Object& theObject,
                                       const Handle(ModelDS_TObject)& theTObject) const;

};


#endif // __ModelDS_Builder_hxx__
