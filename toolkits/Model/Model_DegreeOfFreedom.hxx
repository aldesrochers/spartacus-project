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


#ifndef __Model_DegreeOfFreedom_hxx__
#define __Model_DegreeOfFreedom_hxx__

// Spartacus
#include <Model_DomainComponent.hxx>
#include <ModelAbs_TypeOfDOF.hxx>

// Forward declarations
class Model_DegreeOfFreedom;

// Handles
DEFINE_STANDARD_HANDLE(Model_DegreeOfFreedom, Model_DomainComponent);


// ============================================================================
/*!
 *  \brief Model_DegreeOfFreedom
*/
// ============================================================================
class Model_DegreeOfFreedom : public Model_DomainComponent
{

public:
    // constructors
    Standard_EXPORT Model_DegreeOfFreedom();
    Standard_EXPORT Model_DegreeOfFreedom(const Standard_Integer theNodeId,
                                          const ModelAbs_TypeOfDOF theType);
    // destructors
    Standard_EXPORT ~Model_DegreeOfFreedom();

public:

    Standard_EXPORT Standard_Integer    NodeId() const;
    Standard_EXPORT void                SetNodeId(const Standard_Integer theNodeId);
    Standard_EXPORT void                SetType(const ModelAbs_TypeOfDOF theType);
    Standard_EXPORT ModelAbs_TypeOfDOF  Type() const;

private:

    Standard_Integer        myNodeId;
    ModelAbs_TypeOfDOF      myType;

public:

    DEFINE_STANDARD_RTTIEXT(Model_DegreeOfFreedom, Model_DomainComponent);

};


#endif // __Model_DegreeOfFreedom_hxx__
