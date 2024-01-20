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


#ifndef __material_Elastic_hxx__
#define __material_Elastic_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>


// ============================================================================
/*!
 *  \brief material_Elastic
 *  Class implementation of attributes of an elastic material.
 *  Alpha -> Thermal expansion coefficient.
 *  E -> Elastic modulous.
 *  G -> Shear modulous.
 *  Nu -> Poisson's coefficient.
 *  Rho -> Density.
*/
// ============================================================================
class material_Elastic
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT material_Elastic();
    Standard_EXPORT material_Elastic(const Standard_Real theE,
                                     const Standard_Real theNu = 0.3);
    // destructors
    Standard_EXPORT ~material_Elastic();

public:

    Standard_EXPORT Standard_Real   Alpha() const;
    Standard_EXPORT Standard_Real   E() const;
    Standard_EXPORT Standard_Real   G() const;
    Standard_EXPORT Standard_Real   Nu() const;
    Standard_EXPORT Standard_Real   Rho() const;
    Standard_EXPORT void            SetAlpha(const Standard_Real theAlpha);
    Standard_EXPORT void            SetE(const Standard_Real theE);
    Standard_EXPORT void            SetG(const Standard_Real theG);
    Standard_EXPORT void            SetNu(const Standard_Real theNu);
    Standard_EXPORT void            SetRho(const Standard_Real theRho);

private:

    Standard_Real       myAlpha;
    Standard_Real       myE;
    Standard_Real       myNu;
    Standard_Real       myRho;

};

#endif // __material_Elastic_hxx__
