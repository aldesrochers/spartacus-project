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


#include <iostream>
using namespace std;

// Qt
#include <QApplication>
#include <QIcon>

// Spartacus
#include <CableDesigner_Desktop.hxx>



// ============================================================================
/*!
 *  \brief MeshBuilder_Main
*/
// ============================================================================
int main(int argc, char** argv)
{
    QApplication anApp(argc, argv);

    // initialize application resources
    Q_INIT_RESOURCE(Icons);

    // configure application
    anApp.setApplicationDisplayName("Cable Designer");
    anApp.setApplicationName("spartacus-cabledesigner");
    //anApp.setApplicationVersion(QString(MeshBuilder_VERSION_STRING));
    anApp.setWindowIcon(QIcon(":/CableDesigner.png"));

    // create the application desktop
    CableDesigner_Desktop* aDesktop = new CableDesigner_Desktop();
    aDesktop->show();

    //MeshBuilder_Desktop* aDesktop = new MeshBuilder_Desktop();
    //aDesktop->show();

    return anApp.exec();
}
