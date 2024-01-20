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


#ifndef __xsp_Elastic_hxx__
#define __xsp_Elastic_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>

// Spartacus
#include <cmp_Elastic.hxx>


// ============================================================================
/*!
 *  \brief xsp_Elastic
 *  Class implementation of attributes of an elastic cross-section.
 *  A -> Area.
 *  Alpha -> Thermal expansion coefficient.
 *  E -> Elastic modulous.
 *  G -> Shear modulous.
 *  Nu -> Poisson's coefficient.
 *  Rho -> Density.
 *  W -> Linear weight.
*/
// ============================================================================
class xsp_Elastic
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT xsp_Elastic();
    Standard_EXPORT xsp_Elastic(const Standard_Real theA,
                                const Standard_Real theE,
                                const Standard_Real theNu = 0.3);
    // destructors
    Standard_EXPORT ~xsp_Elastic();

public:

    Standard_EXPORT Standard_Real   A() const;
    Standard_EXPORT Standard_Real   Alpha() const;
    Standard_EXPORT Standard_Real   E() const;
    Standard_EXPORT Standard_Real   G() const;
    Standard_EXPORT cmp_Elastic     Material() const;
    Standard_EXPORT Standard_Real   Nu() const;
    Standard_EXPORT Standard_Real   Rho() const;
    Standard_EXPORT Standard_Real   W() const;
    Standard_EXPORT void            SetA(const Standard_Real theA);
    Standard_EXPORT void            SetAlpha(const Standard_Real theAlpha);
    Standard_EXPORT void            SetE(const Standard_Real theE);
    Standard_EXPORT void            SetG(const Standard_Real theG);
    Standard_EXPORT void            SetNu(const Standard_Real theNu);
    Standard_EXPORT void            SetRho(const Standard_Real theRho);
    Standard_EXPORT void            SetW(const Standard_Real theW);

private:

    Standard_Real       myA;
    cmp_Elastic         myMaterial;

};

#endif // __xsp_Elastic_hxx__
