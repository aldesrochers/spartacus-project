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


#ifndef __ModelBuilder_MakeNode1d_hxx__
#define __ModelBuilder_MakeNode1d_hxx__

// Spartacus
#include <gp_Pnt1d.hxx>
#include <ModelBuilder_MakeObject.hxx>
#include <ModelBuilder_NodeError.hxx>
#include <ModelDS_DOF.hxx>
#include <ModelDS_Node.hxx>
#include <ModelTools_IndexedMapOfObject.hxx>


// ============================================================================
/*!
 *  \brief ModelBuilder_MakeNode1d
*/
// ============================================================================
class ModelBuilder_MakeNode1d : public ModelBuilder_MakeObject
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT ModelBuilder_MakeNode1d(const gp_Pnt1d& thePoint);
    Standard_EXPORT ModelBuilder_MakeNode1d(const gp_Pnt1d &thePoint,
                                            const ModelDS_DOF& theDOF1);
    // destructors
    Standard_EXPORT ~ModelBuilder_MakeNode1d();

public:

    Standard_EXPORT void                    Build() Standard_OVERRIDE;

public:

    Standard_EXPORT const ModelDS_Node&     Node() const;
    Standard_EXPORT operator                ModelDS_Node() const;

public:

    Standard_EXPORT void                    AddDOF(const ModelDS_DOF& theDOF);
    Standard_EXPORT ModelBuilder_NodeError  Error() const;
    Standard_EXPORT Standard_Integer        NbDOFs() const;
    Standard_EXPORT const gp_Pnt1d&         Point() const;

private:

    Standard_EXPORT void        Initialize(const gp_Pnt1d& thePoint);
    Standard_EXPORT void        Initialize(const gp_Pnt1d& thePoint,
                                           const ModelDS_DOF& theDOF1);

private:

    ModelTools_IndexedMapOfObject   myDOFs;
    ModelBuilder_NodeError          myError;
    gp_Pnt1d                        myPoint;

};


#endif // __ModelBuilder_MakeNode1d_hxx__
