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


#ifndef __VVM_Cell_hxx__
#define __VVM_Cell_hxx__

// Spartacus
#include <VVM_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfInteger.hxx>

// Forward declarations
class VVM_Cell;

// Handles
DEFINE_STANDARD_HANDLE(VVM_Cell, VVM_Object);


// ============================================================================
/*!
 *  \brief VVM_Cell
*/
// ============================================================================
class VVM_Cell : public VVM_Object
{

public:
    // constructors
    Standard_EXPORT VVM_Cell();
    Standard_EXPORT VVM_Cell(const Standard_Integer theNbNodes,
                             const Standard_Integer theType = 0);
    Standard_EXPORT VVM_Cell(const TColStd_Array1OfInteger& theNodeIds,
                             const Standard_Integer theType = 0);
    // destructors
    Standard_EXPORT ~VVM_Cell();

public:

    Standard_EXPORT Standard_Integer                NbNodes() const;
    Standard_EXPORT Standard_Integer                NodeId(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColStd_Array1OfInteger&  NodeIds() const;
    Standard_EXPORT void                            ResizeNodes(const Standard_Integer theNbNodes,
                                                                const Standard_Boolean theCopyOld = Standard_False);
    Standard_EXPORT void                            SetNodeId(const Standard_Integer theIndex,
                                                              const Standard_Integer theNodeId);
    Standard_EXPORT void                            SetNodeIds(const TColStd_Array1OfInteger& theNodeIds);
    Standard_EXPORT void                            SetType(const Standard_Integer theType);
    Standard_EXPORT Standard_Integer                Type() const;

private:

    TColStd_Array1OfInteger     myNodeIds;
    Standard_Integer            myType;

public:

    DEFINE_STANDARD_RTTIEXT(VVM_Cell, VVM_Object);

};

#endif // __VVM_Cell_hxx__
