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
#include <LC.hxx>
#include <LC_Version.hxx>

// Qt
#include <QDataStream>
#include <QFile>


// ============================================================================
/*!
 *  \brief formatID()
*/
// ============================================================================
QUuid LC::formatID()
{
    return QUuid("8D60BD9C-A905-4CCB-A95B-E9C2E0B32B04");
}

// ============================================================================
/*!
 *  \brief formatVersion()
*/
// ============================================================================
QVersionNumber LC::formatVersion()
{
    return QVersionNumber(LC_VERSION_MAJOR,
                          LC_VERSION_MINOR,
                          LC_VERSION_PATCH);
}

// ============================================================================
/*!
 *  \brief loadConfiguration()
*/
// ============================================================================
bool LC::loadConfiguration(const QString &theFileName,
                           LC_Configuration &theConfiguration)
{
    QFile aFile(theFileName);
    if(!aFile.open(QFile::ReadOnly))
        return false;
    QDataStream aStream(&aFile);
    aStream >> theConfiguration.CreationDate;
    aStream >> theConfiguration.Version;
    aFile.close();
    return true;
}

// ============================================================================
/*!
 *  \brief saveConfiguration()
*/
// ============================================================================
bool LC::saveConfiguration(const QString &theFileName,
                           const LC_Configuration &theConfiguration)
{
    QFile aFile(theFileName);
    if(!aFile.open(QFile::WriteOnly))
        return false;
    QDataStream aStream(&aFile);
    aStream << theConfiguration.CreationDate;
    aStream << theConfiguration.Version;
    aFile.close();
    return true;
}
