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


#ifndef __Mesh_Grid_hxx__
#define __Mesh_Grid_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <TColmp_Array1OfGroup.hxx>
#include <TColmp_Array1OfLinearLine2N.hxx>
#include <TColmp_Array1OfQuadraticLine3N.hxx>
#include <TColmp_Array1OfNode.hxx>

// Forward declarations
class Mesh_Grid;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Grid, Standard_Transient)


// ============================================================================
/*!
 *  \brief Mesh_Grid
 *  Class implementation of a mesh data structure in 2d space.
*/
// ============================================================================
class Mesh_Grid : public Standard_Transient
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Mesh_Grid();
    // destructors
    Standard_EXPORT ~Mesh_Grid();

public:

    Standard_EXPORT const mp_Group&                         GroupOfLinearLines2N(const Standard_Integer theIndex) const;
    Standard_EXPORT const mp_Group&                         GroupOfNodes(const Standard_Integer theIndex) const;
    Standard_EXPORT const mp_Group&                         GroupOfQuadraticLines3N(const Standard_Integer theIndex) const;

    Standard_EXPORT const TColmp_Array1OfGroup&             GroupsOfLinearLines2N() const;
    Standard_EXPORT TColmp_Array1OfGroup&                   GroupsOfLinearLines2N();
    Standard_EXPORT const TColmp_Array1OfGroup&             GroupsOfNodes() const;
    Standard_EXPORT TColmp_Array1OfGroup&                   GroupsOfNodes();
    Standard_EXPORT const TColmp_Array1OfGroup&             GroupsOfQuadraticLines3N() const;
    Standard_EXPORT TColmp_Array1OfGroup&                   GroupsOfQuadraticLines3N();

    Standard_EXPORT const mp_LinearLine2N&                  LinearLine2N(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColmp_Array1OfLinearLine2N&      LinearLines2N() const;
    Standard_EXPORT TColmp_Array1OfLinearLine2N&            LinearLines2N();

    Standard_EXPORT Standard_Integer                        NbGroupsOfLinearLines2N() const;
    Standard_EXPORT Standard_Integer                        NbGroupsOfNodes() const;
    Standard_EXPORT Standard_Integer                        NbGroupsOfQuadraticLines3N() const;

    Standard_EXPORT Standard_Integer                        NbLinearLines2N() const;
    Standard_EXPORT Standard_Integer                        NbNodes() const;
    Standard_EXPORT Standard_Integer                        NbQuadraticLines3N() const;

    Standard_EXPORT const mp_Node&                          Node(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColmp_Array1OfNode&              Nodes() const;
    Standard_EXPORT TColmp_Array1OfNode&                    Nodes();

    Standard_EXPORT const mp_QuadraticLine3N&               QuadraticLine3N(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColmp_Array1OfQuadraticLine3N&   QuadraticLines3N() const;
    Standard_EXPORT TColmp_Array1OfQuadraticLine3N&         QuadraticLines3N();

    Standard_EXPORT void                                    ResizeGroupsOfLinearLines2N(const Standard_Integer theNbGroups,
                                                                                        const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                                    ResizeGroupsOfNodes(const Standard_Integer theNbGroups,
                                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                                    ResizeGroupsOfQuadraticLines3N(const Standard_Integer theNbGroups,
                                                                                           const Standard_Boolean toCopyData = Standard_True);

    Standard_EXPORT void                                    ResizeLinearLines2N(const Standard_Integer theNbLinearLines2N,
                                                                                const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                                    ResizeNodes(const Standard_Integer theNbNodes,
                                                                        const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                                    ResizeQuadraticLines3N(const Standard_Integer theNbQuadraticLines3N,
                                                                                   const Standard_Boolean toCopyData = Standard_True);

    Standard_EXPORT void                                    SetGroupOfLinearLines2N(const Standard_Integer theIndex,
                                                                                    const mp_Group& theGroup);
    Standard_EXPORT void                                    SetGroupOfNodes(const Standard_Integer theIndex,
                                                                            const mp_Group& theGroup);
    Standard_EXPORT void                                    SetGroupOfQuadraticLines3N(const Standard_Integer theIndex,
                                                                                       const mp_Group& theGroup);

    Standard_EXPORT void                                    SetLinearLine2N(const Standard_Integer theIndex,
                                                                            const mp_LinearLine2N& theLinearLine2N);
    Standard_EXPORT void                                    SetNode(const Standard_Integer theIndex,
                                                                    const mp_Node& theNode);
    Standard_EXPORT void                                    SetQuadraticLine3N(const Standard_Integer theIndex,
                                                                               const mp_QuadraticLine3N& theQuadraticLine3N);
private:

    TColmp_Array1OfGroup                myGroupsOfLinearLines2N;
    TColmp_Array1OfGroup                myGroupsOfNodes;
    TColmp_Array1OfGroup                myGroupsOfQuadraticLines3N;
    TColmp_Array1OfLinearLine2N         myLinearLines2N;
    TColmp_Array1OfNode                 myNodes;
    TColmp_Array1OfQuadraticLine3N      myQuadraticLines3N;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Grid, Standard_Transient);

};


#endif // __Mesh_Grid_hxx__
