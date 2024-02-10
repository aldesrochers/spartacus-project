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
#include <BRepPolyAPI_MakePentahedron.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
BRepPolyAPI_MakePentahedron::BRepPolyAPI_MakePentahedron(const TopoDS_Vertex& theVertex1,
                                                         const TopoDS_Vertex& theVertex2,
                                                         const TopoDS_Vertex& theVertex3,
                                                         const TopoDS_Vertex& theVertex4,
                                                         const TopoDS_Vertex& theVertex5,
                                                         const TopoDS_Vertex& theVertex6)
    : myPentahedron(theVertex1, theVertex2, theVertex3,
                    theVertex4, theVertex5, theVertex6)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
BRepPolyAPI_MakePentahedron::~BRepPolyAPI_MakePentahedron()
{

}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void BRepPolyAPI_MakePentahedron::Build(const Message_ProgressRange &theRange)
{
    if(myPentahedron.IsDone()) {
        myShape = myPentahedron.Shape();
        Done();
    }
}

// ============================================================================
/*!
 *  \brief Pentahedron()
*/
// ============================================================================
const BRepPoly_MakePentahedron &BRepPolyAPI_MakePentahedron::Pentahedron() const
{
    return myPentahedron;
}
