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

// Huygens
#include <Huygens_Displayer.hxx>

// OpenCascade
#include <OpenGl_GraphicDriver.hxx>
#include <OSD_Environment.hxx>

// Spartacus
#include <gp_Catenary.hxx>
#include <GC_MakeArcOfCatenary.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <AIS_Shape.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_Displayer::Huygens_Displayer(QWidget* theParent)
    : QMainWindow(theParent)
{

    // construct a graphic driver
    static Handle(OpenGl_GraphicDriver) aGraphicDriver;
    if (aGraphicDriver.IsNull()) {
        Handle(Aspect_DisplayConnection) aDisplayConnection;
#if !defined(_WIN32) && !defined(__WIN32__) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX))
        aDisplayConnection = new Aspect_DisplayConnection (OSD_Environment ("DISPLAY").Value());
#endif
        aGraphicDriver = new OpenGl_GraphicDriver (aDisplayConnection);
    }

    // create occ viewer
    myViewer = new V3d_Viewer(aGraphicDriver);
    myViewer->SetDefaultViewSize(1000.);

    // initialize context
    myContext = new AIS_InteractiveContext(myViewer);

    // initialize view
    myView = myContext->CurrentViewer()->CreateView();

    // create catenary
    gp_Catenary aCatenary;
    aCatenary.SetParameter(1000.);
    GC_MakeArcOfCatenary aBuilder(aCatenary, -200, 200);
    Handle(Geom_TrimmedCurve) aCurve = aBuilder.Value();
    BRepLib_MakeEdge edgeBuilder(aCurve);
    TopoDS_Shape aShape = edgeBuilder.Shape();
    Handle(AIS_Shape) aDisplayShape = new AIS_Shape(aShape);
    myContext->Display(aDisplayShape, Standard_True);
    myView->FitAll();

    // initialize scene
    myScene = new Huygens_Scene(myView);
    setCentralWidget(myScene);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Huygens_Displayer::~Huygens_Displayer()
{

}
