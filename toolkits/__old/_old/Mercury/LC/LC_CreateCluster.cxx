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
#include <LC.hxx>
#include <LC_Configuration.hxx>
#include <LC_CreateCluster.hxx>
#include <LC_UserTableModel.hxx>

// Qt
#include <QDir>
#include <QSqlDatabase>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
LC_CreateCluster::LC_CreateCluster()
    : myDatabasePrefix("spartacus"),
      myRootFileName("Spartacus_Cluster.slc"),
      myIsDone(false)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
LC_CreateCluster::~LC_CreateCluster()
{

}

// ============================================================================
/*!
 *  \brief adminPassword()
*/
// ============================================================================
QString LC_CreateCluster::adminPassword() const
{
    return myAdminPassword;
}

// ============================================================================
/*!
 *  \brief adminUserName()
*/
// ============================================================================
QString LC_CreateCluster::adminUserName() const
{
    return myAdminUserName;
}

// ============================================================================
/*!
 *  \brief create()
*/
// ============================================================================
bool LC_CreateCluster::create()
{
    // make cluster root directory
    QDir aDir(myDirectoryPath);
    if(!aDir.exists()) {
        if(!QDir().mkpath(myDirectoryPath)) {
            myError = LC_CreateCluster_InvalidDirectoryError;
            return false;
        }
    }

    // write cluster root configuration rootFile
    LC_Configuration aConfiguration;
    aConfiguration.CreationDate = QDateTime::currentDateTime();
    aConfiguration.DatabasePrefix = myDatabasePrefix;
    aConfiguration.ID = LC::formatID();
    aConfiguration.Version = LC::formatVersion();
    if(!LC::saveConfiguration(rootFilePath(), aConfiguration)) {
        myError = LC_CreateCluster_CreationError;
        return false;
    }

    // make sure subdirectory 'database' exists
    QString aDataPath = myDirectoryPath + QDir::separator() + QString(".databases");
    aDir = QDir(aDataPath);
    if(!aDir.exists()) {
        if(!QDir().mkpath(aDataPath)) {
            myError = LC_CreateCluster_InvalidDirectoryError;
            return false;
        }
    }

    // create 'admin' database
    QString aFileName = aDataPath + QDir::separator()
            + myDatabasePrefix + QString("_admin.db");
    QString aConnectionName("spartacus-create-localcluster");
    QSqlDatabase aDatabase = QSqlDatabase::addDatabase("QSQLITE", aConnectionName);
    aDatabase.setDatabaseName(aFileName);
    if(!aDatabase.open()) {
        myError = LC_CreateCluster_ConnectionError;
        return false;
    }


    // create 'users' table
    if(!LC_UserTableModel::createTable(aDatabase, "users")) {
        myError = LC_CreateCluster_TableCreationError;
        return false;
    }

    // add 'admin' user
    LC_UserTableModel* aModel = new LC_UserTableModel(0, aDatabase);
    aModel->setTable("users");
    aModel->setEditStrategy(LC_UserTableModel::OnRowChange);
    if(!aModel->addUser(myAdminUserName, myAdminPassword))
        return false;

    return true;
}

// ============================================================================
/*!
 *  \brief databasePrefix()
*/
// ============================================================================
QString LC_CreateCluster::databasePrefix() const
{
    return myDatabasePrefix;
}

// ============================================================================
/*!
 *  \brief directoryPath()
*/
// ============================================================================
QString LC_CreateCluster::directoryPath() const
{
    return myDirectoryPath;
}

// ============================================================================
/*!
 *  \brief isDone()
*/
// ============================================================================
bool LC_CreateCluster::isDone() const
{
    return myIsDone;
}

// ============================================================================
/*!
 *  \brief rootFileName()
*/
// ============================================================================
QString LC_CreateCluster::rootFileName() const
{
    return myRootFileName;
}

// ============================================================================
/*!
 *  \brief rootFilePath()
*/
// ============================================================================
QString LC_CreateCluster::rootFilePath() const
{
    return directoryPath() + QDir::separator() + rootFileName();
}

// ============================================================================
/*!
 *  \brief setAdminPassword()
*/
// ============================================================================
void LC_CreateCluster::setAdminPassword(const QString &thePassword)
{
    myAdminPassword = thePassword;
}

// ============================================================================
/*!
 *  \brief setAdminUserName()
*/
// ============================================================================
void LC_CreateCluster::setAdminUserName(const QString &theUserName)
{
    myAdminUserName = theUserName;
}

// ============================================================================
/*!
 *  \brief setDatabasePrefix()
*/
// ============================================================================
void LC_CreateCluster::setDatabasePrefix(const QString &thePrefix)
{
    myDatabasePrefix = thePrefix.toLower();
}

// ============================================================================
/*!
 *  \brief setDirectoryPath()
*/
// ============================================================================
void LC_CreateCluster::setDirectoryPath(const QString &theDirectoryPath)
{
    myDirectoryPath = theDirectoryPath;
}

// ============================================================================
/*!
 *  \brief setRootFileName()
*/
// ============================================================================
void LC_CreateCluster::setRootFileName(const QString &theRootFileName)
{
    myRootFileName = theRootFileName;
}

