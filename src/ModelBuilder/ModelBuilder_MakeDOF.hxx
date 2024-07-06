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


#ifndef __ModelBuilder_MakeDOF_hxx__
#define __ModelBuilder_MakeDOF_hxx__

// Spartacus
#include <ModelAbs_TypeOfDOF.hxx>
#include <ModelBuilder_MakeObject.hxx>
#include <ModelDS_DOF.hxx>


// ============================================================================
/*!
 *  \brief ModelBuilder_MakeDOF
*/
// ============================================================================
class ModelBuilder_MakeDOF : public ModelBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeDOF(const ModelAbs_TypeOfDOF theDOFType);
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeDOF();

public:

    Standard_EXPORT const ModelDS_DOF&  DOF() const;
    Standard_EXPORT operator            ModelDS_DOF() const;

private:

    Standard_EXPORT void        Initialize(const ModelAbs_TypeOfDOF theDOFType);

};


#endif // __ModelBuilder_MakeDOF_hxx__
