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
#include <MaterialLib_MakeElastic.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MaterialLib_MakeElastic::MaterialLib_MakeElastic(const Standard_Real theE)
{
    Initialize(theE, 0.3, 0.);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MaterialLib_MakeElastic::MaterialLib_MakeElastic(const Standard_Real theE,
                                                 const Standard_Real theNu)
{
    Initialize(theE, theNu, 0.);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MaterialLib_MakeElastic::MaterialLib_MakeElastic(const Standard_Real theE,
                                                 const Standard_Real theNu,
                                                 const Standard_Real theAlpha)
{
    Initialize(theE, theNu, theAlpha);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MaterialLib_MakeElastic::~MaterialLib_MakeElastic()
{

}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void MaterialLib_MakeElastic::Initialize(const Standard_Real theE,
                                         const Standard_Real theNu,
                                         const Standard_Real theAlpha)
{
    myBuilder.MakeMaterial(myMaterial);
    myBuilder.UpdateType(myMaterial, ModelAbs_Mat_Elastic);
    myBuilder.SetAttributeValue(myMaterial, ModelAbs_MatAttr_Alpha, theAlpha);
    myBuilder.SetAttributeValue(myMaterial, ModelAbs_MatAttr_E, theE);
    myBuilder.SetAttributeValue(myMaterial, ModelAbs_MatAttr_Nu, theNu);
    SetDone();
}
