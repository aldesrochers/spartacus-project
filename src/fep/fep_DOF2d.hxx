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


#ifndef __fep_DOF2d_hxx__
#define __fep_DOF2d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <fep_TypeOfDOF2d.hxx>


// ============================================================================
/*!
 *  \brief fep_DOF2d
*/
// ============================================================================
class fep_DOF2d
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT fep_DOF2d();
    Standard_EXPORT fep_DOF2d(const Standard_Integer theNode,
                              const fep_TypeOfDOF2d theType);
    // destructors
    Standard_EXPORT ~fep_DOF2d();

public:

    Standard_EXPORT Standard_Boolean    IsValid() const;
    Standard_EXPORT Standard_Integer    Node() const;
    Standard_EXPORT void                SetNode(const Standard_Integer theNode);
    Standard_EXPORT void                SetType(const fep_TypeOfDOF2d theType);
    Standard_EXPORT fep_TypeOfDOF2d     Type() const;

private:

    Standard_Integer    myNode;
    fep_TypeOfDOF2d     myType;

};

#endif // __fep_DOF2d_hxx__
