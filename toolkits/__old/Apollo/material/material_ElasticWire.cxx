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
#include <material_ElasticWire.hxx>

// OpenCascade
#include <Standard_ConstructionError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
material_ElasticWire::material_ElasticWire()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
material_ElasticWire::material_ElasticWire(const Standard_Real theE,
                                           const Standard_Real theNu)
{
    myElastic.SetE(theE);
    myElastic.SetNu(theNu);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
material_ElasticWire::~material_ElasticWire()
{

}

// ============================================================================
/*!
 *  \brief Alpha()
*/
// ============================================================================
Standard_Real material_ElasticWire::Alpha() const
{
    return myElastic.Alpha();
}

// ============================================================================
/*!
 *  \brief C1()
*/
// ============================================================================
Standard_Real material_ElasticWire::C1() const
{
    return myC1;
}

// ============================================================================
/*!
 *  \brief C2()
*/
// ============================================================================
Standard_Real material_ElasticWire::C2() const
{
    return myC2;
}

// ============================================================================
/*!
 *  \brief C3()
*/
// ============================================================================
Standard_Real material_ElasticWire::C3() const
{
    return myC3;
}

// ============================================================================
/*!
 *  \brief C4()
*/
// ============================================================================
Standard_Real material_ElasticWire::C4() const
{
    return myC4;
}

// ============================================================================
/*!
 *  \brief E()
*/
// ============================================================================
Standard_Real material_ElasticWire::E() const
{
    return myElastic.E();
}

// ============================================================================
/*!
 *  \brief G()
*/
// ============================================================================
Standard_Real material_ElasticWire::G() const
{
    return myElastic.G();
}

// ============================================================================
/*!
 *  \brief Nu()
*/
// ============================================================================
Standard_Real material_ElasticWire::Nu() const
{
    return myElastic.Nu();
}

// ============================================================================
/*!
 *  \brief Rho()
*/
// ============================================================================
Standard_Real material_ElasticWire::Rho() const
{
    return myElastic.Rho();
}

// ============================================================================
/*!
 *  \brief SetAlpha()
*/
// ============================================================================
void material_ElasticWire::SetAlpha(const Standard_Real theAlpha)
{
    myElastic.SetAlpha(theAlpha);
}

// ============================================================================
/*!
 *  \brief SetC1()
*/
// ============================================================================
void material_ElasticWire::SetC1(const Standard_Real theC1)
{
    myC1 = theC1;
}

// ============================================================================
/*!
 *  \brief SetC2()
*/
// ============================================================================
void material_ElasticWire::SetC2(const Standard_Real theC2)
{
    myC2 = theC2;
}

// ============================================================================
/*!
 *  \brief SetC3()
*/
// ============================================================================
void material_ElasticWire::SetC3(const Standard_Real theC3)
{
    myC3 = theC3;
}

// ============================================================================
/*!
 *  \brief SetC4()
*/
// ============================================================================
void material_ElasticWire::SetC4(const Standard_Real theC4)
{
    myC4 = theC4;
}

// ============================================================================
/*!
 *  \brief SetE()
*/
// ============================================================================
void material_ElasticWire::SetE(const Standard_Real theE)
{
    myElastic.SetE(theE);
}

// ============================================================================
/*!
 *  \brief SetG()
*/
// ============================================================================
void material_ElasticWire::SetG(const Standard_Real theG)
{
    myElastic.SetG(theG);
}

// ============================================================================
/*!
 *  \brief SetNu()
*/
// ============================================================================
void material_ElasticWire::SetNu(const Standard_Real theNu)
{
    myElastic.SetNu(theNu);
}

// ============================================================================
/*!
 *  \brief SetRho()
*/
// ============================================================================
void material_ElasticWire::SetRho(const Standard_Real theRho)
{
    myElastic.SetRho(theRho);
}


