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


#ifndef __MaterialLib_MakeMaterial_hxx__
#define __MaterialLib_MakeMaterial_hxx__

// Spartacus
#include <MaterialLib_Command.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Material.hxx>

// ============================================================================
/*!
 *  \brief MaterialLib_MakeMaterial
*/
// ============================================================================
class MaterialLib_MakeMaterial : public MaterialLib_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MaterialLib_MakeMaterial();
    // destructors
    Standard_EXPORT ~MaterialLib_MakeMaterial();

public:

    Standard_EXPORT void                        Build();
    Standard_EXPORT const ModelDS_Material&     Material();

public:

    Standard_EXPORT operator ModelDS_Material();

protected:

    ModelDS_Builder         myBuilder;
    ModelDS_Material        myMaterial;

};

#endif // __MaterialLib_MakeMaterial_hxx__
