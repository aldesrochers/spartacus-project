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
#include <DB_ConnectionsManager.hxx>
#include <FWK.hxx>

// Qt
#include <QDir>

// Singleton
DB_ConnectionsManager* DB_ConnectionsManager::myManager = nullptr;


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DB_ConnectionsManager::DB_ConnectionsManager()
{

    // load settings from file
    mySettings = new QSettings(filePath(), QSettings::NativeFormat);

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DB_ConnectionsManager::~DB_ConnectionsManager()
{

}

// ============================================================================
/*!
 *  \brief fileName()
*/
// ============================================================================
QString DB_ConnectionsManager::fileName()
{
    return QString("db_connections");
}

// ============================================================================
/*!
 *  \brief filePath()
*/
// ============================================================================
QString DB_ConnectionsManager::filePath()
{
    return FWK::UserRootPath() + QDir::separator() + fileName();
}

// ============================================================================
/*!
 *  \brief manager()
 *  Get a reference to the connection manager.
*/
// ============================================================================
DB_ConnectionsManager* DB_ConnectionsManager::manager()
{
    if(myManager == nullptr)
        myManager = new DB_ConnectionsManager();
    return myManager;
}
