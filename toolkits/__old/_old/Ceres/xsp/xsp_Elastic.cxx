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
#include <xsp_Elastic.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Elastic::xsp_Elastic()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
xsp_Elastic::xsp_Elastic(const Standard_Real theA,
                         const Standard_Real theE,
                         const Standard_Real theNu)
{
    SetA(theA);
    SetE(theE);
    SetNu(theNu);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
xsp_Elastic::~xsp_Elastic()
{

}

// ============================================================================
/*!
 *  \brief A()
*/
// ============================================================================
Standard_Real xsp_Elastic::A() const
{
    return myA;
}

// ============================================================================
/*!
 *  \brief Alpha()
*/
// ============================================================================
Standard_Real xsp_Elastic::Alpha() const
{
    return myMaterial.Alpha();
}

// ============================================================================
/*!
 *  \brief E()
*/
// ============================================================================
Standard_Real xsp_Elastic::E() const
{
    return myMaterial.E();
}

// ============================================================================
/*!
 *  \brief G()
*/
// ============================================================================
Standard_Real xsp_Elastic::G() const
{
    return myMaterial.G();
}

// ============================================================================
/*!
 *  \brief Material()
*/
// ============================================================================
cmp_Elastic xsp_Elastic::Material() const
{
    return myMaterial;
}

// ============================================================================
/*!
 *  \brief Nu()
*/
// ============================================================================
Standard_Real xsp_Elastic::Nu() const
{
    return myMaterial.Nu();
}

// ============================================================================
/*!
 *  \brief Rho()
*/
// ============================================================================
Standard_Real xsp_Elastic::Rho() const
{
    return myMaterial.Rho();
}

// ============================================================================
/*!
 *  \brief W()
*/
// ============================================================================
Standard_Real xsp_Elastic::W() const
{
    Standard_Real aW = myMaterial.Rho() * myA;
    return aW;
}

// ============================================================================
/*!
 *  \brief SetA()
*/
// ============================================================================
void xsp_Elastic::SetA(const Standard_Real theA)
{
    myA = theA;
}

// ============================================================================
/*!
 *  \brief SetAlpha()
*/
// ============================================================================
void xsp_Elastic::SetAlpha(const Standard_Real theAlpha)
{
    myMaterial.SetAlpha(theAlpha);
}

// ============================================================================
/*!
 *  \brief SetE()
*/
// ============================================================================
void xsp_Elastic::SetE(const Standard_Real theE)
{
    myMaterial.SetE(theE);
}

// ============================================================================
/*!
 *  \brief SetG()
*/
// ============================================================================
void xsp_Elastic::SetG(const Standard_Real theG)
{
    myMaterial.SetG(theG);
}

// ============================================================================
/*!
 *  \brief SetNu()
*/
// ============================================================================
void xsp_Elastic::SetNu(const Standard_Real theNu)
{
    myMaterial.SetNu(theNu);
}

// ============================================================================
/*!
 *  \brief SetRho()
*/
// ============================================================================
void xsp_Elastic::SetRho(const Standard_Real theRho)
{
    myMaterial.SetRho(theRho);
}

// ============================================================================
/*!
 *  \brief SetW()
*/
// ============================================================================
void xsp_Elastic::SetW(const Standard_Real theW)
{
    Standard_Real aRho = theW / myA;
    myMaterial.SetRho(aRho);
}
