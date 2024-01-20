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


// Viewer
#include <Huygens_Scene.hxx>
#include <Huygens_ViewWindow.hxx>

// Qt
#include <QMouseEvent>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_Scene::Huygens_Scene(QWidget* theParent)
    : QWidget(theParent)
{
    initAttributes();
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_Scene::Huygens_Scene(Handle(V3d_View) theView,
                             QWidget* theParent)
    : QWidget(theParent),
      myView(theView)
{
    initAttributes();
    initView();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Huygens_Scene::~Huygens_Scene()
{

}

// ============================================================================
/*!
 *  \brief fitAll()
*/
// ============================================================================
void Huygens_Scene::fitAll()
{
    if(myView.IsNull())
        return;
    myView->FitAll();
    myView->ZFitAll();
}

// ============================================================================
/*!
 *  \brief initAttributes()
 *  Initialize widget attributes. Called by constructors.
*/
// ============================================================================
void Huygens_Scene::initAttributes()
{
    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_NativeWindow);
    setBackgroundRole(QPalette::NoRole);
    setFocusPolicy(Qt::StrongFocus);
    setMouseTracking(true);
}

// ============================================================================
/*!
 *  \brief initView()
 *  Initiative the widget internal view.
*/
// ============================================================================
void Huygens_Scene::initView()
{
    if(myView.IsNull())
        return;

    Handle(Huygens_ViewWindow) hWnd = new Huygens_ViewWindow(this);
    myView->SetWindow (hWnd);
    if (!hWnd->IsMapped())
        hWnd->Map();

    myView->TriedronDisplay(Aspect_TOTP_CENTER, Quantity_NOC_WHITE, 0.25);
}

// ============================================================================
/*!
 *  \brief mouseMoveEvent()
*/
// ============================================================================
void Huygens_Scene::mouseMoveEvent(QMouseEvent *theEvent)
{
    myView->Rotation(theEvent->x(), theEvent->y());
}

// ============================================================================
/*!
 *  \brief mousePressEvent()
*/
// ============================================================================
void Huygens_Scene::mousePressEvent(QMouseEvent *theEvent)
{
    if(theEvent->button() == Qt::RightButton)
        myView->StartRotation(theEvent->pos().x(), theEvent->pos().y());
}

// ============================================================================
/*!
 *  \brief mouseReleaseEvent()
*/
// ============================================================================
void Huygens_Scene::mouseReleaseEvent(QMouseEvent *theEvent)
{

}

// ============================================================================
/*!
 *  \brief paintEngine()
*/
// ============================================================================
QPaintEngine* Huygens_Scene::paintEngine() const
{
    return nullptr;
}

// ============================================================================
/*!
 *  \brief paintEvent()
*/
// ============================================================================
void Huygens_Scene::paintEvent(QPaintEvent *theEvent)
{
    if(myView.IsNull())
        return;
    myView->InvalidateImmediate();
    //FlushViewEvents(myContext, myView, true);
}

// ============================================================================
/*!
 *  \brief resizeEvent()
*/
// ============================================================================
void Huygens_Scene::resizeEvent(QResizeEvent *theEvent)
{
    //if(!myView.IsNull())
    //    myView->MustBeResized();
}

// ============================================================================
/*!
 *  \brief setBackgroundColor()
 *  Set view's background color.
*/
// ============================================================================
void Huygens_Scene::setBackgroundColor(const QColor &theColor)
{
    if(myView.IsNull())
        return;
    Standard_Real V1 = (Standard_Real) theColor.redF();
    Standard_Real V2 = (Standard_Real) theColor.greenF();
    Standard_Real V3 = (Standard_Real) theColor.blueF();
    myView->SetBackgroundColor(Quantity_TOC_RGB, V1, V2, V3);
}

// ============================================================================
/*!
 *  \brief setBackgroundColor()
 *  Set view's background color.
*/
// ============================================================================
//void Huygens_Scene::setBackgroundColor(const Quantity_Color& theColor)
//{
//    if(myView.IsNull())
//        return;
//    myView->SetBackgroundColor(theColor);
//}

// ============================================================================
/*!
 *  \brief setView()
 *  Set the view used by the widget.
*/
// ============================================================================
void Huygens_Scene::setView(Handle(V3d_View) theView)
{
    myView = theView;
}

// ============================================================================
/*!
 *  \brief view()
*/
// ============================================================================
Handle(V3d_View) Huygens_Scene::view()
{
    return myView;
}

