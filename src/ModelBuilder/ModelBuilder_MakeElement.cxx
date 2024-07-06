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


// Spartacus
#include <ModelBuilder_MakeElement.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelExp.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeElement::ModelBuilder_MakeElement()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeElement::~ModelBuilder_MakeElement()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
Standard_Boolean ModelBuilder_MakeElement::AddDOF(const ModelDS_Node &theNode,
                                                  const ModelAbs_TypeOfDOF theDOFType)
{
    // list DOFs bounded to node
    ModelTools_ListOfObject aList;
    ModelExp::ListDOFs(theNode, aList);

    // check if DOF exists with type exists. if so, add to internal map
    ModelTools_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next()) {
        ModelDS_DOF iDOF = ModelDS::DOF(anIterator.Value());
        ModelAbs_TypeOfDOF iType = ModelDS_Tool::DOFType(iDOF);
        if(iType == theDOFType) {
            myDOFs.Add(iDOF);
            return Standard_True;
        }
    }

    return Standard_False;
}

// ============================================================================
/*!
 *  \brief Element()
*/
// ============================================================================
const ModelDS_Element& ModelBuilder_MakeElement::Element() const
{
    return ModelDS::Element(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelBuilder_Element()
*/
// ============================================================================
ModelBuilder_MakeElement::operator ModelDS_Element() const
{
    return Element();
}


