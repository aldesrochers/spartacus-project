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


#ifndef __LC_CreateCluster_hxx__
#define __LC_CreateCluster_hxx__

// Qt
#include <QString>

// Spartacus
#include <LC_CreateClusterError.hxx>


// ============================================================================
/*!
 *  \brief LC_CreateCluster
*/
// ============================================================================
class LC_CreateCluster
{

public:
    // constructors
    LC_CreateCluster();
    // destructors
    ~LC_CreateCluster();

public:

    QString         adminPassword() const;
    QString         adminUserName() const;
    bool            create();
    QString         databasePrefix() const;
    QString         directoryPath() const;
    bool            isDone() const;
    QString         rootFileName() const;
    QString         rootFilePath() const;
    void            setAdminPassword(const QString& thePassword);
    void            setAdminUserName(const QString& theUserName);
    void            setDatabasePrefix(const QString& thePrefix);
    void            setDirectoryPath(const QString& theDirectoryPath);
    void            setRootFileName(const QString& therootFileName);

private:

    QString                 myAdminPassword;
    QString                 myAdminUserName;
    QString                 myDatabasePrefix;
    QString                 myDirectoryPath;
    LC_CreateClusterError   myError;
    bool                    myIsDone;
    QString                 myRootFileName;

};

#endif // __LC_CreateCluster_hxx__
