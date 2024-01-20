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
#include <FWK.hxx>

// Qt
#include <QCoreApplication>
#include <QDir>
#include <QStandardPaths>


// ============================================================================
/*!
 *  \brief InstallRootPath()
 *  Get the path to the root installation tree of the framework. The method
 *  use a relative path from the running QApplication directory. Always one
 *  directory up.
*/
// ============================================================================
QString FWK::InstallRootPath()
{
    QDir aDir = QCoreApplication::applicationDirPath();
    aDir.cdUp();
    return aDir.absolutePath();
}

// ============================================================================
/*!
 *  \brief StandardPath()
*/
// ============================================================================
QString FWK::StandardPath(const FWK_StandardPaths thePath)
{
    switch (thePath) {
    case FWK_BinaryDirPath:
        return InstallRootPath() + QDir::separator() + QString("bin");
    case FWK_LibraryDirPath:
        return InstallRootPath() + QDir::separator() + QString("lib/spartacus");
    default:
        return QString();
    }
}

// ============================================================================
/*!
 *  \brief UserRootPath()
 *  Get the path to the user root home directory. If doCreate, create if the
 *  directory does not exists.
*/
// ============================================================================
QString FWK::UserRootPath(bool doCreate)
{
#ifdef WIN32
    QString aPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation)
           + QDir::separator() + QString("Spartacus");
#else
    QString aPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation)
                    + QDir::separator() + QString(".spartacus");
#endif
    QDir aDir(aPath);
    if(!aDir.exists() && doCreate)
        QDir().mkpath(aPath);
    return aPath;
}
