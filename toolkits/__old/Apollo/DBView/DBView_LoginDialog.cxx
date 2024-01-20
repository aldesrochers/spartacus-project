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
#include "DBView_LoginDialog.hxx"
#include "ui_DBView_LoginDialog.h"

// Qt
#include <QScreen>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DBView_LoginDialog::DBView_LoginDialog(QWidget* theParent) :
    QDialog(theParent),
    myUI(new Ui::DBView_LoginDialog)
{
    myUI->setupUi(this);


    // define constant dialog size
    setFixedHeight(this->geometry().height());
    setFixedWidth(this->screen()->availableGeometry().width() / 4.);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DBView_LoginDialog::~DBView_LoginDialog()
{
    delete myUI;
}
