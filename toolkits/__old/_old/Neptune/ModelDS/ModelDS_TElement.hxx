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


#ifndef __ModelDS_TElement_hxx__
#define __ModelDS_TElement_hxx__

// Spartacus
#include <ModelAbs_TypeOfElement.hxx>
#include <ModelDS_Array1OfObject.hxx>
#include <ModelDS_TObject.hxx>

// OpenCascade
#include <gp_Pnt.hxx>

// Forward declarations
class ModelDS_TElement;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TElement, ModelDS_TObject);


// ============================================================================
/*!
 *  \brief ModelDS_TElement
*/
// ============================================================================
class ModelDS_TElement : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TElement();
    // destructors
    Standard_EXPORT ~ModelDS_TElement();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT ModelAbs_TypeOfElement      ElementType() const;
    Standard_EXPORT ModelDS_Array1OfObject&     Nodes();
    Standard_EXPORT void                        SetElementType(const ModelAbs_TypeOfElement theElementType);

private:

    ModelDS_Array1OfObject      myNodes;
    ModelAbs_TypeOfElement      myElementType;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject);

};

#endif // __ModelDS_TElement_hxx__
