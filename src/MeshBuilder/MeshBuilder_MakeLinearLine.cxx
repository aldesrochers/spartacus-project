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

#include <iostream>
using namespace std;

// Spartacus
#include <MeshAdaptor_Vertex.hxx>
#include <MeshBuilder_MakeLinearLine.hxx>
#include <MeshDS_Builder.hxx>

// OpenCascade
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <TopoDS_Edge.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshBuilder_MakeLinearLine::MeshBuilder_MakeLinearLine(const MeshDS_Vertex& theVertex1,
                                                       const MeshDS_Vertex& theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshBuilder_MakeLinearLine::~MeshBuilder_MakeLinearLine()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshBuilder_MakeLinearLine::Initialize(const MeshDS_Vertex &theVertex1,
                                            const MeshDS_Vertex &theVertex2)
{
    MeshAdaptor_Vertex anAdaptor1(theVertex1);
    MeshAdaptor_Vertex anAdaptor2(theVertex2);

    // check if valid dimensionality
    if(anAdaptor1.Dimensionality() != anAdaptor2.Dimensionality()) {
        myError = MeshBuilder_CellDimensionalityError;
        return;
    }






}
