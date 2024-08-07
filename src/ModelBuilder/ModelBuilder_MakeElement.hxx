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


#ifndef __ModelBuilder_MakeElement_hxx__
#define __ModelBuilder_MakeElement_hxx__

// Spartacus
#include <Model_Element.hxx>
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelBuilder_ElementError.hxx>
#include <ModelBuilder_MakeObject.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Node.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief ModelBuilder_MakeElement
*/
// ============================================================================
class ModelBuilder_MakeElement : public ModelBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeElement();
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeElement();

public:

    Standard_EXPORT const ModelDS_Element&      Element() const;
    Standard_EXPORT operator                    ModelDS_Element() const;

public:

    Standard_EXPORT ModelBuilder_ElementError   Error() const;

protected:

    Standard_EXPORT Standard_Boolean            AddDOF(const ModelDS_Node& theNode,
                                                       const ModelAbs_TypeOfDOF theDOFType);

protected:

    ModelTools_IndexedMapOfObject   myDOFs;
    ModelBuilder_ElementError       myError;
    ModelTools_IndexedMapOfObject   myNodes;
    Handle(Model_Element)           myModel;

};


#endif // __ModelBuilder_MakeElement_hxx__
