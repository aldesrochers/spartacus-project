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
#include <BRepAdaptor_Curve.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <MeshLib_MakeMesh.hxx>
#include <TopExp.hxx>
#include <TopoDS.hxx>
#include <Geom2dAdaptor_Curve.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeMesh::MeshLib_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeMesh::~MeshLib_MakeMesh()
{

}

// ============================================================================
/*!
 *  \brief Perform()
*/
// ============================================================================
void MeshLib_MakeMesh::Perform()
{

    // perform edge tessellation
    TopTools_IndexedMapOfShape aMapOfEdges;
    TopExp::MapShapes(myShape, TopAbs_EDGE, aMapOfEdges);
    for(Standard_Integer i=1; i<=aMapOfEdges.Size(); i++) {
        TopoDS_Edge anEdge = TopoDS::Edge(aMapOfEdges.FindKey(i));
        BRepAdaptor_Curve anAdaptor(anEdge);
        if(anAdaptor.IsCurveOnSurface()) {

        } else {
            GeomAdaptor_Curve aCurve(anAdaptor.Curve());
            GCPnts_UniformAbscissa anAlgo(aCurve, 1.);
            cout << anAlgo.NbPoints() << endl;
        }


    }



    cout << "MeshLib_MakeMesh::Perform()" << endl;
}

// ============================================================================
/*!
 *  \brief SetShape()
*/
// ============================================================================
void MeshLib_MakeMesh::SetShape(const TopoDS_Shape &theShape)
{
    myShape = theShape;
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& MeshLib_MakeMesh::Shape() const
{
    return myShape;
}
