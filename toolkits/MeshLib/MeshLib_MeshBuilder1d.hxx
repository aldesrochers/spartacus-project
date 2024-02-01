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


#ifndef __MeshLib_MeshBuilder1d_hxx__
#define __MeshLib_MeshBuilder1d_hxx__

// Spartacus
#include <MeshLib_MakeMesh.hxx>
#include <TColmp_DataMapOfIntegerNode1d.hxx>
#include <TColmp_SequenceOfLinearLine2N.hxx>
#include <TColmp_SequenceOfQuadraticLine3N.hxx>


// ============================================================================
/*!
 *  \brief MeshLib_MeshBuilder1d
*/
// ============================================================================
class MeshLib_MeshBuilder1d : public MeshLib_MakeMesh
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT MeshLib_MeshBuilder1d();
    // destructors
    Standard_EXPORT ~MeshLib_MeshBuilder1d();

public:

    Standard_EXPORT void                Build() Standard_OVERRIDE;

public:

    Standard_EXPORT void                AddLinearLine2N(const Standard_Integer theNode1,
                                                        const Standard_Integer theNode2);

    Standard_EXPORT Standard_Integer    AddNode(const gp_Pnt1d& thePoint);

    Standard_EXPORT void                AddQuadraticLine3N(const Standard_Integer theNode1,
                                                           const Standard_Integer theNode2,
                                                           const Standard_Integer theNode3);

    Standard_EXPORT Standard_Integer    NbLinearLines2N() const;

    Standard_EXPORT Standard_Integer    NbNodes() const;

    Standard_EXPORT Standard_Integer    NbQuadraticLines3N() const;

protected:

    Standard_EXPORT Standard_Integer    FindNodeId() const;

private:

    TColmp_SequenceOfLinearLine2N       myLinearLines2N;
    TColmp_DataMapOfIntegerNode1d       myNodes;
    TColmp_SequenceOfQuadraticLine3N    myQuadraticLines3N;

};


#endif // __MeshLib_MeshBuilder1d_hxx__
