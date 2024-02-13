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


#ifndef __MeshBuilder_MakeCell_hxx__
#define __MeshBuilder_MakeCell_hxx__

// Spartacus
#include <MeshBuilder_Command.hxx>
#include <MeshDS_Cell.hxx>
#include <MeshDS_Node.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeCell
*/
// ============================================================================
class MeshBuilder_MakeCell : public MeshBuilder_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeCell();
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeCell();

public:

    Standard_EXPORT const MeshDS_Cell&  Cell() const;

public:

    Standard_EXPORT operator            MeshDS_Cell() const;

protected:

    MeshDS_Cell     myCell;

};


#endif // __MeshBuilder_MakeCell_hxx__
