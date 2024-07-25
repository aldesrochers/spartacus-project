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


#ifndef __Triangle_Triangulate_hxx__
#define __Triangle_Triangulate_hxx__

// Spartacus
#include <Triangle_Command.hxx>
#include <Triangle_DataModel.hxx>
#include <Triangle_Parameters.hxx>
#include <Triangle_TriangulateError.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>


// ============================================================================
/*!
 *  \brief Triangle_Triangulate
*/
// ============================================================================
class Triangle_Triangulate : public Triangle_Command
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Triangle_Triangulate();
    // destructors
    Standard_EXPORT ~Triangle_Triangulate();

public:

    Standard_EXPORT void            Perform() Standard_OVERRIDE;

public:

    Standard_EXPORT Triangle_TriangulateError           Error() const;
    Standard_EXPORT const Handle(Triangle_DataModel)&   InputModel() const;
    Standard_EXPORT const Handle(Triangle_DataModel)&   OutputModel() const;
    Standard_EXPORT const Triangle_Parameters&          Parameters() const;
    Standard_EXPORT void                                SetInputModel(const Handle(Triangle_DataModel)& theInputModel);
    Standard_EXPORT void                                SetParameters(const Triangle_Parameters& theParameters);
    Standard_EXPORT const TCollection_AsciiString&      Switches() const;
    Standard_EXPORT const Handle(Triangle_DataModel)&   VeronoiModel() const;

private:

    Triangle_TriangulateError       myError;
    Handle(Triangle_DataModel)      myInputModel;
    Handle(Triangle_DataModel)      myOutputModel;
    Triangle_Parameters             myParameters;
    Handle(Triangle_DataModel)      myVeronoiModel;

};


#endif // __Triangle_Triangulate_hxx__
