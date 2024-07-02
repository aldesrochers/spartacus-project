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


#ifndef __ModelAlgo_PlainNumberer_hxx__
#define __ModelAlgo_PlainNumberer_hxx__

// Spartacus
#include <ModelAlgo_Numberer.hxx>



// ============================================================================
/*!
 *  \brief ModelAlgo_PlainNumberer
*/
// ============================================================================
class ModelAlgo_PlainNumberer : public ModelAlgo_Numberer
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelAlgo_PlainNumberer(const ModelDS_Model& theModel);
    // destructors
    Standard_EXPORT ~ModelAlgo_PlainNumberer();

private:

    Standard_EXPORT void    Initialize(const ModelDS_Model& theModel);

};


#endif // __ModelAlgo_PlainNumberer_hxx__
