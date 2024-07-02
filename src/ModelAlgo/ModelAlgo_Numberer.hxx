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


#ifndef __ModelAlgo_Numberer_hxx__
#define __ModelAlgo_Numberer_hxx__

// Spartacus
#include <ModelAbs_TypeOfNumberer.hxx>
#include <ModelAlgo_Command.hxx>
#include <ModelDS_Mapping.hxx>
#include <ModelDS_Model.hxx>



// ============================================================================
/*!
 *  \brief ModelAlgo_Numberer
*/
// ============================================================================
class ModelAlgo_Numberer : public ModelAlgo_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelAlgo_Numberer(const ModelDS_Model& theModel,
                                       const ModelAbs_TypeOfNumberer theNumbererType);
    // destructors
    Standard_EXPORT ~ModelAlgo_Numberer();

public:

    Standard_EXPORT const ModelDS_Mapping&  Mapping() const;
    Standard_EXPORT operator                ModelDS_Mapping() const;

private:

    Standard_EXPORT void    PlainNumerer(const ModelDS_Model& theModel);

protected:

    ModelDS_Mapping                 myMapping;

};


#endif // __ModelAlgo_Numberer_hxx__
