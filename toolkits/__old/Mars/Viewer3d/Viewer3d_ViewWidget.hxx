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


#ifndef __Viewer3d_ViewWidget_hxx__
#define __Viewer3d_ViewWidget_hxx__

// Qt
#include <QColor>
#include <QMap>
#include <QWidget>

// OpenCascade
#include <AIS_InteractiveContext.hxx>
#include <AIS_ViewController.hxx>
#include <V3d_View.hxx>

// Spartacus
#include <Viewer3d_ActionTriggers.hxx>
#include <Viewer3d_ViewAction.hxx>


// ============================================================================
/*!
 *  \brief Viewer3d_ViewWidget
 *  Class implementation of a view.
*/
// ============================================================================
class Standard_EXPORT Viewer3d_ViewWidget : public QWidget
{
    Q_OBJECT

public:
    // constructors
    Viewer3d_ViewWidget(QWidget* theParent = nullptr);
    Viewer3d_ViewWidget(Handle(AIS_InteractiveContext) theContext,
                        QWidget* theParent = nullptr);
    // destructors
    ~Viewer3d_ViewWidget();

public:

    virtual QPaintEngine*           paintEngine() const override;

public:

    Viewer3d_ActionTriggers         actionTriggers() const;
    Viewer3d_ViewAction             currentAction() const;
    void                            setActionTriggers(const Viewer3d_ActionTriggers& theActionTriggers);
    void                            setBackgroundColor(const QColor& theColor);
    void                            setCurrentAction(const Viewer3d_ViewAction theAction);
    void                            setView(Handle(V3d_View) theView);
    Handle(V3d_View)                view();

public slots:

    void                            fitAll();

protected:

    virtual bool                    event(QEvent* theEvent) override;
    virtual void                    mouseMoveEvent(QMouseEvent* theEvent) override;
    virtual void                    mousePressEvent(QMouseEvent* theEvent) override;
    virtual void                    mouseReleaseEvent(QMouseEvent* theEvent) override;
    virtual void                    paintEvent(QPaintEvent* theEvent) override;
    virtual void                    resizeEvent(QResizeEvent* theEvent) override;
    virtual void                    wheelEvent(QWheelEvent* theEvent) override;

private:

    virtual void                    initAttributes();
    virtual void                    initView();


private:

    Viewer3d_ActionTriggers         myActionTriggers;
    Handle(AIS_InteractiveContext)  myContext;
    AIS_ViewController*             myController;
    Viewer3d_ViewAction             myCurrentAction;
    Handle(V3d_View)                myView;

};

#endif // __Viewer3d_ViewWidget_hxx__
