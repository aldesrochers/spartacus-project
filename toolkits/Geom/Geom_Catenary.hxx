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


#ifndef __Geom_Catenary_hxx__
#define __Geom_Catenary_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax2.hxx>

// Spartacus
#include <gp_Catenary.hxx>

// Forward declarations
class Geom_Catenary;

// Handles
DEFINE_STANDARD_HANDLE(Geom_Catenary, Geom_Curve);



// ============================================================================
/*!
 *  \brief Geom_Catenary
*/
// ============================================================================
class Geom_Catenary : public Geom_Curve
{

public:
    // constructors
    Standard_EXPORT Geom_Catenary();
    Standard_EXPORT Geom_Catenary(const gp_Catenary& theCatenary);
    Standard_EXPORT Geom_Catenary(const gp_Ax2& thePosition,
                                  const Standard_Real theParameter);
    // destructors
    Standard_EXPORT ~Geom_Catenary();

public:

    virtual Standard_EXPORT gp_Catenary             Catenary() const;
    virtual Standard_EXPORT GeomAbs_Shape           Continuity() const Standard_OVERRIDE;
    virtual Standard_EXPORT Handle(Geom_Geometry)   Copy() const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    D0(const Standard_Real U,
                                                       gp_Pnt& P) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    D1(const Standard_Real U,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    D2(const Standard_Real U,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1,
                                                       gp_Vec& V2) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    D3(const Standard_Real U,
                                                       gp_Pnt& P,
                                                       gp_Vec& V1,
                                                       gp_Vec& V2,
                                                       gp_Vec& V3) const Standard_OVERRIDE;
    virtual Standard_EXPORT gp_Vec                  DN(const Standard_Real U,
                                                       const Standard_Integer N) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    DumpJson(Standard_OStream& theOStream,
                                                             Standard_Integer theDepth = -1) const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Real           FirstParameter() const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Boolean        IsClosed() const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Boolean        IsCN(const Standard_Integer N) const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Boolean        IsPeriodic() const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Real           LastParameter() const Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Real           ParametricTransformation(const gp_Trsf& T) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    Reverse() Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Real           ReversedParameter(const Standard_Real U) const Standard_OVERRIDE;
    virtual Standard_EXPORT void                    Transform(const gp_Trsf& T) Standard_OVERRIDE;
    virtual Standard_EXPORT Standard_Real           TransformedParameter(const Standard_Real U,
                                                                         const gp_Trsf& T) const Standard_OVERRIDE;

public:

    Standard_EXPORT const gp_Ax2&       Position() const;
    Standard_EXPORT Standard_Real       Parameter() const;
    Standard_EXPORT void                SetPosition(const gp_Ax2& thePosition);
    Standard_EXPORT void                SetParameter(const Standard_Real theParameter);

protected:

    Standard_Real   myParameter;
    gp_Ax2          myPosition;

public:

    DEFINE_STANDARD_RTTIEXT(Geom_Catenary, Geom_Curve);

};


#endif // __Geom_Catenary_hxx__
