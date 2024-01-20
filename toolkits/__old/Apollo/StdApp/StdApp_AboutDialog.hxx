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


#ifndef __StdApp_AboutDialog_hxx__
#define __StdApp_AboutDialog_hxx__

// OpenCascade
#include <Standard.hxx>

// Qt
#include <QDialog>

// Namespaces
namespace Ui {
    class StdApp_AboutDialog;
}


// ============================================================================
/*!
 *  \brief StdApp_AboutDialog
*/
// ============================================================================
class Standard_EXPORT StdApp_AboutDialog : public QDialog
{
    Q_OBJECT

public:
    // constructors
    explicit StdApp_AboutDialog(QWidget *theParent = nullptr);
    // destructors
    ~StdApp_AboutDialog();

private:

    Ui::StdApp_AboutDialog*     myUI;

};

#endif // __StdApp_AboutDialog_hxx__
