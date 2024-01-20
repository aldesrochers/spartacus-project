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


#ifndef __cell_LinearLine1d_hxx__
#define __cell_LinearLine1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <cell_Node1d.hxx>



// ============================================================================
/*!
 *  \brief cell_LinearLine1d
*/
// ============================================================================
class cell_LinearLine1d
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT cell_LinearLine1d();
    Standard_EXPORT cell_LinearLine1d(const cell_Node1d& theNode1,
                                      const cell_Node1d& theNode2);
    // destructors
    Standard_EXPORT ~cell_LinearLine1d();

public:

    Standard_EXPORT Standard_Real           Length() const;
    Standard_EXPORT const cell_Node1d&      Node1() const;
    Standard_EXPORT const cell_Node1d&      Node2() const;

private:

    cell_Node1d         myNode1;
    cell_Node1d         myNode2;

};

#endif // __cell_LinearLine1d_hxx__
