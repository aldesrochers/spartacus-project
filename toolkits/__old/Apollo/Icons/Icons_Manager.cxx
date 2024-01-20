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
#include <FWK.hxx>
#include <Icons_Manager.hxx>

// Qt
#include <QDir>
#include <QResource>

// Singleton
Icons_Manager* Icons_Manager::myManager = nullptr;


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Icons_Manager::Icons_Manager()
{
    // register resources
    if(!QResource::registerResource(libraryFilePath(), "/spartacus-icons")) {
        qWarning() << "Icons_Manager::Could not register resources.";
    }
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Icons_Manager::~Icons_Manager()
{
    // unregister resources
    if(!QResource::unregisterResource(libraryFilePath(), "/spartacus-icons")) {
        qWarning() << "Icons_Manager::Could not unregister resources.";
    }
}

// ============================================================================
/*!
 *  \brief icon()
 *  Utility function to access icon directory.
*/
// ============================================================================
QIcon Icons_Manager::icon(const Icons theIcon) const
{
    return QIcon(iconFilePath(theIcon));
}

// ============================================================================
/*!
 *  \brief iconFileName()
 *  Get the file name of the icon in the library rcc file.
*/
// ============================================================================
QString Icons_Manager::iconFileName(const Icons theIcon) const
{
    switch (theIcon) {
    case Icons::DB_Connection:
        return QString("DB_Connection.png");
    case Icons::Exit:
        return QString("Exit.png");
    case Icons::Login:
        return QString("Login.png");
    default:
        return QString();
    }
}

// ============================================================================
/*!
 *  \brief iconFilePath()
 *  Get the absolute reference path to the icon.
*/
// ============================================================================
QString Icons_Manager::iconFilePath(const Icons theIcon) const
{
    return QString(":/spartacus-icons/") + iconFileName(theIcon);
}

// ============================================================================
/*!
 *  \brief libraryFilePath()
 *  Get the absolute path to the icons library.
*/
// ============================================================================
QString Icons_Manager::libraryFilePath()
{
    return FWK::StandardPath(FWK_LibraryDirPath)
           + QDir::separator() + QString("Icons.rcc");
}

// ============================================================================
/*!
 *  \brief manager()
 *  Get a reference to the singleton instance of the icons manager.
*/
// ============================================================================
Icons_Manager *Icons_Manager::manager() {
    if(myManager == nullptr)
        myManager = new Icons_Manager();
    return myManager;
}
