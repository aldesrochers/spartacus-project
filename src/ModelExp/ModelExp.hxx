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


#ifndef __ModelExp_hxx__
#define __ModelExp_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <ModelDS_Element.hxx>
#include <ModelDS_Node.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief ModelExp
*/
// ============================================================================
class ModelExp
{

public:

    DEFINE_STANDARD_ALLOC

public:

    static Standard_EXPORT void     MapDOFs(const ModelDS_Node& theNode,
                                            ModelTools_IndexedMapOfObject& theMap);

    static Standard_EXPORT void     MapModelizations(const ModelDS_Element& theElement,
                                                     ModelTools_IndexedMapOfObject& theMap);




};


#endif // __ModelExp_hxx__
