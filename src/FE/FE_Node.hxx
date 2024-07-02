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


#ifndef __FE_Node_hxx__
#define __FE_Node_hxx__


// Spartacus
#include <FE_DOF.hxx>
#include <FE_Object.hxx>
#include <FE_Point.hxx>

// OpenCascade
#include <TColStd_Array1OfTransient.hxx>

// Forward declarations
class FE_Node;

// Handles
DEFINE_STANDARD_HANDLE(FE_Node, FE_Object)


// ============================================================================
/*!
 *  \brief FE_Node
*/
// ============================================================================
class FE_Node : public FE_Object
{

public:
    // constructors
    Standard_EXPORT FE_Node();
    Standard_EXPORT FE_Node(const Standard_Integer theNbDOFs);
    // destructors
    Standard_EXPORT ~FE_Node();

public:

    Standard_EXPORT Handle(FE_DOF)          DOF(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer        NbDOFs() const;
    Standard_EXPORT const Handle(FE_Point)& Point() const;
    Standard_EXPORT void                    ResizeDOFs(const Standard_Integer theNbDOFs,
                                                       const Standard_Boolean toCopyData = Standard_False);
    Standard_EXPORT void                    SetDOF(const Standard_Integer theIndex,
                                                   const Handle(FE_DOF)& theDOF);
    Standard_EXPORT void                    SetPoint(const Handle(FE_Point)& thePoint);

private:

    TColStd_Array1OfTransient   myDOFs;
    Handle(FE_Point)            myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(FE_Node, FE_Object)

};


#endif // __FE_Node_hxx__
