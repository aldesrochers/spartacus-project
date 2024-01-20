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


#ifndef __Triangle_Mesher_hxx__
#define __Triangle_Mesher_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TopoDS_Face.hxx>

// Spartacus
#include <Triangle_MesherError.hxx>
#include <Triangle_Parameters.hxx>

// Forward declarations
class Triangle_Mesher;


// ============================================================================
/*!
 *  \brief Triangle_Mesher
*/
// ============================================================================
class Triangle_Mesher
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT Triangle_Mesher(const TopoDS_Face& theFace,
                                    const Triangle_Parameters& theParameters);;
    // destructors
    Standard_EXPORT ~Triangle_Mesher();

public:

    Standard_EXPORT Triangle_MesherError        Error() const;
    Standard_EXPORT Standard_Boolean            IsDone() const;
    Standard_EXPORT const Triangle_Parameters&  Parameters() const;
    Standard_EXPORT const TopoDS_Shape&         Shape() const;

protected:

    Standard_EXPORT void    SetDone();
    Standard_EXPORT void    SetNotDone();

private:

    Triangle_MesherError    myError;
    Standard_Boolean        myIsDone;
    Triangle_Parameters     myParameters;
    TopoDS_Shape            myShape;

};

#endif // __Triangle_Mesher_hxx__
