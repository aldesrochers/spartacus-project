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


// Spartacus
#include <MeshLib_MakeVertex2d.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeVertex2d::MeshLib_MakeVertex2d(const gp_Pnt2d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeVertex2d::~MeshLib_MakeVertex2d()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeVertex2d::Initialize(const gp_Pnt2d &thePoint)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeVertex(MeshDS::Vertex(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Vertex2d()
*/
// ============================================================================
const MeshDS_Vertex& MeshLib_MakeVertex2d::Vertex()
{
    return MeshDS::Vertex(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Vertex()
*/
// ============================================================================
MeshLib_MakeVertex2d::operator MeshDS_Vertex()
{
    return Vertex();
}
