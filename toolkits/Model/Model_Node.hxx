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


#ifndef __Model_Node_hxx__
#define __Model_Node_hxx__

// Spartacus
#include <Model_Object.hxx>

// OpenCascade
#include <TColStd_Array1OfReal.hxx>

// Forward declarations
class Model_Node;

// Handles
DEFINE_STANDARD_HANDLE(Model_Node, Model_Object);


// ============================================================================
/*!
 *  \brief Model_Node
*/
// ============================================================================
class Model_Node : public Model_Object
{

public:
    // constructors
    Standard_EXPORT Model_Node();
    Standard_EXPORT Model_Node(const Standard_Integer theNbCoordinates);
    Standard_EXPORT Model_Node(const Standard_Real theX);
    Standard_EXPORT Model_Node(const Standard_Real theX,
                               const Standard_Real theY);
    Standard_EXPORT Model_Node(const Standard_Real theX,
                               const Standard_Real theY,
                               const Standard_Real theZ);
    // destructors
    Standard_EXPORT ~Model_Node();

public:

    Standard_EXPORT Standard_Real       Coordinate(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer    NbCoordinates() const;
    Standard_EXPORT void                ResizeCoordinates(const Standard_Integer theNbCoordinates,
                                                          const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                SetCoordinate(const Standard_Integer theIndex,
                                                      const Standard_Real theCoordinate);
    Standard_EXPORT void                SetX(const Standard_Real theX);
    Standard_EXPORT void                SetY(const Standard_Real theY);
    Standard_EXPORT void                SetZ(const Standard_Real theZ);
    Standard_EXPORT Standard_Real       X() const;
    Standard_EXPORT Standard_Real       Y() const;
    Standard_EXPORT Standard_Real       Z() const;

private:

    TColStd_Array1OfReal        myCoordinates;

public:

    DEFINE_STANDARD_RTTIEXT(Model_Node, Model_Object);

};


#endif // __Model_Node_hxx__
