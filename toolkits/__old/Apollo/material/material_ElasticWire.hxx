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


#ifndef __material_ElasticWire_hxx__
#define __material_ElasticWire_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <material_Elastic.hxx>


// ============================================================================
/*!
 *  \brief material_ElasticWire
 *  Class implementation of attributes of an ElasticWire material.
 *  Alpha -> Thermal expansion coefficient.
 *  E -> ElasticWire modulous.
 *  G -> Shear modulous.
 *  Nu -> Poisson's coefficient.
 *  Rho -> Density.
 *  C1 -> Creep parameter 1
 *  C2 -> Creep parameter 2
 *  C3 -> Creep parameter 3
 *  C4 -> Creep parameter 4
*/
// ============================================================================
class material_ElasticWire
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT material_ElasticWire();
    Standard_EXPORT material_ElasticWire(const Standard_Real theE,
                                         const Standard_Real theNu = 0.3);
    // destructors
    Standard_EXPORT ~material_ElasticWire();

public:

    Standard_EXPORT Standard_Real   Alpha() const;
    Standard_EXPORT Standard_Real   C1() const;
    Standard_EXPORT Standard_Real   C2() const;
    Standard_EXPORT Standard_Real   C3() const;
    Standard_EXPORT Standard_Real   C4() const;
    Standard_EXPORT Standard_Real   E() const;
    Standard_EXPORT Standard_Real   G() const;
    Standard_EXPORT Standard_Real   Nu() const;
    Standard_EXPORT Standard_Real   Rho() const;
    Standard_EXPORT void            SetAlpha(const Standard_Real theAlpha);
    Standard_EXPORT void            SetC1(const Standard_Real theC1);
    Standard_EXPORT void            SetC2(const Standard_Real theC2);
    Standard_EXPORT void            SetC3(const Standard_Real theC3);
    Standard_EXPORT void            SetC4(const Standard_Real theC4);
    Standard_EXPORT void            SetE(const Standard_Real theE);
    Standard_EXPORT void            SetG(const Standard_Real theG);
    Standard_EXPORT void            SetNu(const Standard_Real theNu);
    Standard_EXPORT void            SetRho(const Standard_Real theRho);

private:

    Standard_Real           myC1;
    Standard_Real           myC2;
    Standard_Real           myC3;
    Standard_Real           myC4;
    material_Elastic        myElastic;

};

#endif // __material_ElasticWire_hxx__
