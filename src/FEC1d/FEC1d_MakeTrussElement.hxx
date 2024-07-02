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


#ifndef __FEC1d_MakeTrussElement_hxx__
#define __FEC1d_MakeTrussElement_hxx__


// Spartacus
#include <FE1d_Node.hxx>
#include <FEC1d_MakeElement.hxx>
#include <material_Elastic.hxx>


// ============================================================================
/*!
 *  \brief FEC1d_MakeTrussElement
*/
// ============================================================================
class FEC1d_MakeTrussElement : FEC1d_MakeElement
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT FEC1d_MakeTrussElement();
    // destructors
    Standard_EXPORT ~FEC1d_MakeTrussElement();

private:

    Standard_EXPORT void    Initialize(const Handle(FE1d_Node)& theNode1,
                                       const Handle(FE1d_Node)& theNode2,
                                       const material_Elastic& theMaterial,
                                       const Standard_Real theArea);

};


#endif // __FEC1d_MakeTrussElement_hxx__
