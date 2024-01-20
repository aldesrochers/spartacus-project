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


#ifndef __CableLib_Function_hxx__
#define __CableLib_Function_hxx__

// OpenCascade
#include <math_FunctionWithDerivative.hxx>


// ============================================================================
/*!
 *  \brief CableLib_Function
*/
// ============================================================================
class CableLib_Function : public math_FunctionWithDerivative
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT CableLib_Function(const Standard_Real A,
                                      const Standard_Real B,
                                      const Standard_Real W);
    // destructors
    Standard_EXPORT ~CableLib_Function();

public:

    Standard_EXPORT Standard_Real       A() const;
    Standard_EXPORT Standard_Real       B() const;
    Standard_EXPORT Standard_Real       W() const;

private:

    Standard_Real       myA;
    Standard_Real       myB;
    Standard_Real       myW;



};

#endif // __CableLib_Function_hxx__
