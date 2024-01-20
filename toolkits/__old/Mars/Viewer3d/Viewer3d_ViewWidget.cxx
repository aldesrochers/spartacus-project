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

// Viewer
#include <Viewer3d_ViewWidget.hxx>
#include <Viewer3d_Window.hxx>

// Qt
#include <QMouseEvent>




// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Viewer3d_ViewWidget::Viewer3d_ViewWidget(QWidget* theParent)
    : QWidget(theParent)
{
    initAttributes();
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Viewer3d_ViewWidget::Viewer3d_ViewWidget(Handle(AIS_InteractiveContext) theContext,
                             QWidget* theParent)
    : QWidget(theParent),
      myContext(theContext)
{
    initAttributes();
    initView();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Viewer3d_ViewWidget::~Viewer3d_ViewWidget()
{

}

// ============================================================================
/*!
 *  \brief actionTriggers()
*/
// ============================================================================
Viewer3d_ActionTriggers Viewer3d_ViewWidget::actionTriggers() const
{
    return myActionTriggers;
}

// ============================================================================
/*!
 *  \brief currentAction()
*/
// ============================================================================
Viewer3d_ViewAction Viewer3d_ViewWidget::currentAction() const
{
    return myCurrentAction;
}

// ============================================================================
/*!
 *  \brief event()
*/
// ============================================================================
bool Viewer3d_ViewWidget::event(QEvent *theEvent)
{
    return QWidget::event(theEvent);
}

// ============================================================================
/*!
 *  \brief fitAll()
*/
// ============================================================================
void Viewer3d_ViewWidget::fitAll()
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
void Viewer3d_ViewWidget::initAttributes()
{
#if !defined(_WIN32) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX)) && QT_VERSION < 0x050000
  XSynchronize(x11Info().display(),true);
#endif
    //myContext = theContext;
    myController = new AIS_ViewController();

    setAttribute(Qt::WA_PaintOnScreen);
    setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_NativeWindow);
    setBackgroundRole(QPalette::NoRole);
    setFocusPolicy(Qt::StrongFocus);
    setMouseTracking(true);

    //SetAllowRotation(Standard_False);
}

// ============================================================================
/*!
 *  \brief initView()
 *  Initiative the widget internal view.
*/
// ============================================================================
void Viewer3d_ViewWidget::initView()
{
    myView = myContext->CurrentViewer()->CreateView();

    if(myView.IsNull())
        return;

    Handle(Viewer3d_Window) hWnd = new Viewer3d_Window(this);
    myView->SetWindow (hWnd);
    if (!hWnd->IsMapped())
        hWnd->Map();
    myView->MustBeResized();

    myView->TriedronDisplay(Aspect_TOTP_CENTER, Quantity_NOC_WHITE, 0.25);
}

// ============================================================================
/*!
 *  \brief mouseMoveEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::mouseMoveEvent(QMouseEvent *theEvent)
{
    if(myCurrentAction == Viewer3d_VA_Rotation) {
        myView->Rotation(theEvent->x(), theEvent->y());
    } else if(myCurrentAction == Viewer3d_VA_ZoomAtPoint) {
        myView->Zoom(0,0,1,1);
    }
}

// ============================================================================
/*!
 *  \brief mousePressEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::mousePressEvent(QMouseEvent *theEvent)
{
    if(theEvent->button() == myActionTriggers.Rotation) {
        myView->StartRotation(theEvent->pos().x(), theEvent->pos().y());
        setCurrentAction(Viewer3d_VA_Rotation);
    } else if (theEvent->button() == myActionTriggers.Zoom) {
        myView->StartZoomAtPoint(theEvent->pos().x(), theEvent->pos().y());
        setCurrentAction(Viewer3d_VA_ZoomAtPoint);
    }
}

// ============================================================================
/*!
 *  \brief mouseReleaseEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::mouseReleaseEvent(QMouseEvent *theEvent)
{
    if(myCurrentAction == Viewer3d_VA_Rotation) {
        setCurrentAction(Viewer3d_VA_Null);
    } else if(myCurrentAction == Viewer3d_VA_ZoomAtPoint) {
        setCurrentAction(Viewer3d_VA_Null);
    }
}

// ============================================================================
/*!
 *  \brief paintEngine()
*/
// ============================================================================
QPaintEngine* Viewer3d_ViewWidget::paintEngine() const
{
    return nullptr;
}

// ============================================================================
/*!
 *  \brief paintEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::paintEvent(QPaintEvent *theEvent)
{
    if(myView.IsNull())
        return;
    myView->InvalidateImmediate();
    myController->FlushViewEvents(myContext, myView, true);
}

// ============================================================================
/*!
 *  \brief resizeEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::resizeEvent(QResizeEvent *theEvent)
{
    if(!myView.IsNull())
        myView->MustBeResized();
}

// ============================================================================
/*!
 *  \brief setActionTriggers()
*/
// ============================================================================
void Viewer3d_ViewWidget::setActionTriggers(const Viewer3d_ActionTriggers &theActionTriggers)
{
    myActionTriggers = theActionTriggers;
}

// ============================================================================
/*!
 *  \brief setBackgroundColor()
 *  Set view's background color.
*/
// ============================================================================
void Viewer3d_ViewWidget::setBackgroundColor(const QColor &theColor)
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
 *  \brief setCurrentAction()
*/
// ============================================================================
void Viewer3d_ViewWidget::setCurrentAction(const Viewer3d_ViewAction theAction)
{
    myCurrentAction = theAction;
}

// ============================================================================
/*!
 *  \brief setView()
 *  Set the view used by the widget.
*/
// ============================================================================
void Viewer3d_ViewWidget::setView(Handle(V3d_View) theView)
{
    myView = theView;
}

// ============================================================================
/*!
 *  \brief view()
*/
// ============================================================================
Handle(V3d_View) Viewer3d_ViewWidget::view()
{
    return myView;
}

// ============================================================================
/*!
 *  \brief wheelEvent()
*/
// ============================================================================
void Viewer3d_ViewWidget::wheelEvent(QWheelEvent *theEvent)
{
    const Graphic3d_Vec2i aPosition(theEvent->position().x(), theEvent->position().y());
    if(!myView.IsNull()) {
        Aspect_ScrollDelta aDelta(aPosition, theEvent->angleDelta().y() / 8);
        myController->UpdateZoom(aDelta);
    }
    update();
}

