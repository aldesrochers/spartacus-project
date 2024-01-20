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


#ifndef __Viewer3dhxx__
#define __Viewer3dhxx__

// OpenCascade
#include <V3d_Viewer.hxx>


// ============================================================================
/*!
 *  \brief Viewer3d_Window
*/
// ============================================================================
class Viewer3d
{

public:

    static Standard_EXPORT Handle(V3d_Viewer)       CreateViewer(const Standard_Real theDefaultViewSize = 1000.);

};


#endif // __Viewer3dhxx__
