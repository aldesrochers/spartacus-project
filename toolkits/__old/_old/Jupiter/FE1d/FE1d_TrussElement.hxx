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


#ifndef __FE1d_TrussElement_hxx__
#define __FE1d_TrussElement_hxx__

// Spartacus
#include <FE1d_Element.hxx>

// Handles
DEFINE_STANDARD_HANDLE(FE1d_TrussElement, FE1d_Element);


// ============================================================================
/*!
 *  \brief FE1d_TrussElement
*/
// ============================================================================
class FE1d_TrussElement : public FE1d_Element
{

public:
    // constructors
    Standard_EXPORT FE1d_TrussElement(const Standard_Real theX1,
                                      const Standard_Real theX2);
    // destructors
    Standard_EXPORT ~FE1d_TrussElement();

public:

    Standard_EXPORT Standard_Real       InitialLength() const;
    Standard_EXPORT Standard_Real       X1() const;
    Standard_EXPORT Standard_Real       X2() const;

protected:

    Standard_Real       myX1;
    Standard_Real       myX2;

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_TrussElement, FE1d_Element);

};

#endif // __FE1d_TrussElement_hxx__
