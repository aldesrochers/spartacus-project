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


#ifndef __XSM2d_Elastic_hxx__
#define __XSM2d_Elastic_hxx__

// Spartacus
#include <XSM2d_Section.hxx>

// Forward declarations
class XSM2d_Elastic;

// Handles
DEFINE_STANDARD_HANDLE(XSM2d_Elastic, XSM2d_Section);


// ============================================================================
/*!
 *  \brief XSM2d_Elastic
 *  Class implementation of an elastic section for 2d elements.
 *  Parameters :
 *      A -> Area
 *      E -> Elastic Modulous (Young's modulous)
 *      I -> Second moment of inertia
*/
// ============================================================================
class XSM2d_Elastic : public XSM2d_Section
{

public:
    // constructors
    Standard_EXPORT XSM2d_Elastic();
    Standard_EXPORT XSM2d_Elastic(const Standard_Real E,
                                  const Standard_Real A,
                                  const Standard_Real I);
    // destructors
    Standard_EXPORT ~XSM2d_Elastic();

private:

    Standard_Real   myA;
    Standard_Real   myE;
    Standard_Real   myI;

public:

    DEFINE_STANDARD_RTTIEXT(XSM2d_Elastic, XSM2d_Section);

};


#endif // __XSM2d_Elastic_hxx__
