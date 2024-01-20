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


#ifndef __Material_Elastic_hxx__
#define __Material_Elastic_hxx__

// Spartacus
#include <Material_Object.hxx>
#include <matp_Elastic.hxx>

// Forward declarations
class Material_Elastic;

// Handles
DEFINE_STANDARD_HANDLE(Material_Elastic, Material_Object);


// ============================================================================
/*!
 *  \brief Material_Elastic
*/
// ============================================================================
class Material_Elastic : public Material_Object
{

public:
    // constructors
    Standard_EXPORT Material_Elastic(const matp_Elastic& theProperties);
    // destructors
    Standard_EXPORT ~Material_Elastic();

public:

    Standard_EXPORT MaterialAbs_TypeOfObject    ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const matp_Elastic&     Properties() const;
    Standard_EXPORT void                    SetProperties(const matp_Elastic& theProperties);

private:

    matp_Elastic        myProperties;

public:

    DEFINE_STANDARD_RTTIEXT(Material_Elastic, Material_Object);

};


#endif // __Material_Elastic_hxx__
