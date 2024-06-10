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


#ifndef __PolyMesh_Mesh1d_hxx__
#define __PolyMesh_Mesh1d_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Transient.hxx>
#include <TColStd_Array1OfListOfInteger.hxx>

// Spartacus
#include <TColgp_Array1OfPnt1d.hxx>
#include <TColpmp_Array1OfLinearLine.hxx>

// Forward declarations
class PolyMesh_Mesh1d;

// Handles
DEFINE_STANDARD_HANDLE(PolyMesh_Mesh1d, Standard_Transient)


// ============================================================================
/*!
 *  \brief PolyMesh_Mesh1d
*/
// ============================================================================
class PolyMesh_Mesh1d : public Standard_Transient
{

public:
    // constructors
    Standard_EXPORT PolyMesh_Mesh1d();
    // destructors
    Standard_EXPORT ~PolyMesh_Mesh1d();

public:

    Standard_EXPORT const TColStd_ListOfInteger&    GroupOfLinearLines(const Standard_Integer theIndex) const;
    Standard_EXPORT const pmp_LinearLine&           LinearLine(const Standard_Integer theIndex) const;
    Standard_EXPORT Standard_Integer                NbGroupsOfLinearLines() const;
    Standard_EXPORT Standard_Integer                NbLinearLines() const;
    Standard_EXPORT Standard_Integer                NbPoints() const;
    Standard_EXPORT const gp_Pnt1d&                 Point(const Standard_Integer theIndex) const;
    Standard_EXPORT void                            ResizeGroupsOfLinearLines(const Standard_Integer theNbGroups,
                                                                              const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizeLinearLines(const Standard_Integer theNbLinearLines,
                                                                      const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            ResizePoints(const Standard_Integer theNbPoints,
                                                                 const Standard_Boolean toCopyData = Standard_True);
    Standard_EXPORT void                            SetGroupOfLinearLine(const Standard_Integer theIndex,
                                                                         const TColStd_ListOfInteger& theList);
    Standard_EXPORT void                            SetLinearLine(const Standard_Integer theIndex,
                                                                  const pmp_LinearLine& theLinearLine);
    Standard_EXPORT void                            SetPoint(const Standard_Integer theIndex,
                                                             const gp_Pnt1d& thePoint);

private:

    TColStd_Array1OfListOfInteger   myGroupsOfLinearLines;
    TColpmp_Array1OfLinearLine      myLinearLines;
    TColgp_Array1OfPnt1d            myPoints;

public:

    DEFINE_STANDARD_RTTIEXT(PolyMesh_Mesh1d, Standard_Transient)

};


#endif // __PolyMesh_Mesh1d_hxx__
