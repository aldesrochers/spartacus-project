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


#ifndef __ModelDS_Tool_hxx__
#define __ModelDS_Tool_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <MeshDS_Vertex.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_ListOfObject.hxx>
#include <ModelDS_Node.hxx>
#include <ModelDS_Model.hxx>
#include <ModelDS_SequenceOfObject.hxx>


// ============================================================================
/*!
 *  \brief ModelDS_Tool
*/
// ============================================================================
class ModelDS_Tool
{

public:

    DEFINE_STANDARD_ALLOC;

public:

    static Standard_EXPORT const ModelDS_SequenceOfObject&  DOFs(const ModelDS_Element& theElement);

    static Standard_EXPORT const ModelDS_ListOfObject&      Elements(const ModelDS_Model& theModel);

    static Standard_EXPORT const MeshDS_Vertex&             Vertex(const ModelDS_Node& theNode);

};


#endif // __ModelDS_Tool_hxx__
