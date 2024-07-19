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


#ifndef __Tetgen_Mesher_hxx__
#define __Tetgen_Mesher_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Face.hxx>


// ============================================================================
/*!
 *  \brief Tetgen_Mesher
*/
// ============================================================================
class Tetgen_Mesher
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Tetgen_Mesher();
    // destructors
    Standard_EXPORT ~Tetgen_Mesher();

public:

    Standard_EXPORT void                    Check() const;
    Standard_EXPORT Standard_Boolean        IsDone() const;
    Standard_EXPORT void                    Perform();

protected:

    Standard_EXPORT void                    SetDone();
    Standard_EXPORT void                    SetNotDone();

protected:

    TopoDS_Face             myFace;
    Standard_Boolean        myIsDone;

};


#endif // __Tetgen_Mesher_hxx__
