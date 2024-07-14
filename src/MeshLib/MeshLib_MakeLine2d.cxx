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
#include <MeshAdaptor_Vertex.hxx>
#include <MeshLib_MakeLine2d.hxx>
#include <MeshDS.hxx>
#include <MeshDS_Builder.hxx>

// OpenCascade
#include <gp_Lin2d.hxx>
#include <Geom2d_Line.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_MakeLine2d::MeshLib_MakeLine2d(const MeshDS_Vertex& theVertex1,
                                       const MeshDS_Vertex& theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_MakeLine2d::~MeshLib_MakeLine2d()
{

}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const MeshDS_Edge& MeshLib_MakeLine2d::Edge()
{
    return MeshDS::Edge(Object());
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_MakeLine2d::Initialize(const MeshDS_Vertex &theVertex1,
                                    const MeshDS_Vertex &theVertex2)
{
    gp_Pnt2d P1 = MeshAdaptor_Vertex(theVertex1).Point2d();
    gp_Pnt2d P2 = MeshAdaptor_Vertex(theVertex2).Point2d();
    Standard_Real L = P1.Distance(P2);
    if(L <= gp::Resolution()) {
        myError = MeshLib_LineThroughIdenticPointsError;
        return;
    }
    gp_Lin2d LG(P1, gp_Vec2d(P1, P2));
    Handle(Geom2d_Line) LO = new Geom2d_Line(LG);

    MeshDS_Builder aBuilder;
    MeshDS_Edge& anEdge = MeshDS::Edge(myObject);
    aBuilder.MakeEdge(anEdge, LO);
    aBuilder.AddVertex(anEdge, theVertex1);
    aBuilder.AddVertex(anEdge, theVertex2);

    myError = MeshLib_LineNoError;
    SetDone();
}

// ============================================================================
/*!
 *  \brief operator MeshDS_Edge()
*/
// ============================================================================
MeshLib_MakeLine2d::operator MeshDS_Edge()
{
    return Edge();
}
