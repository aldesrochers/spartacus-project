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


#ifndef __FE1d_Node_hxx__
#define __FE1d_Node_hxx__


// Spartacus
#include <FE1d_DOF.hxx>
#include <FE1d_Object.hxx>
#include <gp_Pnt1d.hxx>

// OpenCascade
#include <TColStd_SequenceOfTransient.hxx>

// Forward declarations
class FE1d_Node;

// Handles
DEFINE_STANDARD_HANDLE(FE1d_Node, FE1d_Object)


// ============================================================================
/*!
 *  \brief FE1d_Node
*/
// ============================================================================
class FE1d_Node : public FE1d_Object
{

public:
    // constructors
    Standard_EXPORT FE1d_Node();
    Standard_EXPORT FE1d_Node(const gp_Pnt1d& thePoint);
    // destructors
    Standard_EXPORT ~FE1d_Node();

public:

    Standard_EXPORT void                AddDOF(const Handle(FE1d_DOF)& theDOF);
    Standard_EXPORT Handle(FE1d_DOF)    DOF(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbDOFs() const;
    Standard_EXPORT const gp_Pnt1d&     Point() const;
    Standard_EXPORT void                SetPoint(const gp_Pnt1d& thePoint);
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT Standard_Real       X() const;

private:

    TColStd_SequenceOfTransient myDOFs;
    gp_Pnt1d                    myPoint;

public:

    DEFINE_STANDARD_RTTIEXT(FE1d_Node, FE1d_Object)

};


#endif // __FE1d_Node_hxx__
