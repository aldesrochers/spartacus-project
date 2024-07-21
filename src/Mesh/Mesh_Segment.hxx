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


#ifndef __Mesh_Segment_hxx__
#define __Mesh_Segment_hxx__

// Spartacus
#include <Mesh_Object.hxx>

// Forward declarations
class Mesh_Segment;

// Handles
DEFINE_STANDARD_HANDLE(Mesh_Segment, Mesh_Object)


// ============================================================================
/*!
 *  \brief Mesh_Segment
*/
// ============================================================================
class Mesh_Segment : public Mesh_Object
{

public:
    // constructors
    Standard_EXPORT Mesh_Segment();
    Standard_EXPORT Mesh_Segment(const Standard_Integer theNode1,
                                 const Standard_Integer theNode2);
    // destructors
    Standard_EXPORT ~Mesh_Segment();

public:

    Standard_EXPORT Standard_Integer    Node1() const;
    Standard_EXPORT Standard_Integer    Node2() const;
    Standard_EXPORT void                SetNode1(const Standard_Integer theNode1);
    Standard_EXPORT void                SetNode2(const Standard_Integer theNode2);

private:

    Standard_Integer    myNode1;
    Standard_Integer    myNode2;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh_Segment, Mesh_Object)

};


#endif // __Mesh_Segment_hxx__
