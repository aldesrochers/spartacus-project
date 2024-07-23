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
#include <TColgp_SequenceOfPnt2d.hxx>

// Spartacus
#include <Triangle_Model.hxx>


// ============================================================================
/*!
 *  \brief Triangle_Mesher
*/
// ============================================================================
class Triangle_Mesher
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Triangle_Mesher(const TColgp_SequenceOfPnt2d& thePoints);
    // destructors
    Standard_EXPORT ~Triangle_Mesher();

public:

    Standard_EXPORT void                    Check() const;
    Standard_EXPORT Standard_Boolean        IsDone() const;

public:

    Standard_EXPORT void                    Initialize(const TColgp_SequenceOfPnt2d& thePoints);

private:

    Standard_EXPORT void                    SetDone();
    Standard_EXPORT void                    SetNotDone();

private:

    Standard_Boolean        myIsDone;
    Handle(Triangle_Model)  myModel;

};


#endif // __Triangle_Mesher_hxx__
