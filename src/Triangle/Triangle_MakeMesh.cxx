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
#include <string>

// Spartacus
#include <Triangle_MakeMesh.hxx>

// OpenCascade
#include <Standard_CString.hxx>

// Triangle
#include <triangle.h>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_MakeMesh::Triangle_MakeMesh(const Handle(Triangle_Model)& theModel)
{
    Initialize(theModel);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_MakeMesh::~Triangle_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void Triangle_MakeMesh::Initialize(const Handle(Triangle_Model) &theModel)
{
    mySwitches += "N";
    mySwitches += "E";
    mySwitches += "a0.001";

    triangulateio in, out, vorout;

    // process nodes
    in.numberofpoints = theModel->NbNodes();
    in.pointlist = (REAL *) malloc(in.numberofpoints * 2 * sizeof(REAL));
    for(Standard_Integer i=1; i<=theModel->NbNodes(); i++) {
        Handle(Triangle_Node) aNode = theModel->Node(i);
        in.pointlist[(i-1)*2+0] = aNode->Point().X();
        in.pointlist[(i-1)*2+1] = aNode->Point().Y();
        cout << aNode->Point().X() << " " << aNode->Point().Y() << endl;
    }

    // process segments
    in.numberofsegments = theModel->NbSegments();
    in.segmentlist = (int *) malloc(in.numberofsegments * 2 * sizeof(int));
    for(Standard_Integer i=1; i<=theModel->NbSegments(); i++) {
        Handle(Triangle_Segment) aSegment = theModel->Segment(i);
        in.segmentlist[(i-1)*2+0] = aSegment->Node1();
        in.segmentlist[(i-1)*2+1] = aSegment->Node2();
    }

    triangulate((char*) mySwitches.ToCString(), &in, &out, &vorout);


}

// ============================================================================
/*!
 *  \brief Mesh()
*/
// ============================================================================
const Handle(Triangle_Mesh)& Triangle_MakeMesh::Mesh() const
{
    return myMesh;
}

// ============================================================================
/*!
 *  \brief Switches()
*/
// ============================================================================
TCollection_AsciiString Triangle_MakeMesh::Switches() const
{
    TCollection_AsciiString aString;
    aString += "N";
    aString += "E";
    return aString;
}
