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


#ifndef __ModelDS_TDomain_hxx__
#define __ModelDS_TDomain_hxx__

// Spartacus
#include <ModelDS_Array1OfObject.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TDomain;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TDomain, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TDomain
*/
// ============================================================================
class ModelDS_TDomain : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TDomain();
    // destructors
    Standard_EXPORT ~ModelDS_TDomain();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_Element&  Element(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer        NbElements() const;
    Standard_EXPORT Standard_Integer        NbNodes() const;
    Standard_EXPORT const ModelDS_Node&     Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                    ResizeElements(const Standard_Integer theNbElements,
                                                           const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                    ResizeNodes(const Standard_Integer theNbNodes,
                                                        const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                    SetElement(const Standard_Integer theIndex,
                                                       const ModelDS_Element& theElement);
    Standard_EXPORT void                    SetNode(const Standard_Integer theIndex,
                                                    const ModelDS_Node& theNode);


private:

    ModelDS_Array1OfObject      myElements;
    ModelDS_Array1OfObject      myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TDomain, ModelDS_TObject)

};


#endif // __ModelDS_TDomain_hxx__
