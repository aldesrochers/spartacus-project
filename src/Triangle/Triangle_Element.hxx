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


#ifndef __Triangle_Element_hxx__
#define __Triangle_Element_hxx__

// Spartacus
#include <Triangle_Object.hxx>
#include <Triangle_TypeOfElement.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>

// Forward declarations
class Triangle_Element;

// Handles
DEFINE_STANDARD_HANDLE(Triangle_Element, Triangle_Object)



// ============================================================================
/*!
 *  \brief Triangle_Element
*/
// ============================================================================
class Triangle_Element : public Triangle_Object
{

public:
    // constructors
    Standard_EXPORT Triangle_Element();
    // destructors
    Standard_EXPORT ~Triangle_Element();

public:

    Standard_EXPORT Standard_Real                   Attribute(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfReal&     Attributes() const;
    Standard_EXPORT TColStd_Array1OfReal&           ChangeAttributes();
    Standard_EXPORT TColStd_Array1OfInteger&        ChangeNeighbors();
    Standard_EXPORT TColStd_Array1OfInteger&        ChangeNodes();
    Standard_EXPORT Standard_Real                   MaximumArea() const;
    Standard_EXPORT Standard_Integer                NbAttributes() const;
    Standard_EXPORT Standard_Integer                NbNeighbors() const;
    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT Standard_Integer                Neighbor(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  Neighbors() const;
    Standard_EXPORT Standard_Integer                Node(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  Nodes() const;
    Standard_EXPORT void                            ResizeAttributes(const Standard_Integer theNbAttributes,
                                                                     const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNeighbors(const Standard_Integer theNbNeighbors,
                                                                    const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetAttribute(const Standard_Integer theIndex,
                                                                 const Standard_Real theValue);
    Standard_EXPORT void                            SetMaximumArea(const Standard_Real theMaximumArea);
    Standard_EXPORT void                            SetNeighbor(const Standard_Integer theIndex,
                                                                const Standard_Integer theNeighbor);
    Standard_EXPORT void                            SetNode(const Standard_Integer theIndex,
                                                            const Standard_Integer theNode);
    Standard_EXPORT void                            SetType(const Triangle_TypeOfElement theType);
    Standard_EXPORT Triangle_TypeOfElement          Type() const;

private:

    TColStd_Array1OfReal        myAttributes;
    Standard_Real               myMaximumArea;
    TColStd_Array1OfInteger     myNeighbors;
    TColStd_Array1OfInteger     myNodes;
    Triangle_TypeOfElement      myType;

public:

    DEFINE_STANDARD_RTTIEXT(Triangle_Element, Triangle_Object)

};


#endif // __Triangle_Element_hxx__
