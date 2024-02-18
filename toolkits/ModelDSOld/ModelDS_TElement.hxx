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
#include <MeshDS_Cell.hxx>
#include <ModelAbs_TypeOfModelisation.hxx>
#include <ModelAbs_TypeOfPhenomenon.hxx>
#include <ModelDS_TObject.hxx>

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

    Standard_EXPORT const MeshDS_Cell&          Cell() const;
    Standard_EXPORT ModelAbs_TypeOfModelisation Modelisation() const;
    Standard_EXPORT ModelAbs_TypeOfPhenomenon   Phenomenon() const;
    Standard_EXPORT void                        SetCell(const MeshDS_Cell& theCell);
    Standard_EXPORT void                        SetModelisation(const ModelAbs_TypeOfModelisation);
    Standard_EXPORT void                        SetPhenomenon(const ModelAbs_TypeOfPhenomenon);
private:

    MeshDS_Cell                     myCell;
    ModelAbs_TypeOfModelisation     myModelisation;
    ModelAbs_TypeOfPhenomenon       myPhenomenon;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TElement, ModelDS_TObject);

};


#endif // __ModelDS_TElement_hxx__
