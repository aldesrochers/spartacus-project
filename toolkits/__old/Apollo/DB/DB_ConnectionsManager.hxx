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


#ifndef __DB_ConnectionsManager_hxx__
#define __DB_ConnectionsManager_hxx__

// Qt
#include <QObject>
#include <QSettings>
#include <QString>

// Spartacus
#include <FWK_Export.hxx>

// ============================================================================
/*!
 *  \brief DB_ConnectionsManager
*/
// ============================================================================
class FWK_EXPORT DB_ConnectionsManager : public QObject
{
    Q_OBJECT

private:
    // constructors
    DB_ConnectionsManager();
    // destructors
    ~DB_ConnectionsManager();


public:
    static QString                  fileName();
    static QString                  filePath();
    static DB_ConnectionsManager*   manager();

public:

    static DB_ConnectionsManager*   myManager;

private:

    QSettings*      mySettings;

};

#endif // __DB_ConnectionsManager_hxx__
