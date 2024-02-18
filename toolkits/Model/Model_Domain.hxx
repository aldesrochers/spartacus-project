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


#ifndef __Model_Domain_hxx__
#define __Model_Domain_hxx__

// Spartacus
#include <Model_DegreeOfFreedom.hxx>
#include <Model_Mesh.hxx>
#include <Model_Object.hxx>

// OpenCascade
#include <TColStd_DataMapOfIntegerTransient.hxx>

// Forward declarations
class Model_Domain;

// Handles
DEFINE_STANDARD_HANDLE(Model_Domain, Model_Object);


// ============================================================================
/*!
 *  \brief Model_Domain
*/
// ============================================================================
class Model_Domain : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Domain();
    Standard_EXPORT Model_Domain(const Handle(Model_Mesh)& theMesh);
    // destructors
    Standard_EXPORT ~Model_Domain();

public:

    Standard_EXPORT Handle(Model_DegreeOfFreedom)   DegreeOfFreedom(const Standard_Integer theDegreeOfFreedomId) const;
    Standard_EXPORT Standard_Integer                NbDegreesOfFreedom() const;
    Standard_EXPORT const Handle(Model_Mesh)&       Mesh() const;
    Standard_EXPORT void                            SetDegreeOfFreedom(const Standard_Integer theDegreeOfFreedomId,
                                                                       const Handle(Model_DegreeOfFreedom)& theDegreeOfFreedom);
    Standard_EXPORT void                            SetMesh(const Handle(Model_Mesh)& theMesh);

private:

    TColStd_DataMapOfIntegerTransient   myDegreesOfFreedom;
    Handle(Model_Mesh)                  myMesh;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Domain, Model_Object);

};


#endif // __Model_Domain_hxx__
