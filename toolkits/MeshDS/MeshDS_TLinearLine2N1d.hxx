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


#ifndef __MeshDS_TLinearLine2N1d_hxx__
#define __MeshDS_TLinearLine2N1d_hxx__

// Spartacus
#include <MeshDS_TCell.hxx>

// Forward declarations
class MeshDS_TLinearLine2N1d;

// Handles
DEFINE_STANDARD_HANDLE(MeshDS_TLinearLine2N1d, MeshDS_TCell);


// ============================================================================
/*!
 *  \brief MeshDS_TLinearLine2N1d
*/
// ============================================================================
class MeshDS_TLinearLine2N1d : public MeshDS_TCell
{

public:
    // constructors
    Standard_EXPORT MeshDS_TLinearLine2N1d(const Handle(Mesh1d_LinearLine2N)& theLinearLine2N1d);
    // destructors
    Standard_EXPORT ~MeshDS_TLinearLine2N1d();

public:

    Standard_EXPORT Standard_Boolean                    IsLinearLine2N1d() const Standard_OVERRIDE;
    Standard_EXPORT const Handle(Mesh1d_LinearLine2N)&  LinearLine2N1d() const Standard_OVERRIDE;

private:

    Handle(Mesh1d_LinearLine2N)     myLinearLine2N1d;

public:

    DEFINE_STANDARD_RTTIEXT(MeshDS_TLinearLine2N1d, MeshDS_TCell);

};


#endif // __MeshDS_TLinearLine2N1d_hxx__
