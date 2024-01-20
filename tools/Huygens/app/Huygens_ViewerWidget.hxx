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


#ifndef __Huygens_ViewerWidget_hxx__
#define __Huygens_ViewerWidget_hxx__

// Qt
#include <QMainWindow>

// Spartacus
#include <Viewer3d.hxx>
#include <Viewer3d_ViewWidget.hxx>

// Forward declarations
class Huygens_Desktop;


// ============================================================================
/*!
 *  \brief Huygens_ViewerWidget
*/
// ============================================================================
class Huygens_ViewerWidget : public QMainWindow
{
    Q_OBJECT;

public:
    // constructors
    Huygens_ViewerWidget(Huygens_Desktop* theDesktop = nullptr);
    // destructors
    ~Huygens_ViewerWidget();

public:

    Huygens_Desktop*        desktop() const;
    void                    setDesktop(Huygens_Desktop* theDesktop);

private:

    Handle(AIS_InteractiveContext)  myContext;
    Huygens_Desktop*                myDesktop;
    Handle(V3d_View)                myView;
    Viewer3d_ViewWidget*            myViewWidget;
    Handle(V3d_Viewer)              myViewer;


};

#endif  // __Huygens_ViewerWidget_hxx__
