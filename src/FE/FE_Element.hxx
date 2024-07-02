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


#ifndef __FE_Element_hxx__
#define __FE_Element_hxx__


// Spartacus
#include <FE_DOF.hxx>
#include <FE_ElementModel.hxx>
#include <FE_Node.hxx>
#include <FE_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfTransient.hxx>

// Forward declarations
class FE_Element;

// Handles
DEFINE_STANDARD_HANDLE(FE_Element, FE_Object)


// ============================================================================
/*!
 *  \brief FE_Element
*/
// ============================================================================
class FE_Element : public FE_Object
{

public:
    // constructors
    Standard_EXPORT FE_Element();
    Standard_EXPORT FE_Element(const Standard_Integer theNbNodes,
                               const Standard_Integer theNbDOFs);
    // destructors
    Standard_EXPORT ~FE_Element();

public:

    Standard_EXPORT Handle(FE_DOF)          DOF(const Standard_Integer theIndex) const;
    Standard_EXPORT Handle(FE_ElementModel) Model() const;
    Standard_EXPORT Standard_Integer        NbDOFs() const;
    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT Handle(FE_Node)         Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    ResizeDOFs(const Standard_Integer theNbDOFs,
                                                       const Standard_Boolean toCopyData = Standard_False);
    Standard_EXPORT void                    ResizeNodes(const Standard_Integer theNbNodes,
                                                        const Standard_Boolean toCopyData = Standard_False);
    Standard_EXPORT void                    SetDOF(const Standard_Integer theIndex,
                                                   const Handle(FE_DOF)& theDOF);
    Standard_EXPORT void                    SetModel(const Handle(FE_ElementModel)& theModel);
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const Handle(FE_Node)& theNode);


private:

    TColStd_Array1OfTransient   myDOFs;
    Handle(FE_ElementModel)     myModel;
    TColStd_Array1OfTransient   myNodes;


public:

    DEFINE_STANDARD_RTTIEXT(FE_Element, FE_Object)

};


#endif // __FE_Element_hxx__
