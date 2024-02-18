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


#ifndef __Mesh2d_LinearLine_hxx__
#define __Mesh2d_LinearLine_hxx__

// Spartacus
#include <Mesh2d_Cell.hxx>
#include <Mesh2d_Node.hxx>

// Forward declarations
class Mesh2d_LinearLine;

// Handles
DEFINE_STANDARD_HANDLE(Mesh2d_LinearLine, Mesh2d_Cell)


// ============================================================================
/*!
 *  \brief Mesh2d_LinearLine
*/
// ============================================================================
class Mesh2d_LinearLine : public Mesh2d_Cell
{

public:
    // constructors
    Standard_EXPORT Mesh2d_LinearLine();
    Standard_EXPORT Mesh2d_LinearLine(const Handle(Mesh2d_Node)& theNode1,
                                      const Handle(Mesh2d_Node)& theNode2);
    // destructors
    Standard_EXPORT ~Mesh2d_LinearLine();

public:

    Standard_EXPORT Standard_Real               Length() const;
    Standard_EXPORT const Handle(Mesh2d_Node)&  Node1() const;
    Standard_EXPORT const Handle(Mesh2d_Node)&  Node2() const;
    Standard_EXPORT void                        SetNode1(const Handle(Mesh2d_Node)& theNode1);
    Standard_EXPORT void                        SetNode2(const Handle(Mesh2d_Node)& theNode2);

private:

    Handle(Mesh2d_Node)     myNode1;
    Handle(Mesh2d_Node)     myNode2;

public:

    DEFINE_STANDARD_RTTIEXT(Mesh2d_LinearLine, Mesh2d_Cell);

};


#endif // __Mesh2d_LinearLine_hxx__
