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


#ifndef __StdDlg_Login_hxx__
#define __StdDlg_Login_hxx__

// Qt
#include <QDialog>
#include <QPixmap>

// Namespaces
namespace Ui {
    class StdDlg_Login;
}


// ============================================================================
/*!
 *  \brief StdDlg_Login
*/
// ============================================================================
class StdDlg_Login : public QDialog
{
    Q_OBJECT

public:
    // constructors
    StdDlg_Login(QWidget* theParent = nullptr);
    // destructors
    ~StdDlg_Login();

private:

    Ui::StdDlg_Login*    myUI;

};

#endif // __StdDlg_Login_hxx__
