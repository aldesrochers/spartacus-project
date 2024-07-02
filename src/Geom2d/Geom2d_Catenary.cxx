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
#include <Geom2d_Catenary.hxx>
#include <ElCLib_Catenary.hxx>

// OpenCascade
#include <Precision.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom2d_Catenary::Geom2d_Catenary()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom2d_Catenary::Geom2d_Catenary(const gp_Catenary2d& theCatenary)
{
    myParameter = theCatenary.Parameter();
    myPosition = theCatenary.Position();
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom2d_Catenary::Geom2d_Catenary(const gp_Ax22d& thePosition,
                                 const Standard_Real theParameter)
    : myParameter(theParameter),
      myPosition(thePosition)
{
    Standard_ConstructionError_Raise_if(theParameter < 0., "");
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom2d_Catenary::Geom2d_Catenary(const gp_Ax2d& theMirrorAxis,
                                 const Standard_Real theParameter,
                                 const Standard_Boolean theSense)
    : myParameter(theParameter)
{
    myPosition = gp_Ax22d(theMirrorAxis, theSense);
    Standard_ConstructionError_Raise_if(theParameter < 0., "");
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Geom2d_Catenary::~Geom2d_Catenary()
{

}

// ============================================================================
/*!
 *  \brief Catenary2d()
*/
// ============================================================================
gp_Catenary2d Geom2d_Catenary::Catenary2d() const
{
    return gp_Catenary2d(myPosition, myParameter);
}

// ============================================================================
/*!
 *  \brief Continuity()
*/
// ============================================================================
GeomAbs_Shape Geom2d_Catenary::Continuity() const
{
    return GeomAbs_CN;
}

// ============================================================================
/*!
 *  \brief Copy()
*/
// ============================================================================
Handle(Geom2d_Geometry) Geom2d_Catenary::Copy() const
{
    Handle(Geom2d_Catenary) aCatenary =
            new Geom2d_Catenary(myPosition, myParameter);
    return aCatenary;
}

// ============================================================================
/*!
 *  \brief D0()
*/
// ============================================================================
void Geom2d_Catenary::D0(const Standard_Real U,
                         gp_Pnt2d &P) const
{
    P = ElCLib_Catenary::CatenaryValue(U, myPosition, myParameter);
}

// ============================================================================
/*!
 *  \brief D1()
*/
// ============================================================================
void Geom2d_Catenary::D1(const Standard_Real U,
                         gp_Pnt2d &P,
                         gp_Vec2d &V1) const
{
    ElCLib_Catenary::CatenaryD1(U, myPosition, myParameter, P, V1);
}

// ============================================================================
/*!
 *  \brief D2()
*/
// ============================================================================
void Geom2d_Catenary::D2(const Standard_Real U,
                         gp_Pnt2d &P,
                         gp_Vec2d &V1,
                         gp_Vec2d &V2) const
{
    ElCLib_Catenary::CatenaryD2(U, myPosition, myParameter, P, V1, V2);
}

// ============================================================================
/*!
 *  \brief D3()
*/
// ============================================================================
void Geom2d_Catenary::D3(const Standard_Real U,
                         gp_Pnt2d &P,
                         gp_Vec2d &V1,
                         gp_Vec2d &V2,
                         gp_Vec2d &V3) const
{
     ElCLib_Catenary::CatenaryD3(U, myPosition, myParameter, P, V1, V2, V3);
}

// ============================================================================
/*!
 *  \brief DN()
*/
// ============================================================================
gp_Vec2d Geom2d_Catenary::DN(const Standard_Real U, const Standard_Integer N) const
{
    Standard_RangeError_Raise_if(N < 1, NULL);
    return ElCLib_Catenary::CatenaryDN(U, myPosition, myParameter, N);
}

// ============================================================================
/*!
 *  \brief DumpJson()
*/
// ============================================================================
void Geom2d_Catenary::DumpJson(Standard_OStream &theOStream,
                               Standard_Integer theDepth) const
{
    OCCT_DUMP_TRANSIENT_CLASS_BEGIN(theOStream);
    OCCT_DUMP_BASE_CLASS (theOStream, theDepth, Geom2d_Curve);
    OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, myParameter);
    OCCT_DUMP_FIELD_VALUES_DUMPED (theOStream, theDepth, &myPosition);
}

// ============================================================================
/*!
 *  \brief FirstParameter()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::FirstParameter() const
{
    return -Precision::Infinite();
}

// ============================================================================
/*!
 *  \brief IsClosed()
*/
// ============================================================================
Standard_Boolean Geom2d_Catenary::IsClosed() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCN()
*/
// ============================================================================
Standard_Boolean Geom2d_Catenary::IsCN(const Standard_Integer N) const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief IsPeriodic()
*/
// ============================================================================
Standard_Boolean Geom2d_Catenary::IsPeriodic() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief LastParameter()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::LastParameter() const
{
    return Precision::Infinite();
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::Parameter() const
{
    return myParameter;
}

// ============================================================================
/*!
 *  \brief ParametricTransformation()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::ParametricTransformation(const gp_Trsf2d &T) const
{
    return Abs(T.ScaleFactor());
}

// ============================================================================
/*!
 *  \brief Position()
*/
// ============================================================================
const gp_Ax22d& Geom2d_Catenary::Position() const
{
    return myPosition;
}

// ============================================================================
/*!
 *  \brief Reverse()
*/
// ============================================================================
void Geom2d_Catenary::Reverse()
{
    gp_Dir2d aYDirection = myPosition.YDirection();
    aYDirection.Reverse();
    gp_Ax22d anAxis(myPosition.Location(), myPosition.XDirection(), aYDirection);
    myPosition.SetAxis(anAxis);
}

// ============================================================================
/*!
 *  \brief ReversedParameter()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::ReversedParameter(const Standard_Real U) const
{
    return (-U);
}

// ============================================================================
/*!
 *  \brief SetParameter()
*/
// ============================================================================
void Geom2d_Catenary::SetParameter(const Standard_Real theParameter)
{
    myParameter = theParameter;
}

// ============================================================================
/*!
 *  \brief SetPosition()
*/
// ============================================================================
void Geom2d_Catenary::SetPosition(const gp_Ax22d &thePosition)
{
    myPosition = thePosition;
}

// ============================================================================
/*!
 *  \brief Transform()
*/
// ============================================================================
void Geom2d_Catenary::Transform(const gp_Trsf2d &T)
{
    myParameter *= Abs(T.ScaleFactor());
    myPosition.Transform(T);
}

// ============================================================================
/*!
 *  \brief TransformedParameter()
*/
// ============================================================================
Standard_Real Geom2d_Catenary::TransformedParameter(const Standard_Real U,
                                                    const gp_Trsf2d &T) const
{
    if(Precision::IsInfinite(U))
        return U;
    return U * Abs(T.ScaleFactor());
}



// ****************************************************************************
// Handles
// ****************************************************************************
//IMPLEMENT_STANDARD_HANDLE(Geom2d_Catenary, Geom2d_Curve);
IMPLEMENT_STANDARD_RTTIEXT(Geom2d_Catenary, Geom2d_Curve);

