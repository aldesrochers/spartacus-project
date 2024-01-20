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


#ifndef __CableDesigner_Session_hxx__
#define __CableDesigner_Session_hxx__

// Qt
#include <QObject>


// ============================================================================
/*!
 *  \brief CableDesigner_Session
 *  Class implementation of the application session. The session is a
 *  connection to the opl.cables database of the Spartacus cluster.
*/
// ============================================================================
class CableDesigner_Session : public QObject
{
    Q_OBJECT

public:
    // constructors
    CableDesigner_Session();
    // destructors
    ~CableDesigner_Session();

public:

    static bool     create(const QString& theHostName,
                           const int thePort,
                           const QString& theUserName,
                           const QString& thePassword);

public:

    QString         hostName() const;
    QString         password() const;
    int             port() const;
    QString         userName() const;

private:

    QString         myHostName;
    QString         myPassword;
    int             myPort;
    QString         myUserName;

};

#endif  // __CableDesigner_Session_hxx__
