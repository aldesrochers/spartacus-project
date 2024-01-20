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
#include <Crypto_XOR.hxx>
#include <LC_UserTableModel.hxx>

// Qt
#include <QCryptographicHash>
#include <QDateTime>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQuery>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
LC_UserTableModel::LC_UserTableModel(QObject* theParent,
                                     QSqlDatabase theDatabase)
    : QSqlTableModel(theParent, theDatabase)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
LC_UserTableModel::~LC_UserTableModel()
{

}

// ============================================================================
/*!
 *  \brief addUser()
*/
// ============================================================================
bool LC_UserTableModel::addUser(const QString &theUserName,
                                const QString &thePassword,
                                const QString &theFirstName,
                                const QString &theLastName,
                                const QString &theEmail)
{
    QSqlRecord aRecord = record();
    aRecord.setValue(0, theUserName);
    aRecord.setValue(1, thePassword);
    aRecord.setValue(2, theFirstName);
    aRecord.setValue(3, theLastName);
    aRecord.setValue(4, theEmail);
    aRecord.setValue(5, QDateTime::currentDateTime().toString());
    if(!insertRecord(-1, aRecord)) {
        cout << lastError().text().toStdString() << endl;
        return false;
    }
    return true;
}

// ============================================================================
/*!
 *  \brief createTable()
*/
// ============================================================================
bool LC_UserTableModel::createTable(const QSqlDatabase &theDatabase,
                                    const QString &theTableName)
{
    QString aString = QString("CREATE TABLE IF NOT EXISTS %1 (").arg(theTableName);
    aString += "username TEXT PRIMARY KEY, ";
    aString += "password TEXT, ";
    aString += "firstname TEXT, ";
    aString += "lastname TEXT, ";
    aString += "email TEXT, ";
    aString += "creationdate TEXT NOT NULL, ";
    aString += "firstlogin TEXT, ";
    aString += "lastlogin TEXT)";
    QSqlQuery aQuery(theDatabase);
    if(!aQuery.exec(aString))
        return false;
    return true;
}

// ============================================================================
/*!
 *  \brief data()
*/
// ============================================================================
QVariant LC_UserTableModel::data(const QModelIndex &theIndex,
                                 int theRole) const
{
    int aColumn = theIndex.column();
    if(aColumn == 1 && theRole == Qt::DisplayRole) {
        QString anEncryptedPassword = QSqlTableModel::data(theIndex, theRole).toString();
        QString aPassword = Crypto_XOR::encryptDecrypt(anEncryptedPassword);
        QCryptographicHash aHash(QCryptographicHash::Sha256);
        aHash.addData(aPassword.toUtf8());
        return aHash.result();
    }
    return QSqlTableModel::data(theIndex, theRole);
}

// ============================================================================
/*!
 *  \brief flags()
*/
// ============================================================================
Qt::ItemFlags LC_UserTableModel::flags(const QModelIndex &theIndex) const
{
    int theColumn = theIndex.column();
    if(theColumn == 1)
        return Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    else if(theColumn == 5)
        return Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    else if(theColumn == 6)
        return Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    else if(theColumn == 7)
        return Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    else
        return QSqlTableModel::flags(theIndex);
}

// ============================================================================
/*!
 *  \brief setData()
*/
// ============================================================================
bool LC_UserTableModel::setData(const QModelIndex &theIndex,
                                const QVariant &theValue,
                                int theRole)
{
    int aColumn = theIndex.column();
    if(aColumn ==1 && theRole == Qt::EditRole) {
        QString aPassword = theValue.toString();
        QString anEncryptedPassword = Crypto_XOR::encryptDecrypt(aPassword);
        return QSqlTableModel::setData(theIndex, anEncryptedPassword, theRole);
    }
    return QSqlTableModel::setData(theIndex, theValue, theRole);
}

