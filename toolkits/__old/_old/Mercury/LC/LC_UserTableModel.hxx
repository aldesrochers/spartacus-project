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


#ifndef __LC_UserTableModel_hxx__
#define __LC_UserTableModel_hxx__

// Qt
#include <QSqlTableModel>


// ============================================================================
/*!
 *  \brief LC_UserTableModel
*/
// ============================================================================
class LC_UserTableModel : public QSqlTableModel
{
    Q_OBJECT

public:
    // constructors
    LC_UserTableModel(QObject* theParent = nullptr,
                      QSqlDatabase theDatabase = QSqlDatabase());
    // destructors
    ~LC_UserTableModel();

public:

    static bool     createTable(const QSqlDatabase& theDatabase,
                                const QString& theTableName);

public:

    QVariant        data(const QModelIndex& theIndex,
                             int theRole = Qt::DisplayRole) const override;

    Qt::ItemFlags   flags(const QModelIndex& theIndex) const override;

    bool            setData(const QModelIndex& theIndex,
                            const QVariant& theValue,
                           int theRole = Qt::EditRole) override;

public:

    bool            addUser(const QString& theUserName,
                            const QString& thePassword,
                            const QString& theFirstName = QString(),
                            const QString& theLastName = QString(),
                            const QString& theEmail = QString());


};

#endif // __LC_UserTableModel_hxx__
