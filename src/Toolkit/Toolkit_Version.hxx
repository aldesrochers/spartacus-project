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


#ifndef __Toolkit_Version2_hxx__
#define __Toolkit_Version2_hxx__

// OpenCascade
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <TCollection_AsciiString.hxx>


// ============================================================================
/*!
 *  \brief Toolkit_Version
*/
// ============================================================================
class Toolkit_Version
{

public:

    DEFINE_STANDARD_ALLOC

public:
    // constructors
    Standard_EXPORT Toolkit_Version();
    Standard_EXPORT Toolkit_Version(const Standard_Integer theMajor,
                                    const Standard_Integer theMinor,
                                    const Standard_Integer thePatch);
    // destructors
    Standard_EXPORT ~Toolkit_Version();

public:

    Standard_EXPORT Standard_Integer            Major() const;
    Standard_EXPORT Standard_Integer            Minor() const;
    Standard_EXPORT Standard_Integer            Patch() const;
    Standard_EXPORT void                        SetMajor(const Standard_Integer theMajor);
    Standard_EXPORT void                        SetMinor(const Standard_Integer theMinor);
    Standard_EXPORT void                        SetPatch(const Standard_Integer thePatch);
    Standard_EXPORT TCollection_AsciiString     String() const;

private:

    Standard_Integer    myMajor;
    Standard_Integer    myMinor;
    Standard_Integer    myPatch;

};


#endif // __Toolkit_Version_hxx__
