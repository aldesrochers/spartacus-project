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

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>

// Spartacus
#include <Model_Array1OfElement.hxx>
#include <Model_Array1OfNode.hxx>
#include <Model_Element.hxx>
#include <Model_Node.hxx>

// Forward declarations
class Model_Domain;

// Handles
DEFINE_STANDARD_HANDLE(Model_Domain, Standard_Transient);


// ============================================================================
/*!
 *  \brief Model_Domain
*/
// ============================================================================
class Model_Domain : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT Model_Domain();
    // destructors
    Standard_EXPORT ~Model_Domain();

public:

    Standard_EXPORT Standard_Integer    NbElements() const;
    Standard_EXPORT Standard_Integer    NbNodes() const;

private:

    Model_Array1OfElement       myElements;
    Model_Array1OfNode          myNodes;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Domain, Standard_Transient);

};


#endif // __Model_Domain_hxx__
