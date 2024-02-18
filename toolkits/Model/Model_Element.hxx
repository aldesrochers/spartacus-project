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


#ifndef __Model_Element_hxx__
#define __Model_Element_hxx__

// Spartacus
#include <Model_Object.hxx>
#include <ModelAbs_TypeOfModelisation.hxx>
#include <ModelAbs_TypeOfPhenomenon.hxx>

// Forward declarations
class Model_Element;

// Handles
DEFINE_STANDARD_HANDLE(Model_Element, Model_Object);


// ============================================================================
/*!
 *  \brief Model_Element
*/
// ============================================================================
class Model_Element : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Element();
    Standard_EXPORT Model_Element(const Standard_Integer theCell,
                                  const ModelAbs_TypeOfPhenomenon thePhenomenon,
                                  const ModelAbs_TypeOfModelisation theModelisation);
    // destructors
    Standard_EXPORT ~Model_Element();

public:

    Standard_EXPORT Standard_Integer            Cell() const;
    Standard_EXPORT ModelAbs_TypeOfModelisation Modelisation() const;
    Standard_EXPORT ModelAbs_TypeOfPhenomenon   Phenomenon() const;
    Standard_EXPORT void                        SetCell(const Standard_Integer theCell);
    Standard_EXPORT void                        SetModelisation(const ModelAbs_TypeOfModelisation theModelisation);
    Standard_EXPORT void                        SetPhenomenon(const ModelAbs_TypeOfPhenomenon thePhenomenon);

private:

    Standard_Integer                myCell;
    ModelAbs_TypeOfModelisation     myModelisation;
    ModelAbs_TypeOfPhenomenon       myPhenomenon;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Element, Model_Object);

};


#endif // __Model_Element_hxx__
