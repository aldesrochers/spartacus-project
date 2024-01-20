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


#ifndef __Icons_Manager_hxx__
#define __Icons_Manager_hxx__

// OpenCascade
#include <Standard.hxx>

// Qt
#include <QIcon>
#include <QObject>

// Spartacus
#include <Icons.hxx>


// ============================================================================
/*!
 *  \brief Icons_Manager
 *  Class implementation of an icon manager.
*/
// ============================================================================
class Standard_EXPORT Icons_Manager : public QObject
{
    Q_OBJECT

private:
    // constructors
    Icons_Manager();
    // destructors
    ~Icons_Manager();

public:

    static Icons_Manager*   manager();

public:

    static QString          libraryFilePath();

private:

    static Icons_Manager*   myManager;

public:

    QIcon           icon(const Icons theIcon) const;
    QString         iconFileName(const Icons theIcon) const;
    QString         iconFilePath(const Icons theIcon) const;

};

#endif // __Icons_Manager_hxx__
