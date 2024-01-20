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


#ifndef __LC_hxx__
#define __LC_hxx__

// Spartacus
#include <Kernel_Export.hxx>
#include <LC_Configuration.hxx>

// Qt
#include <QUuid>
#include <QVersionNumber>


// ============================================================================
/*!
 *  \brief LC
*/
// ============================================================================
class Kernel_EXPORT LC
{

public:

    static QUuid            formatID();

    static QVersionNumber   formatVersion();

    static bool             loadConfiguration(const QString& theFileName,
                                              LC_Configuration& theConfiguration);

    static bool             saveConfiguration(const QString& theFileName,
                                              const LC_Configuration& theConfiguration);

};

#endif // __LC_hxx__
