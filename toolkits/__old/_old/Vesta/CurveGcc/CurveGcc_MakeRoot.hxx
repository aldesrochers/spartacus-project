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


#ifndef __CurveGcc_MakeRoot_hxx__
#define __CurveGcc_MakeRoot_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief CurveGcc_MakeRoot
*/
// ============================================================================
class CurveGcc_MakeRoot
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CurveGcc_MakeRoot();
    // destructors
    Standard_EXPORT ~CurveGcc_MakeRoot();

public:

    Standard_EXPORT Standard_Boolean    IsDone() const;

protected:

    Standard_EXPORT void    SetDone();
    Standard_EXPORT void    SetNotDone();

protected:

    Standard_Boolean    myIsDone;

};

#endif // __CurveGcc_MakeRoot_hxx__
