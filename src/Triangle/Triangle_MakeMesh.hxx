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


#ifndef __Triangle_MakeMesh_hxx__
#define __Triangle_MakeMesh_hxx__

// Spartacus
#include <Triangle_Command.hxx>
#include <Triangle_Mesh.hxx>
#include <Triangle_Model.hxx>

// OpenCascade
#include <TCollection_AsciiString.hxx>



// ============================================================================
/*!
 *  \brief Triangle_MakeMesh
*/
// ============================================================================
class Triangle_MakeMesh : public Triangle_Command
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Triangle_MakeMesh();
    // destructors
    Standard_EXPORT ~Triangle_MakeMesh();

public:

    Standard_EXPORT void                            Perform() Standard_OVERRIDE;

public:

    Standard_EXPORT Standard_Boolean                IsConformingDelaunay() const;
    Standard_EXPORT Standard_Boolean                IsQualityMesh() const;
    Standard_EXPORT const Handle(Triangle_Mesh)&    Mesh() const;
    Standard_EXPORT const Handle(Triangle_Model)&   Model() const;
    Standard_EXPORT void                            SetConformingDelaunay(const Standard_Boolean isConformingDelaunay);
    Standard_EXPORT void                            SetQualityMesh(const Standard_Boolean isQualityMesh);
    Standard_EXPORT void                            SetModel(const Handle(Triangle_Model)& theModel);
    Standard_EXPORT TCollection_AsciiString         Switches() const;

public:

    //Standard_EXPORT void    Initialize(const Handle(Triangle_Model)& theModel);

private:

    Standard_Boolean            myIsConformingDelaunay;
    Standard_Boolean            myIsQualityMesh;
    Handle(Triangle_Mesh)       myMesh;
    Handle(Triangle_Model)      myModel;
    TCollection_AsciiString     mySwitches;

};


#endif // __Triangle_MakeMesh_hxx__
