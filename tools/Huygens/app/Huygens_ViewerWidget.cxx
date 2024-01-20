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
#include <Huygens_Desktop.hxx>
#include <Huygens_ViewerWidget.hxx>

// Spartacus
#include <Viewer3d.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_ViewerWidget::Huygens_ViewerWidget(Huygens_Desktop* theDesktop)
    : QMainWindow(theDesktop),
      myDesktop(theDesktop)
{
    myViewer = Viewer3d::CreateViewer();
    myContext = new AIS_InteractiveContext(myViewer);
    myView = myContext->CurrentViewer()->CreateView();
    //myViewWidget = new Viewer3d_ViewWidget(myView);
    //setCentralWidget(myViewWidget);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Huygens_ViewerWidget::~Huygens_ViewerWidget()
{

}

// ============================================================================
/*!
 *  \brief desktop()
*/
// ============================================================================
Huygens_Desktop* Huygens_ViewerWidget::desktop() const
{
    return myDesktop;
}

// ============================================================================
/*!
 *  \brief setDesktop()
*/
// ============================================================================
void Huygens_ViewerWidget::setDesktop(Huygens_Desktop *theDesktop)
{
    myDesktop = theDesktop;
}


