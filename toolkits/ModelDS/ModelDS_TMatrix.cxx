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
#include <ModelDS_TMatrix.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelDS_TMatrix::ModelDS_TMatrix()
    : myMatrix(0, 0, 0, 0)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelDS_TMatrix::~ModelDS_TMatrix()
{

}

// ============================================================================
/*!
 *  \brief Matrix()
*/
// ============================================================================
const math_Matrix& ModelDS_TMatrix::Matrix() const
{
    return myMatrix;
}

// ============================================================================
/*!
 *  \brief MatrixType()
*/
// ============================================================================
ModelAbs_TypeOfMatrix ModelDS_TMatrix::MatrixType() const
{
    return myMatrixType;
}

// ============================================================================
/*!
 *  \brief ObjectType()
*/
// ============================================================================
ModelAbs_TypeOfObject ModelDS_TMatrix::ObjectType() const
{
    return ModelAbs_OBJ_Matrix;
}

// ============================================================================
/*!
 *  \brief SetMatrix()
*/
// ============================================================================
void ModelDS_TMatrix::SetMatrix(const math_Matrix &theMatrix)
{
    myMatrix = theMatrix;
}

// ============================================================================
/*!
 *  \brief SetMatrixType()
*/
// ============================================================================
void ModelDS_TMatrix::SetMatrixType(const ModelAbs_TypeOfMatrix theMatrixType)
{
    myMatrixType = theMatrixType;
}



// ****************************************************************************
// Handles
// ****************************************************************************
IMPLEMENT_STANDARD_HANDLE(ModelDS_TMatrix, ModelDS_TObject)
IMPLEMENT_STANDARD_RTTIEXT(ModelDS_TMatrix, ModelDS_TObject)
