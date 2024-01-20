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
#include <XSTable_L.hxx>

// Qt
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
XSTable_L::XSTable_L(QObject* theParent,
                     QSqlDatabase theDatabase)
    : QSqlTableModel(theParent, theDatabase)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
XSTable_L::~XSTable_L()
{

}

// ============================================================================
/*!
 *  \brief addShape()
*/
// ============================================================================
bool XSTable_L::addShape(const XSData_L &theShape)
{
    QSqlRecord aRecord = record();
    aRecord.setValue(0, theShape.Designation);
    aRecord.setValue(1, theShape.Area);
    aRecord.setValue(2, theShape.Ix);
    aRecord.setValue(3, theShape.Sx);
    aRecord.setValue(4, theShape.rx);
    aRecord.setValue(5, theShape.y);
    aRecord.setValue(6, theShape.Iy);
    aRecord.setValue(7, theShape.Sy);
    aRecord.setValue(8, theShape.ry);
    aRecord.setValue(9, theShape.x);
    aRecord.setValue(10, theShape.J);
    aRecord.setValue(11, theShape.Cw);
    aRecord.setValue(12, theShape.mass);
    aRecord.setValue(13, theShape.d);
    aRecord.setValue(14, theShape.b);
    aRecord.setValue(15, theShape.t);
    aRecord.setValue(16, theShape.rxx);
    aRecord.setValue(17, theShape.y0);
    aRecord.setValue(18, theShape.ryy);
    aRecord.setValue(19, theShape.x0);
    aRecord.setValue(20, theShape.r0);
    if(!insertRecord(0, aRecord))
        return false;
    return submitAll();
}

// ============================================================================
/*!
 *  \brief createTable()
*/
// ============================================================================
bool XSTable_L::createTable(QSqlDatabase theDatabase,
                            const QString &theTableName)
{
    QSqlQuery aQuery(theDatabase);
    QString aString = QString("CREATE TABLE IF NOT EXISTS %1 (").arg(theTableName);
    aString += "designation TEXT PRIMARY KEY, ";
    aString += "area REAL, ";
    aString += "ix REAL, ";
    aString += "sx REAL, ";
    aString += "rx REAL, ";
    aString += "y REAL, ";
    aString += "iy REAL, ";
    aString += "sy REAL, ";
    aString += "ry REAL, ";
    aString += "x REAL, ";
    aString += "j REAL, ";
    aString += "cw REAL, ";
    aString += "mass REAL, ";
    aString += "d REAL, ";
    aString += "b REAL, ";
    aString += "t REAL, ";
    aString += "rxx REAL, ";
    aString += "y0 REAL, ";
    aString += "ryy REAL, ";
    aString += "x0 REAL, ";
    aString += "r0 REAL)";
    return aQuery.exec(aString);
}

// ============================================================================
/*!
 *  \brief getShape()
*/
// ============================================================================
XSData_L XSTable_L::getShape(const QString &theDesignation)
{
    setFilter(QString("designation == '%1'").arg(theDesignation));
    select();

    XSData_L aShape;
    if(rowCount() == 1) {
        QSqlRecord aRecord = record(0);
        aShape.Designation = aRecord.value(0).toString();
        aShape.Area = aRecord.value(1).toReal();
        aShape.Ix = aRecord.value(2).toReal();
        aShape.Sx = aRecord.value(3).toReal();
        aShape.rx = aRecord.value(4).toReal();
        aShape.y = aRecord.value(5).toReal();
        aShape.Iy = aRecord.value(6).toReal();
        aShape.Sy = aRecord.value(7).toReal();
        aShape.ry = aRecord.value(8).toReal();
        aShape.x = aRecord.value(9).toReal();
        aShape.J = aRecord.value(10).toReal();
        aShape.Cw = aRecord.value(11).toReal();
        aShape.mass = aRecord.value(12).toReal();
        aShape.d = aRecord.value(13).toReal();
        aShape.b = aRecord.value(14).toReal();
        aShape.t = aRecord.value(15).toReal();
        aShape.rxx = aRecord.value(16).toReal();
        aShape.y0 = aRecord.value(17).toReal();
        aShape.ryy = aRecord.value(18).toReal();
        aShape.x0 = aRecord.value(19).toReal();
        aShape.r0 = aRecord.value(20).toReal();
    }

    setFilter("");
    select();
    return aShape;
}

// ============================================================================
/*!
 *  \brief headerData()
*/
// ============================================================================
QVariant XSTable_L::headerData(int theSection,
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
            return tr("y");
        else if(theSection == 6)
            return tr("Iy");
        else if(theSection == 7)
            return tr("Sy");
        else if(theSection == 8)
            return tr("ry");
        else if(theSection == 9)
            return tr("x");
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
            return tr("rxx");
        else if(theSection == 17)
            return tr("y0");
        else if(theSection == 18)
            return tr("ryy");
        else if(theSection == 19)
            return tr("x0");
        else if(theSection == 20)
            return tr("r0");
    }

    return QSqlTableModel::headerData(theSection, theOrientation, theRole);
}

// ============================================================================
/*!
 *  \brief removeShape()
*/
// ============================================================================
bool XSTable_L::removeShape(const QString &theDesignation)
{
    setFilter(QString("designation == '%1'").arg(theDesignation));
    select();
    if(rowCount() < 1)
        return false;
    if(!removeRow(0))
        return false;
    setFilter("");
    select();
    return submitAll();
}
