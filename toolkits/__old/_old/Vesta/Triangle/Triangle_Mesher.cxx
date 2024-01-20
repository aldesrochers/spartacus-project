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
#include <Triangle_Mesher.hxx>

// OpenCascade
#include <BRep_Tool.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopExp.hxx>

// triangle
#include <triangle.h>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Triangle_Mesher::Triangle_Mesher(const TopoDS_Face& theFace,
                                 const Triangle_Parameters& theParameters)
    : myError(Triangle_NoError),
      myIsDone(Standard_False)
{
    Handle(Geom_Surface) aSurface = BRep_Tool::Surface(theFace);
    GeomLib_IsPlanarSurface aTool(aSurface);
    if(!aTool.IsPlanar()) {
        cout << "FUCK" << endl;
    }

    // find vertices in face
    TopTools_IndexedMapOfShape aMapOfVertices;
    TopExp::MapShapes(theFace, TopAbs_VERTEX, aMapOfVertices);

    // triangle input
    struct triangulateio in, mid, out, vorout;
    in.numberofpoints = aMapOfVertices.Size();
    in.numberofpointattributes = 1;
    in.pointlist = (REAL *) malloc(in.numberofpoints * 2 * sizeof(REAL));
    in.pointmarkerlist = (int *) malloc(in.numberofpoints * sizeof(int));
    in.pointattributelist = (REAL *) malloc(in.numberofpoints *
                                            in.numberofpointattributes *
                                            sizeof(REAL));

    for(Standard_Integer i=1; i<=aMapOfVertices.Size(); i++) {
        TopoDS_Vertex aVertex = TopoDS::Vertex(aMapOfVertices.FindKey(i));
        gp_Pnt aPoint = BRep_Tool::Pnt(aVertex);
        GeomAPI_ProjectPointOnSurf aProjection(aPoint, aSurface);
        Standard_Real U,V;
        aProjection.Parameters(1,U,V);
        in.pointlist[(i-1)*2+0] = U;
        in.pointlist[(i-1)*2+1] = V;
        in.pointattributelist[(i-1)] = 0;
        in.pointmarkerlist[(i-1)] = 0;
    }

    in.numberofsegments = 0;
    in.numberofholes = 0;
    in.numberofregions = 0;

    mid.pointlist = (REAL *) NULL;
    mid.pointattributelist = (REAL *) NULL;
    mid.pointmarkerlist = (int *) NULL;
    mid.trianglelist = (int *) NULL;
    mid.triangleattributelist = (REAL *) NULL;
    mid.neighborlist = (int *) NULL;
    mid.segmentlist = (int *) NULL;
    mid.segmentmarkerlist = (int *) NULL;
    mid.edgelist = (int *) NULL;
    mid.edgemarkerlist = (int *) NULL;

    vorout.pointlist = (REAL *) NULL;
    vorout.pointattributelist = (REAL *) NULL;
    vorout.edgelist = (int *) NULL;
    vorout.normlist = (REAL *) NULL;

    triangulate("pczAa0.02evn", &in, &mid, &vorout);


    Standard_Integer nbNodes = mid.numberofpoints;
    for(Standard_Integer i=1; i<=nbNodes; i++) {
        Standard_Real U = mid.pointlist[(i-1)*2+0];
        Standard_Real V = mid.pointlist[(i-1)*2+1];
        gp_Pnt aPoint = aSurface->Value(U,V);
        cout << aPoint.X() << " " << aPoint.Y() << " " << aPoint.Z() << endl;

    }

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Triangle_Mesher::~Triangle_Mesher()
{

}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
Triangle_MesherError Triangle_Mesher::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief IsDone()
*/
// ============================================================================
Standard_Boolean Triangle_Mesher::IsDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief Parameters()
*/
// ============================================================================
const Triangle_Parameters& Triangle_Mesher::Parameters() const
{
    return myParameters;
}

// ============================================================================
/*!
 *  \brief SetDone()
*/
// ============================================================================
void Triangle_Mesher::SetDone()
{
    myIsDone = Standard_True;
}

// ============================================================================
/*!
 *  \brief SetNotDone()
*/
// ============================================================================
void Triangle_Mesher::SetNotDone()
{
    myIsDone = Standard_False;
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& Triangle_Mesher::Shape() const
{
    return myShape;
}
