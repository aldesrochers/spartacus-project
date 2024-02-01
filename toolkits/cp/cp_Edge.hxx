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


#ifndef __cp_Edge_hxx__
#define __cp_Edge_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TColStd_Array1OfInteger.hxx>


// ============================================================================
/*!
 *  \brief cp_Edge
*/
// ============================================================================
class cp_Edge
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT cp_Edge();
    Standard_EXPORT cp_Edge(const Standard_Integer theNbMidNodes);
    Standard_EXPORT cp_Edge(const Standard_Integer theCornerNode1,
                            const Standard_Integer theCornerNode2,
                            const Standard_Integer theNbMidNodes);
    Standard_EXPORT cp_Edge(const Standard_Integer theCornerNode1,
                            const Standard_Integer theCornerNode2,
                            const TColStd_Array1OfInteger& theMidNodes);
    // destructors
    Standard_EXPORT ~cp_Edge();

public:

    Standard_EXPORT Standard_Integer    CornerNode1() const;
    Standard_EXPORT Standard_Integer    CornerNode2() const;
    Standard_EXPORT Standard_Integer    MidNode(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbMidNodes() const;
    Standard_EXPORT void                ResizeMidNodes(const Standard_Integer theNbMidNodes,
                                                       const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                SetCornerNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetCornerNode2(const Standard_Integer theNode2);
    Standard_EXPORT void                SetMidNode(const Standard_Integer theIndex,
                                                   const Standard_Integer theNode);

private:

    Standard_Integer            myCornerNode1;
    Standard_Integer            myCornerNode2;
    TColStd_Array1OfInteger     myMidNodes;

};


#endif // __cp_Edge_hxx__
