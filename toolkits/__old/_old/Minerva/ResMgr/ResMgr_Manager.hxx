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


#ifndef __ResMgr_Manager_hxx__
#define __ResMgr_Manager_hxx__

// Spartacus
#include <Kernel_Export.hxx>
#include <ResMgr_IconType.hxx>
#include <ResMgr_MapOfIconString.hxx>

// Qt
#include <QIcon>


// ============================================================================
/*!
 *  \brief ResMgr_Manager
 *  Class implementaton of a resources manager.
*/
// ============================================================================
class Kernel_EXPORT ResMgr_Manager
{

protected:
    // constructors
    ResMgr_Manager();

public:
    // destructors
    ~ResMgr_Manager();

public:

    static ResMgr_Manager*      getManager();

public:

    QIcon           icon(const ResMgr_IconType theType) const;
    QIcon           icon(const QString& theFileName) const;
    QString         iconFileName(const ResMgr_IconType theType) const;

private:

    void            mapIcon(const ResMgr_IconType theType,
                            const QString& theFileName);
    void            mapIconsToManager();

private:

    static ResMgr_Manager*      myManager;

private:

    ResMgr_MapOfIconString      myIcons;

};

#endif // __ResMgr_Manager_hxx__
