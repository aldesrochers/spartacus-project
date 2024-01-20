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


#ifndef __FEM_Model_hxx__
#define __FEM_Model_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <FEM_Array1OfElement.hxx>
#include <FEM_Array1OfNode.hxx>

// Forward declarations
class FEM_Model;

// Handles
DEFINE_STANDARD_HANDLE(FEM_Model, Standard_Transient);


// ============================================================================
/*!
 *  \brief FEM_Model
*/
// ============================================================================
class FEM_Model : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT FEM_Model();
    Standard_EXPORT FEM_Model(const Standard_Integer theNbNodes,
                              const Standard_Integer theNbElements);
    Standard_EXPORT FEM_Model(const FEM_Array1OfNode& theNodes,
                              const FEM_Array1OfElement& theElements);
    // destructors
    Standard_EXPORT ~FEM_Model();

public:

    Standard_EXPORT const FEM_Element&      Element(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer        NbElements() const;
    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT const FEM_Node&         Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    ResizeElements(const Standard_Integer theNbElements,
                                                           const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                    ResizeNodes(const Standard_Integer theNbNodes,
                                                        const Standard_Boolean toCopyOld = Standard_True);
    Standard_EXPORT void                    SetElement(const Standard_Integer theIndex,
                                                       const FEM_Element& theElement);
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const FEM_Node& theNode);

private:

    FEM_Array1OfElement     myElements;
    FEM_Array1OfNode        myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(FEM_Model, Standard_Transient);

};


#endif // __FEM_Model_hxx__
