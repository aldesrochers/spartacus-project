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


#ifndef __FEC1d_MakeNode_hxx__
#define __FEC1d_MakeNode_hxx__


// Spartacus
#include <FE1d_Node.hxx>
#include <FEC1d_NodeError.hxx>
#include <FEC1d_Root.hxx>


// ============================================================================
/*!
 *  \brief FEC1d_MakeNode
*/
// ============================================================================
class FEC1d_MakeNode : FEC1d_Root
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT FEC1d_MakeNode();
    Standard_EXPORT FEC1d_MakeNode(const Standard_Real theX);
    Standard_EXPORT FEC1d_MakeNode(const gp_Pnt1d& thePoint);
    // destructors
    Standard_EXPORT ~FEC1d_MakeNode();

public:

    Standard_EXPORT const Handle(FE1d_Node)&    Node() const;
    Standard_EXPORT operator const Handle(FE1d_Node)& () const;

public:

    Standard_EXPORT void                AddDOF(const Handle(FE1d_DOF)& theDOF);
    Standard_EXPORT FEC1d_NodeError     Error() const;

private:

    Standard_EXPORT void    Initialize(const gp_Pnt1d& thePoint);

private:

    FEC1d_NodeError         myError;
    Handle(FE1d_Node)       myNode;

};


#endif // __FEC1d_MakeNode_hxx__
