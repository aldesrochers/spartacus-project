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
#include <Geom_Catenary.hxx>
#include <ElCLib_Catenary.hxx>

// OpenCascade
#include <Precision.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom_Catenary::Geom_Catenary()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom_Catenary::Geom_Catenary(const gp_Catenary& theCatenary)
{
    myParameter = theCatenary.Parameter();
    myPosition = theCatenary.Position();
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Geom_Catenary::Geom_Catenary(const gp_Ax2& thePosition,
                             const Standard_Real theParameter)
    : myParameter(theParameter),
      myPosition(thePosition)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Geom_Catenary::~Geom_Catenary()
{

}

// ============================================================================
/*!
 *  \brief Catenary()
*/
// ============================================================================
gp_Catenary Geom_Catenary::Catenary() const
{
    return gp_Catenary(myPosition, myParameter);
}

// ============================================================================
/*!
 *  \brief Continuity()
*/
// ============================================================================
GeomAbs_Shape Geom_Catenary::Continuity() const
{
    return GeomAbs_CN;
}

// ============================================================================
/*!
 *  \brief Copy()
*/
// ============================================================================
Handle(Geom_Geometry) Geom_Catenary::Copy() const
{
    Handle(Geom_Catenary) aCatenary =
            new Geom_Catenary(myPosition, myParameter);
    return aCatenary;
}

// ============================================================================
/*!
 *  \brief D0()
*/
// ============================================================================
void Geom_Catenary::D0(const Standard_Real U,
                       gp_Pnt &P) const
{
    P = ElCLib_Catenary::CatenaryValue(U, myPosition, myParameter);
}

// ============================================================================
/*!
 *  \brief D1()
*/
// ============================================================================
void Geom_Catenary::D1(const Standard_Real U,
                       gp_Pnt &P,
                       gp_Vec &V1) const
{
    ElCLib_Catenary::CatenaryD1(U, myPosition, myParameter, P, V1);
}

// ============================================================================
/*!
 *  \brief D2()
*/
// ============================================================================
void Geom_Catenary::D2(const Standard_Real U,
                       gp_Pnt &P,
                       gp_Vec &V1,
                       gp_Vec &V2) const
{
    ElCLib_Catenary::CatenaryD2(U, myPosition, myParameter, P, V1, V2);
}

// ============================================================================
/*!
 *  \brief D3()
*/
// ============================================================================
void Geom_Catenary::D3(const Standard_Real U,
                       gp_Pnt &P,
                       gp_Vec &V1,
                       gp_Vec &V2,
                       gp_Vec &V3) const
{
     ElCLib_Catenary::CatenaryD3(U, myPosition, myParameter, P, V1, V2, V3);
}

// ============================================================================
/*!
 *  \brief DN()
*/
// ============================================================================
gp_Vec Geom_Catenary::DN(const Standard_Real U,
                         const Standard_Integer N) const
{
    Standard_RangeError_Raise_if(N < 1, NULL);
    return ElCLib_Catenary::CatenaryDN(U, myPosition, myParameter, N);
}

// ============================================================================
/*!
 *  \brief DumpJson()
*/
// ============================================================================
void Geom_Catenary::DumpJson(Standard_OStream &theOStream,
                             Standard_Integer theDepth) const
{
    OCCT_DUMP_TRANSIENT_CLASS_BEGIN(theOStream);
    OCCT_DUMP_BASE_CLASS (theOStream, theDepth, Geom_Curve);
    OCCT_DUMP_FIELD_VALUE_NUMERICAL(theOStream, myParameter);
    OCCT_DUMP_FIELD_VALUES_DUMPED (theOStream, theDepth, &myPosition);
}

// ============================================================================
/*!
 *  \brief FirstParameter()
*/
// ============================================================================
Standard_Real Geom_Catenary::FirstParameter() const
{
    return -Precision::Infinite();
}

// ============================================================================
/*!
 *  \brief IsClosed()
*/
// ============================================================================
Standard_Boolean Geom_Catenary::IsClosed() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief IsCN()
*/
// ============================================================================
Standard_Boolean Geom_Catenary::IsCN(const Standard_Integer N) const
{
    return Standard_True;
}

// ============================================================================
/*!
 *  \brief IsPeriodic()
*/
// ============================================================================
Standard_Boolean Geom_Catenary::IsPeriodic() const
{
    return Standard_False;
}

// ============================================================================
/*!
 *  \brief LastParameter()
*/
// ============================================================================
Standard_Real Geom_Catenary::LastParameter() const
{
    return Precision::Infinite();
}

// ============================================================================
/*!
 *  \brief Parameter()
*/
// ============================================================================
Standard_Real Geom_Catenary::Parameter() const
{
    return myParameter;
}

// ============================================================================
/*!
 *  \brief ParametricTransformation()
*/
// ============================================================================
Standard_Real Geom_Catenary::ParametricTransformation(const gp_Trsf &T) const
{
    return Abs(T.ScaleFactor());
}

// ============================================================================
/*!
 *  \brief Position()
*/
// ============================================================================
const gp_Ax2& Geom_Catenary::Position() const
{
    return myPosition;
}

// ============================================================================
/*!
 *  \brief Reverse()
*/
// ============================================================================
void Geom_Catenary::Reverse()
{
    gp_Dir Vz = myPosition.Direction ();
    Vz.Reverse();
    myPosition.SetDirection(Vz);
}

// ============================================================================
/*!
 *  \brief ReversedParameter()
*/
// ============================================================================
Standard_Real Geom_Catenary::ReversedParameter(const Standard_Real U) const
{
    return (-U);
}

// ============================================================================
/*!
 *  \brief SetParameter()
*/
// ============================================================================
void Geom_Catenary::SetParameter(const Standard_Real theParameter)
{
    myParameter = theParameter;
}

// ============================================================================
/*!
 *  \brief SetPosition()
*/
// ============================================================================
void Geom_Catenary::SetPosition(const gp_Ax2 &thePosition)
{
    myPosition = thePosition;
}

// ============================================================================
/*!
 *  \brief Transform()
*/
// ============================================================================
void Geom_Catenary::Transform(const gp_Trsf &T)
{
    myParameter *= Abs(T.ScaleFactor());
    myPosition.Transform(T);
}

// ============================================================================
/*!
 *  \brief TransformedParameter()
*/
// ============================================================================
Standard_Real Geom_Catenary::TransformedParameter(const Standard_Real U,
                                                    const gp_Trsf &T) const
{
    if(Precision::IsInfinite(U))
        return U;
    return U * Abs(T.ScaleFactor());
}



// ****************************************************************************
// Handles
// ****************************************************************************
//IMPLEMENT_STANDARD_HANDLE(Geom_Catenary, Geom_Curve);
IMPLEMENT_STANDARD_RTTIEXT(Geom_Catenary, Geom_Curve);

