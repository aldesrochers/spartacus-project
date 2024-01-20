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

#include <iostream>
using namespace std;

// Spartacus
#include <DCPnts_FunctionUniformLength.hxx>

// OpenCascade
#include <gp_Pnt.hxx>
#include <Precision.hxx>


// ****************************************************************************
/*!
 *  \brief Function()
*/
// ****************************************************************************
static Standard_Real Function(const Standard_Address& theAddress,
                              const Standard_Real U1,
                              const Standard_Real U2,
                              const Standard_Real U3)
{
    gp_Pnt P1 = ((Adaptor3d_Curve*) theAddress)->Value(U1);
    gp_Pnt P2 = ((Adaptor3d_Curve*) theAddress)->Value(U2);
    gp_Pnt P3 = ((Adaptor3d_Curve*) theAddress)->Value(U3);
    Standard_Real D1 = P1.Distance(P2);
    Standard_Real D2 = P2.Distance(P3);
    return D2 - D1;
}

// ****************************************************************************
/*!
 *  \brief FunctionDU1()
*/
// ****************************************************************************
static Standard_Real FunctionDU1(const Standard_Address& theAddress,
                                 const Standard_Real U1,
                                 const Standard_Real U2,
                                 const Standard_Real U3,
                                 const Standard_Real H = Precision::Confusion())
{
    Standard_Real FH = Function(theAddress, U1+H, U2, U3);
    Standard_Real F = Function(theAddress, U1, U2, U3);
    return (FH-F)/H;
}

// ****************************************************************************
/*!
 *  \brief FunctionDU2()
*/
// ****************************************************************************
static Standard_Real FunctionDU2(const Standard_Address& theAddress,
                                 const Standard_Real U1,
                                 const Standard_Real U2,
                                 const Standard_Real U3,
                                 const Standard_Real H = Precision::Confusion())
{
    Standard_Real FH = Function(theAddress, U1, U2+H, U3);
    Standard_Real F = Function(theAddress, U1, U2, U3);
    return (FH-F)/H;
}

// ****************************************************************************
/*!
 *  \brief FunctionDU3()
*/
// ****************************************************************************
static Standard_Real FunctionDU3(const Standard_Address& theAddress,
                                 const Standard_Real U1,
                                 const Standard_Real U2,
                                 const Standard_Real U3,
                                 const Standard_Real H = Precision::Confusion())
{
    Standard_Real FH = Function(theAddress, U1, U2, U3+H);
    Standard_Real F = Function(theAddress, U1, U2, U3);
    return (FH-F)/H;
}


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
DCPnts_FunctionUniformLength::DCPnts_FunctionUniformLength(const Adaptor3d_Curve& theAdaptor,
                                                           const Standard_Real theUFirst,
                                                           const Standard_Real theULast,
                                                           const Standard_Integer theNbSegments)
    : myNbSegments(theNbSegments),
      myUFirst(theUFirst),
      myULast(theULast)
{
    myAdaptor = (Standard_Address) &theAdaptor;
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
DCPnts_FunctionUniformLength::~DCPnts_FunctionUniformLength()
{

}

// ============================================================================
/*!
 *  \brief Derivatives()
*/
// ============================================================================
Standard_Boolean DCPnts_FunctionUniformLength::Derivatives(const math_Vector &X,
                                                           math_Matrix &D)
{
    if(myNbSegments < 2)
        return Standard_False;

    for(Standard_Integer i=1; i<=NbVariables(); i++) {

        Standard_Real U1;
        if(i == 1)
            U1 = myUFirst;
        else
            U1 = X.Value(i-1);

        Standard_Real U2 = X.Value(i);
        if(U2 <= myUFirst || U2 >= myULast)
            return Standard_False;

        Standard_Real U3;
        if(i == NbVariables())
            U3 = myULast;
        else
            U3 = X.Value(i+1);

        if(NbVariables() == 1) {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
        } else if(NbVariables() == 2 && i == 1) {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
            D(i,i+1) = FunctionDU3(myAdaptor, U1, U2, U3);
        } else if(NbVariables() == 2 && i == 2) {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
            D(i,i-1) = FunctionDU1(myAdaptor, U1, U2, U3);
        } else if(NbVariables() > 2 && i == 1) {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
            D(i,i+1) = FunctionDU3(myAdaptor, U1, U2, U3);
        } else if(NbVariables() > 2 && i == NbVariables()) {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
            D(i,i-1) = FunctionDU1(myAdaptor, U1, U2, U3);
        } else {
            D(i,i) = FunctionDU2(myAdaptor, U1, U2, U3);
            D(i,i+1) = FunctionDU3(myAdaptor, U1, U2, U3);
            D(i,i-1) = FunctionDU1(myAdaptor, U1, U2, U3);
        }

    }

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief NbEquations()
*/
// ============================================================================
Standard_Integer DCPnts_FunctionUniformLength::NbEquations() const
{
    return myNbSegments - 1;
}

// ============================================================================
/*!
 *  \brief NbVariables()
*/
// ============================================================================
Standard_Integer DCPnts_FunctionUniformLength::NbVariables() const
{
    return myNbSegments - 1;
}

// ============================================================================
/*!
 *  \brief Value()
*/
// ============================================================================
Standard_Boolean DCPnts_FunctionUniformLength::Value(const math_Vector &X,
                                                     math_Vector &F)
{
    if(myNbSegments < 2)
        return Standard_False;

    for(Standard_Integer i=1; i<=NbVariables(); i++) {

        Standard_Real U1;
        if(i == 1)
            U1 = myUFirst;
        else
            U1 = X.Value(i-1);

        Standard_Real U2 = X.Value(i);
        if(U2 <= myUFirst || U2 >= myULast)
            return Standard_False;

        Standard_Real U3;
        if(i == NbVariables())
            U3 = myULast;
        else
            U3 = X.Value(i+1);

        F(i) = Function(myAdaptor, U1, U2, U3);
    }

    return Standard_True;
}

// ============================================================================
/*!
 *  \brief Values()
*/
// ============================================================================
Standard_Boolean DCPnts_FunctionUniformLength::Values(const math_Vector &X,
                                                      math_Vector &F,
                                                      math_Matrix &D)
{
    if(!Value(X,F))
        return Standard_False;
    if(!Derivatives(X,D))
        return Standard_False;
    return Standard_True;
}
