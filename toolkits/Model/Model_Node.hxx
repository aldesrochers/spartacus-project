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


#ifndef __Model_Node_hxx__
#define __Model_Node_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <Model_Array1OfTypeOfDOF.hxx>


// ============================================================================
/*!
 *  \brief Model_Node
*/
// ============================================================================
class Model_Node
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Model_Node();
    Standard_EXPORT Model_Node(const Standard_Integer theMeshNode,
                               const Standard_Integer theNbDegreesOfFreedom);
    Standard_EXPORT Model_Node(const Standard_Integer theMeshNode,
                               const Model_Array1OfTypeOfDOF& theDegreesOfFreedom);
    // destructors
    Standard_EXPORT ~Model_Node();

public:

    Standard_EXPORT Model_TypeOfDOF                 DegreeOfFreedom(const Standard_Integer theIndex) const;
    Standard_EXPORT const Model_Array1OfTypeOfDOF&  DegreesOfFreedom() const;
    Standard_EXPORT Standard_Integer                NbDegreesOfFreedom() const;
    Standard_EXPORT Standard_Integer                MeshNode() const;
    Standard_EXPORT void                            ResizeDegreesOfFreedom(const Standard_Integer theNbDegreesOfFreedom,
                                                                           const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetDegreeOfFreedom(const Standard_Integer theIndex,
                                                                       const Model_TypeOfDOF theDegreeOfFreedom);
    Standard_EXPORT void                            SetMeshNode(const Standard_Integer theMeshNode);

private:

    Model_Array1OfTypeOfDOF     myDegreesOfFreedom;
    Standard_Integer            myMeshNode;

};


#endif // __Model_Node_hxx__
