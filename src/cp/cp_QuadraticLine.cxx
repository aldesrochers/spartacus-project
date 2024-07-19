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
#include <cp_QuadraticLine.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
cp_QuadraticLine::cp_QuadraticLine()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
cp_QuadraticLine::~cp_QuadraticLine()
{

}

// ============================================================================
/*!
 *  \brief Direction()
*/
// ============================================================================
gp_Dir cp_QuadraticLine::Direction() const
{
    return Line().Direction();
}

// ============================================================================
/*!
 *  \brief Length()
*/
// ============================================================================
Standard_Real cp_QuadraticLine::Length() const
{
    return Point1().Distance(Point2());
}

// ============================================================================
/*!
 *  \brief Location()
*/
// ============================================================================
gp_Pnt cp_QuadraticLine::Location() const
{
    return Line().Location();
}

// ============================================================================
/*!
 *  \brief Line()
*/
// ============================================================================
gp_Lin cp_QuadraticLine::Line() const
{
    return gp_Lin(Point1(), gp_Vec(Point1(), Point2()));
}
