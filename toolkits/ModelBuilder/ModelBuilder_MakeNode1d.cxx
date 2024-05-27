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
#include <ModelBuilder_MakeNode1d.hxx>
#include <ModelDS_Builder.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::ModelBuilder_MakeNode1d()
{
    Initialize();
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::ModelBuilder_MakeNode1d(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::ModelBuilder_MakeNode1d(const Standard_Real theX)
{
    Initialize(theX);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::~ModelBuilder_MakeNode1d()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Initialize()
{
    Initialize(0.);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Initialize(const gp_Pnt1d& thePoint)
{
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(myNode, thePoint);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Initialize(const Standard_Real theX)
{
    Initialize(gp_Pnt1d(theX));
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelBuilder_MakeNode1d::Node() const
{
    return myNode;
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Node()
*/
// ============================================================================
ModelBuilder_MakeNode1d::operator ModelDS_Node() const
{
    return Node();
}
