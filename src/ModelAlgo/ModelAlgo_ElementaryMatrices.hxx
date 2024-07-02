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


#ifndef __ModelAlgo_ElementaryMatrices_hxx__
#define __ModelAlgo_ElementaryMatrices_hxx__

// Spartacus
#include <ModelAbs_TypeOfMatrix.hxx>
#include <ModelAbs_TypeOfNumberer.hxx>
#include <ModelAlgo_Command.hxx>
#include <ModelDS_Model.hxx>

// ============================================================================
/*!
 *  \brief ModelAlgo_ElementaryMatrices
*/
// ============================================================================
class ModelAlgo_ElementaryMatrices : public ModelAlgo_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelAlgo_ElementaryMatrices();
    // destructors
    Standard_EXPORT ~ModelAlgo_ElementaryMatrices();

public:

    Standard_EXPORT Standard_Boolean    Perform();
    Standard_EXPORT void                SetModel(const ModelDS_Model& theModel);

private:

    ModelAbs_TypeOfMatrix       myMatrixType;
    ModelDS_Model               myModel;
    ModelAbs_TypeOfNumberer     myNumbererType;

};


#endif // __ModelAlgo_ElementaryMatrices_hxx__
