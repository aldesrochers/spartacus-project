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


#ifndef __EleProp_Element_hxx__
#define __EleProp_Element_hxx__

// Spartacus
#include <EleProp_Object.hxx>

// Forward declarations
class EleProp_Element;

// Handles
DEFINE_STANDARD_HANDLE(EleProp_Element, EleProp_Object);


// ============================================================================
/*!
 *  \brief EleProp_Element
*/
// ============================================================================
class EleProp_Element : public EleProp_Object
{

public:
    // constructors
    Standard_EXPORT EleProp_Element();
    // destructors
    Standard_EXPORT ~EleProp_Element();

public:

    Standard_EXPORT Standard_Integer    ElementId() const;
    Standard_EXPORT void                SetElementId(const Standard_Integer theElementId);

private:

    Standard_Integer        myElementId;

public:

    DEFINE_STANDARD_RTTIEXT(EleProp_Element, EleProp_Object);

};


#endif // __EleProp_Element_hxx__
