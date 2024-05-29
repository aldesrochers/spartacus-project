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


#ifndef __ModelBuilder_MakeDegreeOfFreedom1d_hxx__
#define __ModelBuilder_MakeDegreeOfFreedom1d_hxx__

// Spartacus
#include <DOF_Translation.hxx>
#include <DOFAbs_TypeOfAxis1d.hxx>
#include <DOFAbs_TypeOfDOF1d.hxx>
#include <ModelBuilder_MakeObject.hxx>
#include <ModelDS_DegreeOfFreedom.hxx>


// ============================================================================
/*!
 *  \brief ModelBuilder_MakeDegreeOfFreedom1d
*/
// ============================================================================
class ModelBuilder_MakeDegreeOfFreedom1d : public ModelBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeDegreeOfFreedom1d(const DOFAbs_TypeOfDOF1d theType);
    Standard_EXPORT ModelBuilder_MakeDegreeOfFreedom1d(const DOFAbs_TypeOfAxis1d,
                                                       const Handle(DOF_Translation)& theTranslation);
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeDegreeOfFreedom1d();

public:

    Standard_EXPORT const ModelDS_DegreeOfFreedom&  DegreeOfFreedom() const;
    Standard_EXPORT operator                        ModelDS_DegreeOfFreedom() const;

protected:

    Standard_EXPORT void        Initialize(const DOFAbs_TypeOfDOF1d theType);

};


#endif // __ModelBuilder_MakeDegreeOfFreedom1d_hxx__
