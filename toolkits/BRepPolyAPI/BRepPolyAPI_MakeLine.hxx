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


#ifndef __BRepPolyAPI_MakeLine_hxx__
#define __BRepPolyAPI_MakeLine_hxx__

// OpenCascade
#include <BRepPoly_MakeLine.hxx>
#include <BRepPolyAPI_MakeShape.hxx>



// ============================================================================
/*!
 *  \brief BRepPolyAPI_MakeLine
*/
// ============================================================================
class BRepPolyAPI_MakeLine : public BRepPolyAPI_MakeShape
{

public:

    DEFINE_STANDARD_ALLOC;

public:
    // constructors
    Standard_EXPORT BRepPolyAPI_MakeLine(const TopoDS_Vertex& theVertex1,
                                         const TopoDS_Vertex& theVertex2);
    // destructors
    Standard_EXPORT ~BRepPolyAPI_MakeLine();

public:

    Standard_EXPORT void                        Build(const Message_ProgressRange& theRange = Message_ProgressRange()) Standard_OVERRIDE;

public:

    Standard_EXPORT const BRepPoly_MakeLine&    Line() const;

private:

    BRepPoly_MakeLine       myLine;

};


#endif // __BRepPolyAPI_MakeLine_hxx__
