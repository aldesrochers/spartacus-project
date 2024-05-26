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


#ifndef __ModelDS_TNode_hxx__
#define __ModelDS_TNode_hxx__

// Spartacus
#include <ModelDS_Point.hxx>
#include <ModelDS_TObject.hxx>

// Forward declarations
class ModelDS_TNode;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TNode, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TNode
*/
// ============================================================================
class ModelDS_TNode : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TNode();
    // destructors
    Standard_EXPORT ~ModelDS_TNode();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const Handle(ModelDS_Point)&    Point() const;
    Standard_EXPORT void                            SetPoint(const Handle(ModelDS_Point)& thePoint);

private:

    Handle(ModelDS_Point)       myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TNode, ModelDS_TObject)

};


#endif // __ModelDS_TNode_hxx__
