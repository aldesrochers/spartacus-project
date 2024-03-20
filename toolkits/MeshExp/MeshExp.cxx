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


// Spartacus
#include <MeshDS_Tool.hxx>
#include <MeshExp.hxx>



// ============================================================================
/*!
 *  \brief ListCells()
*/
// ============================================================================
void MeshExp::ListCells(const MeshDS_Group &theGroup,
                        MeshTools_ListOfObject &theList)
{
    MeshDS_ListOfObject aList = MeshDS_Tool::ListOfCells(theGroup);
    MeshDS_ListIteratorOfListOfObject anIterator(aList);
    for(; anIterator.More(); anIterator.Next())
        theList.Append(anIterator.Value());
}

// ============================================================================
/*!
 *  \brief ListNodes()
*/
// ============================================================================
void MeshExp::ListNodes(const MeshDS_Cell &theCell,
                        MeshTools_ListOfObject &theList)
{
    MeshDS_Array1OfObject anArray = MeshDS_Tool::Nodes(theCell);
    for(Standard_Integer i=anArray.Lower(); i<=anArray.Upper(); i++)
        theList.Append(anArray.Value(i));
}

