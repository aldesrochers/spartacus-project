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


#ifndef __ModelDS_TDOF_hxx__
#define __ModelDS_TDOF_hxx__

// Spartacus
#include <ModelDS_Node.hxx>
#include <ModelDS_TObject.hxx>
#include <ModelRep_DOF.hxx>

// Forward declarations
class ModelDS_TDOF;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TDOF, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TDOF
*/
// ============================================================================
class ModelDS_TDOF : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TDOF();
    // destructors
    Standard_EXPORT ~ModelDS_TDOF();

public:

    virtual Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_Node&             Node() const;
    Standard_EXPORT const Handle(ModelRep_DOF)&     Representation() const;
    Standard_EXPORT void                            SetNode(const ModelDS_Node& theNode);
    Standard_EXPORT void                            SetRepresentation(const Handle(ModelRep_DOF)& theRepresentation);

private:

    ModelDS_Node            myNode;
    Handle(ModelRep_DOF)    myRepresentation;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TDOF, ModelDS_TObject)

};


#endif // __ModelDS_TDOF_hxx__
