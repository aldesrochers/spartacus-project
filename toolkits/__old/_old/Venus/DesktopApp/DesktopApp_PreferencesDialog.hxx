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


#ifndef __DesktopApp_PreferencesDialog_hxx__
#define __DesktopApp_PreferencesDialog_hxx__

// Qt
#include <QDialog>
#include <QPixmap>

// Namespaces
namespace Ui {
    class DesktopApp_PreferencesDialog;
}


// ============================================================================
/*!
 *  \brief DesktopApp_PreferencesDialog
 *  Class implementation of a standard application 'about' dialog.
*/
// ============================================================================
class DesktopApp_PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    // constructors
    DesktopApp_PreferencesDialog(QWidget* theParent = nullptr);
    // destructors
    ~DesktopApp_PreferencesDialog();

private:

    Ui::DesktopApp_PreferencesDialog*    myUI;

};

#endif // __DesktopApp_PreferencesDialog_hxx__
