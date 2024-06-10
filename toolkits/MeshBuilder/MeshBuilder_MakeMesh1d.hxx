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


#ifndef __MeshBuilder_MakeMesh1d_hxx__
#define __MeshBuilder_MakeMesh1d_hxx__

// Spartacus
#include <gp_Pnt1d.hxx>
#include <MeshBuilder_MakeObject.hxx>
#include <MeshBuilder_MeshError.hxx>
#include <MeshDS_Mesh.hxx>
#include <MeshTools_DataMapOfIntegerObject.hxx>


// ============================================================================
/*!
 *  \brief MeshBuilder_MakeMesh1d
*/
// ============================================================================
class MeshBuilder_MakeMesh1d : public MeshBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshBuilder_MakeMesh1d();
    // destructors
    Standard_EXPORT ~MeshBuilder_MakeMesh1d();

public:

    Standard_EXPORT const MeshDS_Mesh&      Mesh() const;
    Standard_EXPORT operator                MeshDS_Mesh() const;

public:

    Standard_EXPORT Standard_Integer        Add(const gp_Pnt1d& thePoint);
    Standard_EXPORT MeshBuilder_MeshError   Error() const;


protected:

    Standard_EXPORT void        SetError(const MeshBuilder_MeshError theError);

private:

    MeshBuilder_MeshError               myError;
    MeshTools_DataMapOfIntegerObject    myNodes;

};


#endif // __MeshBuilder_MakeMesh1d_hxx__
