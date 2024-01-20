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
#include <ResMgr_Manager.hxx>

// Singleton
ResMgr_Manager* ResMgr_Manager::myManager = nullptr;


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ResMgr_Manager::ResMgr_Manager()
{
    // initialize resources
    Q_INIT_RESOURCE(Icons);

    // register resources in manager
    mapIconsToManager();
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ResMgr_Manager::~ResMgr_Manager()
{

}

// ============================================================================
/*!
 *  \brief getManager()
 *  Get a reference to the singleton resources manager.
*/
// ============================================================================
ResMgr_Manager* ResMgr_Manager::getManager()
{
    if(myManager == nullptr)
        myManager = new ResMgr_Manager();
    return myManager;
}

// ============================================================================
/*!
 *  \brief icon()
*/
// ============================================================================
QIcon ResMgr_Manager::icon(const ResMgr_IconType theType) const
{
    QString aFileName = iconFileName(theType);
    return icon(aFileName);
}

// ============================================================================
/*!
 *  \brief icon()
*/
// ============================================================================
QIcon ResMgr_Manager::icon(const QString &theFileName) const
{
    return QIcon(theFileName);
}

// ============================================================================
/*!
 *  \brief iconFileName()
*/
// ============================================================================
QString ResMgr_Manager::iconFileName(const ResMgr_IconType theType) const
{
    return myIcons.value(theType);
}

// ============================================================================
/*!
 *  \brief mapIcon()
*/
// ============================================================================
void ResMgr_Manager::mapIcon(const ResMgr_IconType theType,
                             const QString &theFileName)
{
    myIcons.insert(theType, theFileName);
}

// ============================================================================
/*!
 *  \brief mapIconsToManager()
*/
// ============================================================================
void ResMgr_Manager::mapIconsToManager()
{
    mapIcon(ResMgr_ICON_DatabaseSettings, ":/DatabaseSettings.png");
    mapIcon(ResMgr_ICON_Exit, ":/Exit.png");
    mapIcon(ResMgr_ICON_LocalCluster, ":/LocalCluster.png");
    mapIcon(ResMgr_ICON_Login, ":/Login.png");
    mapIcon(ResMgr_ICON_Logout, ":/Logout.png");
    mapIcon(ResMgr_ICON_RemoteCluster, ":/RemoteCluster.png");
}
