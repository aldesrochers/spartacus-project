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
#include <MeshBuilder_MakeVertex.hxx>
#include <MeshDS_Builder.hxx>
#include <MeshDS.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const gp_Pnt2d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const gp_Pnt& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const Standard_Real theX)
{
    Initialize(theX);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const Standard_Real theX,
                                               const Standard_Real theY)
{
    Initialize(theX, theY);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeVertex::MeshBuilder_MakeVertex(const Standard_Real theX,
                                               const Standard_Real theY,
                                               const Standard_Real theZ)
{
    Initialize(theX, theY, theZ);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeVertex::~MeshBuilder_MakeVertex()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const Standard_Real theX)
{
    Initialize(gp_Pnt1d(theX));
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const Standard_Real theX,
                                        const Standard_Real theY)
{
    Initialize(gp_Pnt2d(theX, theY));
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const Standard_Real theX,
                                        const Standard_Real theY,
                                        const Standard_Real theZ)
{
    Initialize(gp_Pnt(theX, theY, theZ));
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const gp_Pnt1d &thePoint)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeVertex(MeshDS::Vertex(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const gp_Pnt2d &thePoint)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeVertex(MeshDS::Vertex(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeVertex::Initialize(const gp_Pnt &thePoint)
{
    MeshDS_Builder aBuilder;
    aBuilder.MakeVertex(MeshDS::Vertex(myObject), thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const MeshDS_Vertex& MeshBuilder_MakeVertex::Vertex()
{
    return MeshDS::Vertex(Object());
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Vertex()
*/
// ============================================================================
MeshBuilder_MakeVertex::operator MeshDS_Vertex()
{
    return Vertex();
}
