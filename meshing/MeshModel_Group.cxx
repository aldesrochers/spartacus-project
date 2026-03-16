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

#include "MeshModel_Group.hxx"

#include <algorithm>
#include <stdexcept>

// ============================================================================
// Constructors
// ============================================================================

MeshModel_Group::MeshModel_Group(const std::string& theName)
    : myName(theName)
{
    if (theName.empty())
        throw std::invalid_argument("MeshModel_Group: name must not be empty");
}

// ============================================================================
// Name
// ============================================================================

const std::string& MeshModel_Group::Name() const
{
    return myName;
}

void MeshModel_Group::SetName(const std::string& theName)
{
    if (theName.empty())
        throw std::invalid_argument("MeshModel_Group: name must not be empty");
    myName = theName;
}

// ============================================================================
// Shape membership
// ============================================================================

int MeshModel_Group::NbShapes() const
{
    return static_cast<int>(myIndices.size());
}

int MeshModel_Group::ShapeIndex(int thePosition) const
{
    if (thePosition < 0 || thePosition >= static_cast<int>(myIndices.size()))
        throw std::out_of_range("MeshModel_Group: position out of range");
    return myIndices[thePosition];
}

bool MeshModel_Group::Contains(int theIndex) const
{
    return std::find(myIndices.begin(), myIndices.end(), theIndex) != myIndices.end();
}

void MeshModel_Group::Add(int theIndex)
{
    if (theIndex < 0)
        throw std::invalid_argument("MeshModel_Group: shape index must be >= 0");
    if (!Contains(theIndex))
        myIndices.push_back(theIndex);
}

void MeshModel_Group::Remove(int theIndex)
{
    auto it = std::find(myIndices.begin(), myIndices.end(), theIndex);
    if (it != myIndices.end())
        myIndices.erase(it);
}

void MeshModel_Group::Clear()
{
    myIndices.clear();
}

// ============================================================================
// Iteration
// ============================================================================

const std::vector<int>& MeshModel_Group::Indices() const
{
    return myIndices;
}
