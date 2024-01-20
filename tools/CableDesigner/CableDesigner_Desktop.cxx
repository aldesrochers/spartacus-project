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
#include <CableDesigner_Desktop.hxx>
#include <DB_ConnectionsManager.hxx>
#include <DBView_LoginDialog.hxx>
#include <FWK.hxx>
#include <Icons_Manager.hxx>

// Qt
#include <QMenu>
#include <QMenuBar>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
CableDesigner_Desktop::CableDesigner_Desktop(QWidget* theParent)
{
    initFileMenu();

    DB_ConnectionsManager* aManager = DB_ConnectionsManager::manager();
    cout << aManager->filePath().toStdString() << endl;
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
CableDesigner_Desktop::~CableDesigner_Desktop()
{

}

// ============================================================================
/*!
 *  \brief initFileMenu()
*/
// ============================================================================
void CableDesigner_Desktop::initFileMenu()
{
    QMenu* aMenu = new QMenu(tr("&File"));

    // login action
    QAction* aLoginAction = new QAction(Icons_Manager::manager()->icon(Icons::Login), tr("Login"));
    connect(aLoginAction, SIGNAL(triggered(bool)), this, SLOT(showLoginDialog()));
    aMenu->addAction(aLoginAction);

    // exit action
    QAction* anExitAction = new QAction(Icons_Manager::manager()->icon(Icons::Exit), tr("Exit"));
    connect(anExitAction, SIGNAL(triggered(bool)), this, SLOT(exitAction()));
    aMenu->addAction(anExitAction);

    menuBar()->addMenu(aMenu);
}

// ============================================================================
/*!
 *  \brief exitAction()
*/
// ============================================================================
void CableDesigner_Desktop::exitAction()
{
    this->close();
}

// ============================================================================
/*!
 *  \brief showLoginDialog()
*/
// ============================================================================
void CableDesigner_Desktop::showLoginDialog()
{
    DBView_LoginDialog* aDialog = new DBView_LoginDialog(this);
    aDialog->show();
}

