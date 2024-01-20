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
#include <Cluster_RemoteDriver.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Cluster_RemoteDriver::Cluster_RemoteDriver()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Cluster_RemoteDriver::~Cluster_RemoteDriver()
{

}

// ============================================================================
/*!
 *  \brief hostName()
*/
// ============================================================================
QString Cluster_RemoteDriver::hostName() const
{
    return myHostName;
}

// ============================================================================
/*!
 *  \brief port()
*/
// ============================================================================
int Cluster_RemoteDriver::port() const
{
    return myPort;
}

// ============================================================================
/*!
 *  \brief setHostName()
*/
// ============================================================================
void Cluster_RemoteDriver::setHostName(const QString &theHostName)
{
    myHostName = theHostName;
}

// ============================================================================
/*!
 *  \brief setPort()
*/
// ============================================================================
void Cluster_RemoteDriver::setPort(const int thePort)
{
    myPort = thePort;
}
