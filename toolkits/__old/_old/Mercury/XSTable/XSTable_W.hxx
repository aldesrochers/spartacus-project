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


#ifndef __XSTable_W_hxx__
#define __XSTable_W_hxx__

// Spartacus
#include <Kernel_Export.hxx>

// Qt
#include <QSqlTableModel>


// ============================================================================
/*!
 *  \brief XSTable_W
*/
// ============================================================================
class Kernel_EXPORT XSTable_W : public QSqlTableModel
{

    Q_OBJECT

public:
    // constructors
    XSTable_W(QObject* theParent = nullptr,
              QSqlDatabase theDatabase = QSqlDatabase());
    // destructors
    ~XSTable_W();

public:

    static bool createTable(QSqlDatabase theDatabase,
                            const QString& theTableName);

public:

    QVariant    headerData(int theSection,
                           Qt::Orientation theOrientation,
                           int theRole = Qt::DisplayRole) const override;

};

#endif // __XSTable_W_hxx__
