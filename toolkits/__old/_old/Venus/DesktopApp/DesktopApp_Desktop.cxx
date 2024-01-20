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
#include <DesktopApp_AboutDialog.hxx>
#include <DesktopApp_Desktop.hxx>
#include <DesktopApp_PreferencesDialog.hxx>

// Qt
#include <QMenu>
#include <QMenuBar>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DesktopApp_Desktop::DesktopApp_Desktop(QWidget* theParent)
    : QMainWindow(theParent)
{
    Q_INIT_RESOURCE(DesktopApp_Icons);
    // initialize standard menus
    initFileMenu();
    initHelpMenu();
    // initialize standard dialogs
    initAboutDialog();
    initPreferencesDialog();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DesktopApp_Desktop::~DesktopApp_Desktop()
{

}

// ============================================================================
/*!
 *  \brief initAboutDialog()
*/
// ============================================================================
void DesktopApp_Desktop::initAboutDialog()
{
    myAboutDialog = new DesktopApp_AboutDialog(this);
}

// ============================================================================
/*!
 *  \brief initFileMenu()
*/
// ============================================================================
void DesktopApp_Desktop::initFileMenu()
{
    QMenu* aMenu = menuBar()->addMenu(tr("&File"));

    // preferences
    QAction* actionPreferences = aMenu->addAction(QIcon(":/icons/DesktopApp_Preferences.png"),
                                                  tr("Preferences"));
    connect(actionPreferences, SIGNAL(triggered(bool)), this, SLOT(showPreferencesDialog()));

    // exit
    QAction* actionExit = aMenu->addAction(QIcon(":/icons/DesktopApp_Exit.png"),
                                           tr("Exit"));
    connect(actionExit, SIGNAL(triggered(bool)), this, SLOT(close()));
}

// ============================================================================
/*!
 *  \brief initHelpMenu()
*/
// ============================================================================
void DesktopApp_Desktop::initHelpMenu()
{
    QMenu* aMenu = menuBar()->addMenu(tr("&Help"));

    // about
    QAction* actionAbout = aMenu->addAction(QIcon(":/icons/DesktopApp_About.png"),
                                            tr("About"));
    connect(actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAboutDialog()));
}

// ============================================================================
/*!
 *  \brief initPreferencesDialog()
*/
// ============================================================================
void DesktopApp_Desktop::initPreferencesDialog()
{
    myPreferencesDialog = new DesktopApp_PreferencesDialog(this);
}

// ============================================================================
/*!
 *  \brief showAboutDialog()
*/
// ============================================================================
void DesktopApp_Desktop::showAboutDialog()
{
    if(myAboutDialog)
        myAboutDialog->show();
}

// ============================================================================
/*!
 *  \brief showPreferencesDialog()
*/
// ============================================================================
void DesktopApp_Desktop::showPreferencesDialog()
{
    if(myPreferencesDialog)
        myPreferencesDialog->show();
}

