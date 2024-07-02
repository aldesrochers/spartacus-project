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


#ifndef __cell_Node1d_hxx__
#define __cell_Node1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Real.hxx>


// ============================================================================
/*!
 *  \brief cell_Node1d
 *  Class definition of a cell point in 1d space.
*/
// ============================================================================
class cell_Node1d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT cell_Node1d();
    Standard_EXPORT cell_Node1d(const Standard_Real theX);
    // destructors
    Standard_EXPORT ~cell_Node1d();

public:

    Standard_EXPORT Standard_Real       Distance(const cell_Node1d& theOther) const;
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT Standard_Real       X() const;

private:

    Standard_Real       myX;

};

#endif // __cell_Node1d_hxx__
