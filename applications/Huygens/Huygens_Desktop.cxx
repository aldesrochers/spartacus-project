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

// Qt
#include <QMenu>
#include <QMenuBar>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Huygens_Desktop::Huygens_Desktop(QWidget* theParent)
    : QMainWindow(theParent)
{
    // initialize menus
    initFileMenu();
    initHelpMenu();
    // initialize views
    initDisplayer();
    initNavigator();

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Huygens_Desktop::~Huygens_Desktop()
{

}

// ============================================================================
/*!
 *  \brief initDisplayer()
*/
// ============================================================================
void Huygens_Desktop::initDisplayer()
{
    myDisplayer = new Huygens_Displayer();
    setCentralWidget(myDisplayer);
}

// ============================================================================
/*!
 *  \brief initFileMenu()
*/
// ============================================================================
void Huygens_Desktop::initFileMenu()
{
    QMenu* aMenu = menuBar()->addMenu(tr("&File"));

    // action : new
    QAction* newAction = aMenu->addAction(tr("New"));
    connect(newAction, SIGNAL(triggered(bool)), this, SLOT(newStudy()));

    // separator
    aMenu->addSeparator();

    // action : quit
    QAction* quitAction = aMenu->addAction(tr("Quit"));
    connect(quitAction, SIGNAL(triggered(bool)), this, SLOT(close()));
}

// ============================================================================
/*!
 *  \brief initHelpMenu()
*/
// ============================================================================
void Huygens_Desktop::initHelpMenu()
{
    QMenu* aMenu = menuBar()->addMenu(tr("&Help"));
}

// ============================================================================
/*!
 *  \brief initNavigator()
*/
// ============================================================================
void Huygens_Desktop::initNavigator()
{
    myNavigator = new Huygens_Navigator(this);
    addDockWidget(Qt::LeftDockWidgetArea, myNavigator);
}

// ============================================================================
/*!
 *  \brief newStudy()
*/
// ============================================================================
void Huygens_Desktop::newStudy()
{

}


