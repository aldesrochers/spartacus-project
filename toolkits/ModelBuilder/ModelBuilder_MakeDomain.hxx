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


#ifndef __ModelBuilder_MakeDomain_hxx__
#define __ModelBuilder_MakeDomain_hxx__

// Spartacus
#include <ModelBuilder_Command.hxx>
#include <ModelDS_DegreeOfFreedom.hxx>
#include <ModelDS_Domain.hxx>
#include <ModelDS_Element.hxx>
#include <ModelDS_Node.hxx>
#include <ModelTools_DataMapOfIntegerObject.hxx>


// ============================================================================
/*!
 *  \brief ModelBuilder_MakeDomain
*/
// ============================================================================
class ModelBuilder_MakeDomain : public ModelBuilder_Command
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeDomain();
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeDomain();

public:

    Standard_EXPORT const ModelDS_Domain&   Domain() const;
    Standard_EXPORT operator                ModelDS_Domain() const;

public:

    Standard_EXPORT void        Add(const ModelDS_DegreeOfFreedom& theDOF);
    Standard_EXPORT void        Add(const ModelDS_Element& theElement);
    Standard_EXPORT void        Add(const ModelDS_Node& theNode);

private:

    ModelDS_Domain                      myDomain;

};


#endif // __ModelBuilder_MakeDomain_hxx__
