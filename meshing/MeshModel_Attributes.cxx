// Copyright (C) 2024 Alexandros DESROCHERS
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This library is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
// for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

#include "MeshModel_Attributes.hxx"

#include <stdexcept>

// ============================================================================
// Constructors
// ============================================================================

MeshModel_Attributes::MeshModel_Attributes()
    : myLinearDeflection(1.0e-3),
      myAngularDeflection(0.5),
      myIsRelative(false),
      myMinSize(0.0),
      myMaxSize(0.0),
      myMeshOrder(1)
{
}

MeshModel_Attributes::MeshModel_Attributes(double theLinearDeflection,
                                           double theAngularDeflection,
                                           bool   theIsRelative)
    : myLinearDeflection(theLinearDeflection),
      myAngularDeflection(theAngularDeflection),
      myIsRelative(theIsRelative),
      myMinSize(0.0),
      myMaxSize(0.0),
      myMeshOrder(1)
{
    if (theLinearDeflection <= 0.0)
        throw std::invalid_argument("MeshModel_Attributes: linear deflection must be > 0");
    if (theAngularDeflection <= 0.0)
        throw std::invalid_argument("MeshModel_Attributes: angular deflection must be > 0");
}

// ============================================================================
// Linear deflection
// ============================================================================

double MeshModel_Attributes::LinearDeflection() const
{
    return myLinearDeflection;
}

void MeshModel_Attributes::SetLinearDeflection(double theValue)
{
    if (theValue <= 0.0)
        throw std::invalid_argument("MeshModel_Attributes: linear deflection must be > 0");
    myLinearDeflection = theValue;
}

// ============================================================================
// Angular deflection
// ============================================================================

double MeshModel_Attributes::AngularDeflection() const
{
    return myAngularDeflection;
}

void MeshModel_Attributes::SetAngularDeflection(double theValue)
{
    if (theValue <= 0.0)
        throw std::invalid_argument("MeshModel_Attributes: angular deflection must be > 0");
    myAngularDeflection = theValue;
}

// ============================================================================
// Relative flag
// ============================================================================

bool MeshModel_Attributes::IsRelative() const
{
    return myIsRelative;
}

void MeshModel_Attributes::SetRelative(bool theFlag)
{
    myIsRelative = theFlag;
}

// ============================================================================
// Minimum element size
// ============================================================================

double MeshModel_Attributes::MinSize() const
{
    return myMinSize;
}

void MeshModel_Attributes::SetMinSize(double theValue)
{
    if (theValue < 0.0)
        throw std::invalid_argument("MeshModel_Attributes: min size must be >= 0");
    myMinSize = theValue;
}

// ============================================================================
// Maximum element size
// ============================================================================

double MeshModel_Attributes::MaxSize() const
{
    return myMaxSize;
}

void MeshModel_Attributes::SetMaxSize(double theValue)
{
    if (theValue < 0.0)
        throw std::invalid_argument("MeshModel_Attributes: max size must be >= 0");
    myMaxSize = theValue;
}

// ============================================================================
// Mesh order
// ============================================================================

int MeshModel_Attributes::MeshOrder() const
{
    return myMeshOrder;
}

void MeshModel_Attributes::SetMeshOrder(int theOrder)
{
    if (theOrder != 1 && theOrder != 2)
        throw std::invalid_argument("MeshModel_Attributes: mesh order must be 1 or 2");
    myMeshOrder = theOrder;
}
