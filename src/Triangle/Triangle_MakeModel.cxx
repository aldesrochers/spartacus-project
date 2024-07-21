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
#include <Triangle_MakeModel.hxx>

// OpenCascade
#include <BRepAdaptor_Surface.hxx>
#include <BRep_Tool.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <TopExp.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopTools_IndexedMapOfShape.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_MakeModel::Triangle_MakeModel(const TopoDS_Face& theFace)
{
    Initialize(theFace);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_MakeModel::~Triangle_MakeModel()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void Triangle_MakeModel::Initialize(const TopoDS_Face &theFace)
{
    TopTools_IndexedMapOfShape faceVertices;
    TopTools_IndexedMapOfShape faceEdges;
    TopExp::MapShapes(theFace, TopAbs_VERTEX, faceVertices);
    TopExp::MapShapes(theFace, TopAbs_EDGE, faceEdges);

    Handle(Geom_Surface) aSurface = BRep_Tool::Surface(theFace);
    GeomLib_IsPlanarSurface anAlgo(aSurface);
    if(!anAlgo.IsPlanar())
        return;
    gp_Pln aPlane = anAlgo.Plan();

    GeomAPI_ProjectPointOnSurf aProjector;
    aProjector.Init(gp_Pnt(0.5,0.5,0.1), aSurface);
    cout << aProjector.NbPoints() << endl;
    gp_Pnt aPoint = aProjector.Point(1);

    cout << aPoint.X() << " " << aPoint.Y() << " " << aPoint.Z() << endl;
    cout << "OK" << endl;



    //return;

    // initialize model data
    myModel = new Triangle_Model();
    myModel->ResizeNodes(faceVertices.Size());
    myModel->ResizeSegments(faceEdges.Size());

    // process vertices, make 2d node, add to model
    for(Standard_Integer i=1; i<=faceVertices.Size(); i++) {
        TopoDS_Vertex aVertex = TopoDS::Vertex(faceVertices.FindKey(i));
        gp_Pnt2d aPoint = BRep_Tool::Parameters(aVertex, theFace);
        Handle(Triangle_Node) aNode = new Triangle_Node(aPoint);
        myModel->SetNode(i, aNode);
    }

    // process edges, make segment, add to model
    for(Standard_Integer i=1; i<=faceEdges.Size(); i++) {
        TopoDS_Edge anEdge = TopoDS::Edge(faceEdges.FindKey(i));
        TopoDS_Vertex aVertex1 = TopExp::FirstVertex(anEdge);
        TopoDS_Vertex aVertex2 = TopExp::LastVertex(anEdge);
        Standard_Integer aNode1 = faceVertices.FindIndex(aVertex1);
        Standard_Integer aNode2 = faceVertices.FindIndex(aVertex2);
        Handle(Triangle_Segment) aSegment = new Triangle_Segment(aNode1, aNode2);
        myModel->SetSegment(i, aSegment);
    }

    SetDone();
}

// ============================================================================
/*!
 *  \brief Model()
*/
// ============================================================================
const Handle(Triangle_Model)& Triangle_MakeModel::Model() const
{
    return myModel;
}
