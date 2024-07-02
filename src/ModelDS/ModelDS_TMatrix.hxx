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


#ifndef __ModelDS_TMatrix_hxx__
#define __ModelDS_TMatrix_hxx__

// Spartacus
#include <ModelAbs_TypeOfMatrix.hxx>
#include <ModelDS_ListOfObject.hxx>
#include <ModelDS_TObject.hxx>

// OpenCascade
#include <math_Matrix.hxx>

// Forward declarations
class ModelDS_TMatrix;

// Handles
DEFINE_STANDARD_HANDLE(ModelDS_TMatrix, ModelDS_TObject)


// ============================================================================
/*!
 *  \brief ModelDS_TMatrix
*/
// ============================================================================
class ModelDS_TMatrix : public ModelDS_TObject
{

public:
    // constructors
    Standard_EXPORT ModelDS_TMatrix();
    // destructors
    Standard_EXPORT ~ModelDS_TMatrix();

public:

    Standard_EXPORT ModelAbs_TypeOfObject   ObjectType() const Standard_OVERRIDE;

public:

    Standard_EXPORT const math_Matrix&      Matrix() const;
    Standard_EXPORT ModelAbs_TypeOfMatrix   MatrixType() const;
    Standard_EXPORT void                    SetMatrix(const math_Matrix& theMatrix);
    Standard_EXPORT void                    SetMatrixType(const ModelAbs_TypeOfMatrix theMatrixType);

private:

    math_Matrix             myMatrix;
    ModelAbs_TypeOfMatrix   myMatrixType;

public:

    DEFINE_STANDARD_RTTIEXT(ModelDS_TMatrix, ModelDS_TObject)

};


#endif // __ModelDS_TMatrix_hxx__
