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


#ifndef __Mesh_Cell_hxx__
#define __Mesh_Cell_hxx__

// Spartacus
#include <Mesh_Object.hxx>
#include <Mesh_TypeOfCell.hxx>

// OpenCascade
#include <TColStd_SequenceOfInteger.hxx>

// Forward declarations
class Mesh_Cell;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Cell, Mesh_Object)


// ============================================================================
/*!
 *  \brief Mesh_Cell
*/
// ============================================================================
class Mesh_Cell : public Mesh_Object
{

public:
    // constructors
    Standard_EXPORT Mesh_Cell();
    Standard_EXPORT Mesh_Cell(const Mesh_TypeOfCell theType,
                              const TColStd_SequenceOfInteger& theConnectivity);
    // destructors
    Standard_EXPORT ~Mesh_Cell();

public:

    Standard_EXPORT const TColStd_SequenceOfInteger&    Connectivity() const;
    Standard_EXPORT Standard_Integer                    NbNodes() const;
    Standard_EXPORT Standard_Integer                    Node(const Standard_Integer theIndex) const;
    Standard_EXPORT void                                SetConnectivity(const TColStd_SequenceOfInteger& theConnectivity);
    Standard_EXPORT void                                SetNode(const Standard_Integer theIndex,
                                                                const Standard_Integer theNode);
    Standard_EXPORT void                                SetType(const Mesh_TypeOfCell theType);
    Standard_EXPORT Mesh_TypeOfCell                     Type() const;

private:

    TColStd_SequenceOfInteger   myConnectivity;
    Mesh_TypeOfCell             myType;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Cell, Mesh_Object);

};


#endif // __Mesh_Cell_hxx__
