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


#ifndef __DB_Connection_hxx__
#define __DB_Connection_hxx__

// Qt
#include <QString>

// Spartacus
#include <FWK_Export.hxx>


// ============================================================================
/*!
 *  \brief DB_Connection
 *  Class implementation of a connection credentials data.
*/
// ============================================================================
class FWK_EXPORT DB_Connection
{

public:
    // constructors
    DB_Connection();
    // constructors
    ~DB_Connection();

private:

    QString         myHostName;
    QString         myName;
    int             myPort;


};

#endif // __DB_Connection_hxx__
