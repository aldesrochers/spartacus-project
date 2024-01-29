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
#include <MeshDS_TCell.hxx>

// OpenCascade
#include <Standard_DomainError.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
MeshDS_TCell::MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
MeshDS_TCell::~MeshDS_TCell()
{

}

// ============================================================================
/*!
 *  \brief IsLinearLine2N1d()
*/
// ============================================================================
Standard_Boolean MeshDS_TCell::IsLinearLine2N1d() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief HasShape()
*/
// ============================================================================
Standard_Boolean MeshDS_TCell::HasShape() const
{
    return !myShape.IsNull();
}

// ============================================================================
/*!
 *  \brief LinearLine2N1d()
*/
// ============================================================================
const Handle(Mesh1d_LinearLine2N)& MeshDS_TCell::LinearLine2N1d() const
{
    throw Standard_DomainError("MeshDS_TCell::LinearLine2N1d()");
}

// ============================================================================
/*!
 *  \brief SetShape()
*/
// ============================================================================
void MeshDS_TCell::SetShape(const TopoDS_Shape &theShape)
{
    myShape = theShape;
}

// ============================================================================
/*!
 *  \brief Shape()
*/
// ============================================================================
const TopoDS_Shape& MeshDS_TCell::Shape() const
{
    return myShape;
}


// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(MeshDS_TCell, MeshDS_TObject);
IMPLEMENT_STANDARD_RTTIEXT(MeshDS_TCell, MeshDS_TObject);
