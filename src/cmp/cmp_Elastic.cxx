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

// Spartacus
#include <cmp_Elastic.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cmp_Elastic::cmp_Elastic()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cmp_Elastic::cmp_Elastic(const Standard_Real theE,
                         const Standard_Real theAlpha)
    : myE(theE),
    myAlpha(theAlpha)
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cmp_Elastic::cmp_Elastic(const Standard_Real theE,
                         const Standard_Real theAlpha,
                         const Standard_Real theNu)
    : myE(theE),
    myAlpha(theAlpha),
    myNu(theNu)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cmp_Elastic::~cmp_Elastic()
{

}

// ============================================================================
/*!
 *  \brief Alpha()
*/
// ============================================================================
Standard_Real cmp_Elastic::Alpha() const
{
    return myAlpha;
}

// ============================================================================
/*!
 *  \brief E()
*/
// ============================================================================
Standard_Real cmp_Elastic::E() const
{
    return myE;
}

// ============================================================================
/*!
 *  \brief Nu()
*/
// ============================================================================
Standard_Real cmp_Elastic::Nu() const
{
    return myNu;
}

// ============================================================================
/*!
 *  \brief SetAlpha()
*/
// ============================================================================
void cmp_Elastic::SetAlpha(const Standard_Real theAlpha)
{
    myAlpha = theAlpha;
}

// ============================================================================
/*!
 *  \brief SetE()
*/
// ============================================================================
void cmp_Elastic::SetE(const Standard_Real theE)
{
    myE = theE;
}

// ============================================================================
/*!
 *  \brief SetNu()
*/
// ============================================================================
void cmp_Elastic::SetNu(const Standard_Real theNu)
{
    myNu = theNu;
}


