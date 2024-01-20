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


#ifndef __FEM_Node_hxx__
#define __FEM_Node_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <TColFEAbs_Array1OfTypeOfDegreeOfFreedom.hxx>



// ============================================================================
/*!
 *  \brief FEM_Node
*/
// ============================================================================
class FEM_Node
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT FEM_Node();
    Standard_EXPORT FEM_Node(const Standard_Integer theNodeId,
                             const Standard_Integer theNbDegreesOfFreedom);
    Standard_EXPORT FEM_Node(const Standard_Integer theNodeId,
                             const TColFEAbs_Array1OfTypeOfDegreeOfFreedom& theDegreesOfFreedom);
    // destructors
    Standard_EXPORT ~FEM_Node();

public:

    Standard_EXPORT FEAbs_TypeOfDegreeOfFreedom                     DegreeOfFreedom(const Standard_Integer theIndex) const;
    Standard_EXPORT const TColFEAbs_Array1OfTypeOfDegreeOfFreedom&  DegreesOfFreedom() const;
    Standard_EXPORT Standard_Integer                                NbDegreesOfFreedom() const;
    Standard_EXPORT Standard_Integer                                NodeId() const;
    Standard_EXPORT void                                            SetDegreeOfFreedom(const Standard_Integer theIndex,
                                                                                       const FEAbs_TypeOfDegreeOfFreedom theDegreeOfFreedom);
    Standard_EXPORT void                                            SetDegreesOfFreedom(const TColFEAbs_Array1OfTypeOfDegreeOfFreedom theDegreesOfFreedom);
    Standard_EXPORT void                                            SetNodeId(const Standard_Integer theNodeId);

private:

    TColFEAbs_Array1OfTypeOfDegreeOfFreedom     myDegreesOfFreedom;
    Standard_Integer                            myNodeId;

};


#endif // __FEM_Node_hxx__
