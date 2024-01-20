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

// Venus
#include <DesktopApp_AboutDialog.hxx>
#include <ui_DesktopApp_AboutDialog.h>

// Jupiter
#include <Common_Compiler.hxx>
#include <Common_Version.hxx>

// Qt
#include <QCoreApplication>

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DesktopApp_AboutDialog::DesktopApp_AboutDialog(QWidget* theParent)
    : QDialog(theParent),
      myUI(new Ui::DesktopApp_AboutDialog)
{
    myUI->setupUi(this);

    // set default icon
    QPixmap aPixmap(":/icons/DesktopApp.png");
    aPixmap = aPixmap.scaled(96,96);
    myUI->iconLabel->setPixmap(aPixmap);

    // set default application name
    QString aName = QString("%1 %2").arg("Spartacus",
                                         Common_VERSION_STRING);
    QFont aFont;
    aFont.setBold(true);
    aFont.setPixelSize(14);
    myUI->nameLabel->setText(aName);
    myUI->nameLabel->setFont(aFont);

    // set default description
    QString aDescription = tr("A spartacus application.");
    myUI->descriptionLabel->setText(aDescription);

    // set compiler
    QString aCompiler;
    if(QString(Common_CXX_COMPILER_ID).compare("GNU") == 0)
        aCompiler = tr("Based on GNU gcc compilers version %1").arg(Common_CXX_COMPILER_VERSION);
    else
        aCompiler = tr("Based on MSVC compilers version %1").arg(Common_CXX_COMPILER_VERSION);
    myUI->compilerLabel->setText(aCompiler);

    // set copyright
    QString aCopyright = tr("Copyright 2021- The Spartacus Project. All rights reserved.");
    myUI->copyrightLabel->setText(aCopyright);

    // set warranty
    QString aWarranty = tr("The program is provided as is with no warranty of any kind,\n"
                           "including the warranty of design, the warranty of exactness\n"
                           "and fitness for a particular purpose.");
    myUI->warrantyLabel->setText(aWarranty);

    // setup dialog
    setWindowTitle(tr("About"));
    setFixedSize(sizeHint());
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DesktopApp_AboutDialog::~DesktopApp_AboutDialog()
{
    delete myUI;
}

// ============================================================================
/*!
 *  \brief descriptionText()
*/
// ============================================================================
QString DesktopApp_AboutDialog::descriptionText() const
{
    return myUI->descriptionLabel->text();
}

// ============================================================================
/*!
 *  \brief iconPixmap()
*/
// ============================================================================
QPixmap DesktopApp_AboutDialog::iconPixmap() const
{
    return myUI->iconLabel->pixmap(Qt::ReturnByValue);
}

// ============================================================================
/*!
 *  \brief nameText()
*/
// ============================================================================
QString DesktopApp_AboutDialog::nameText() const
{
    return myUI->nameLabel->text();
}

// ============================================================================
/*!
 *  \brief setDescriptionText()
*/
// ============================================================================
void DesktopApp_AboutDialog::setDescriptionText(const QString &theDescription)
{
    myUI->descriptionLabel->setText(theDescription);
}

// ============================================================================
/*!
 *  \brief setIconPixmap()
*/
// ============================================================================
void DesktopApp_AboutDialog::setIconPixmap(const QPixmap &thePixmap)
{
    myUI->iconLabel->setPixmap(thePixmap);
}

// ============================================================================
/*!
 *  \brief setNameText()
*/
// ============================================================================
void DesktopApp_AboutDialog::setNameText(const QString &theName)
{
    myUI->nameLabel->setText(theName);
}
