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
#include <XSTable_W.hxx>

// Qt
#include <QSqlError>
#include <QSqlQuery>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSTable_W::XSTable_W(QObject* theParent,
                     QSqlDatabase theDatabase)
    : QSqlTableModel(theParent, theDatabase)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSTable_W::~XSTable_W()
{

}


// ============================================================================
/*!
 *  \brief createTable()
*/
// ============================================================================
bool XSTable_W::createTable(QSqlDatabase theDatabase,
                            const QString &theTableName)
{
    QSqlQuery aQuery(theDatabase);
    QString aString = QString("CREATE TABLE IF NOT EXISTS %1 (").arg(theTableName);
    aString += "designation TEXT PRIMARY KEY, ";
    aString += "area REAL, ";
    aString += "ix REAL, ";
    aString += "sx REAL, ";
    aString += "rx REAL, ";
    aString += "zx REAL, ";
    aString += "iy REAL, ";
    aString += "sy REAL, ";
    aString += "ry REAL, ";
    aString += "zy REAL, ";
    aString += "j REAL, ";
    aString += "cw REAL, ";
    aString += "mass REAL, ";
    aString += "d REAL, ";
    aString += "b REAL, ";
    aString += "t REAL, ";
    aString += "w REAL)";
    return aQuery.exec(aString);
}

// ============================================================================
/*!
 *  \brief headerData()
*/
// ============================================================================
QVariant XSTable_W::headerData(int theSection,
                               Qt::Orientation theOrientation,
                               int theRole) const
{
    if(theRole == Qt::DisplayRole && theOrientation == Qt::Horizontal) {
        if(theSection == 0)
            return tr("Designation");
        else if(theSection == 1)
            return tr("Area");
        else if(theSection == 2)
            return tr("Ix");
        else if(theSection == 3)
            return tr("Sx");
        else if(theSection == 4)
            return tr("rx");
        else if(theSection == 5)
            return tr("Zx");
        else if(theSection == 6)
            return tr("Iy");
        else if(theSection == 7)
            return tr("Sy");
        else if(theSection == 8)
            return tr("ry");
        else if(theSection == 9)
            return tr("Zy");
        else if(theSection == 10)
            return tr("J");
        else if(theSection == 11)
            return tr("Cw");
        else if(theSection == 12)
            return tr("Mass");
        else if(theSection == 13)
            return tr("d");
        else if(theSection == 14)
            return tr("b");
        else if(theSection == 15)
            return tr("t");
        else if(theSection == 16)
            return tr("w");
    } else {
        return QSqlTableModel::headerData(theSection, theOrientation, theRole);
    }
}
