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


#ifndef __pmp_LinearLine_hxx__
#define __pmp_LinearLine_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief pmp_LinearLine
*/
// ============================================================================
class pmp_LinearLine
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT pmp_LinearLine();
    Standard_EXPORT pmp_LinearLine(const Standard_Integer theNode1,
                                   const Standard_Integer theNode2);
    // destructors
    Standard_EXPORT ~pmp_LinearLine();

public:

    Standard_EXPORT Standard_Integer        Node1() const;
    Standard_EXPORT Standard_Integer        Node2() const;
    Standard_EXPORT void                    SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                    SetNode2(const Standard_Integer theNode2);

public:

    Standard_EXPORT void                    Get(Standard_Integer& theNode1,
                                                Standard_Integer& theNode2) const;
    Standard_EXPORT void                    Set(const Standard_Integer theNode1,
                                                const Standard_Integer theNode2);

private:

    Standard_Integer        myNode1;
    Standard_Integer        myNode2;

};


#endif // __pmp_LinearLine_hxx__
