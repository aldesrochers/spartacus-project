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
#include <Toolkit_Version.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Toolkit_Version::Toolkit_Version()
{

}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
Toolkit_Version::Toolkit_Version(const Standard_Integer theMajor,
                                 const Standard_Integer theMinor,
                                 const Standard_Integer thePatch)
    : myMajor(theMajor),
    myMinor(theMinor),
    myPatch(thePatch)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
Toolkit_Version::~Toolkit_Version()
{

}

// ============================================================================
/*!
 *  \brief Major()
*/
// ============================================================================
Standard_Integer Toolkit_Version::Major() const
{
    return myMajor;
}

// ============================================================================
/*!
 *  \brief Minor()
*/
// ============================================================================
Standard_Integer Toolkit_Version::Minor() const
{
    return myMinor;
}

// ============================================================================
/*!
 *  \brief Patch()
*/
// ============================================================================
Standard_Integer Toolkit_Version::Patch() const
{
    return myPatch;
}

// ============================================================================
/*!
 *  \brief SetMajor()
*/
// ============================================================================
void Toolkit_Version::SetMajor(const Standard_Integer theMajor)
{
    myMajor = theMajor;
}

// ============================================================================
/*!
 *  \brief SetMinor()
*/
// ============================================================================
void Toolkit_Version::SetMinor(const Standard_Integer theMinor)
{
    myMinor = theMinor;
}

// ============================================================================
/*!
 *  \brief SetPatch()
*/
// ============================================================================
void Toolkit_Version::SetPatch(const Standard_Integer thePatch)
{
    myPatch = thePatch;
}

// ============================================================================
/*!
 *  \brief String()
*/
// ============================================================================
TCollection_AsciiString Toolkit_Version::String() const
{
    TCollection_AsciiString aString;
    aString += myMajor;
    aString += ".";
    aString += myMinor;
    aString += ".";
    aString += myPatch;
    return aString;

}
