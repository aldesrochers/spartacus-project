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
#include <MeshDS.hxx>
#include <MeshLib_EdgeBuilder.hxx>

// OpenCascade
#include <Standard_NotImplemented.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshLib_EdgeBuilder::MeshLib_EdgeBuilder(const MeshDS_Vertex& theVertex1,
                                         const MeshDS_Vertex& theVertex2)
{
    Initialize(theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshLib_EdgeBuilder::~MeshLib_EdgeBuilder()
{

}

// ============================================================================
/*!
 *  \brief Edge()
*/
// ============================================================================
const MeshDS_Edge& MeshLib_EdgeBuilder::Edge()
{
    return myEdge;
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
MeshLib_EdgeError MeshLib_EdgeBuilder::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_EdgeBuilder::Initialize(const MeshDS_Vertex &theVertex1,
                                     const MeshDS_Vertex &theVertex2)
{
    MeshAdaptor_Vertex anAdaptor1(theVertex1);
    MeshAdaptor_Vertex anAdaptor2(theVertex2);
    if(anAdaptor1.IsPoint1d() && anAdaptor2.IsPoint1d()) {
        // make 1d line
        throw Standard_NotImplemented("MeshLib_EdgeBuilder::Initialize()");
    } else if(anAdaptor1.IsPoint2d() && anAdaptor2.IsPoint2d()) {
        // make 2d line
    } else if(anAdaptor1.IsPoint3d() && anAdaptor2.IsPoint3d()) {
        // make 3d line
        throw Standard_NotImplemented("MeshLib_EdgeBuilder::Initialize()");
    } else {
        throw Standard_DomainError("MeshLib_EdgeBuilder::Initialize()");
    }

    /*
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
    */
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_EdgeBuilder::Initialize(const gp_Lin2d &theLine,
                                     const MeshDS_Vertex &theVertex1,
                                     const MeshDS_Vertex &theVertex2)
{
    Handle(Geom2d_Line) aLine = new Geom2d_Line(theLine);
    Initialize(aLine, theVertex1, theVertex2);
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MeshLib_EdgeBuilder::Initialize(const Handle(Geom2d_Line)& theLine,
                                     const MeshDS_Vertex &theVertex1,
                                     const MeshDS_Vertex &theVertex2)
{

}

// ============================================================================
/*!
 *  \brief operator MeshDS_Edge()
*/
// ============================================================================
MeshLib_EdgeBuilder::operator MeshDS_Edge()
{
    return Edge();
}
