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

#ifndef MeshModel_Attributes_hxx
#define MeshModel_Attributes_hxx

// ============================================================================
// MeshModel_Attributes
//
// Holds meshing parameters assigned to shapes or groups prior to meshing.
// Parameters control the resolution and quality of the resulting mesh.
// ============================================================================

class MeshModel_Attributes
{
public:
    // -------------------------------------------------------------------------
    // Constructors
    // -------------------------------------------------------------------------

    //! Constructs default attributes.
    //! Default: linear deflection=1e-3, angular deflection=0.5 rad, relative=false,
    //!          min size=0.0, max size=0.0 (unconstrained), mesh order=1.
    MeshModel_Attributes();

    //! Constructs attributes with explicit linear and angular deflection.
    //! @param theLinearDeflection  Chord deviation tolerance.
    //! @param theAngularDeflection Maximum angle (radians) between adjacent facets.
    //! @param theIsRelative        If true, deflection values are relative to the
    //!                             bounding box diagonal of each shape.
    MeshModel_Attributes(double theLinearDeflection,
                         double theAngularDeflection,
                         bool   theIsRelative = false);

    // -------------------------------------------------------------------------
    // Linear deflection
    // -------------------------------------------------------------------------

    //! Returns the chord-deviation tolerance.
    double LinearDeflection() const;

    //! Sets the chord-deviation tolerance.
    //! @param theValue Must be > 0.
    void SetLinearDeflection(double theValue);

    // -------------------------------------------------------------------------
    // Angular deflection
    // -------------------------------------------------------------------------

    //! Returns the maximum angle (radians) between adjacent facet normals.
    double AngularDeflection() const;

    //! Sets the maximum angle (radians) between adjacent facet normals.
    //! @param theValue Must be in (0, pi].
    void SetAngularDeflection(double theValue);

    // -------------------------------------------------------------------------
    // Relative flag
    // -------------------------------------------------------------------------

    //! Returns true when deflection values are relative to the shape bounding box.
    bool IsRelative() const;

    //! Toggles relative deflection mode.
    void SetRelative(bool theFlag);

    // -------------------------------------------------------------------------
    // Minimum element size
    // -------------------------------------------------------------------------

    //! Returns the minimum mesh element size (0 means unconstrained).
    double MinSize() const;

    //! Sets the minimum mesh element size.
    //! @param theValue Must be >= 0.
    void SetMinSize(double theValue);

    // -------------------------------------------------------------------------
    // Maximum element size
    // -------------------------------------------------------------------------

    //! Returns the maximum mesh element size (0 means unconstrained).
    double MaxSize() const;

    //! Sets the maximum mesh element size.
    //! @param theValue Must be >= 0.
    void SetMaxSize(double theValue);

    // -------------------------------------------------------------------------
    // Mesh order
    // -------------------------------------------------------------------------

    //! Returns the mesh order (1 = linear elements, 2 = quadratic elements).
    int MeshOrder() const;

    //! Sets the mesh order.
    //! @param theOrder Must be 1 (linear) or 2 (quadratic).
    void SetMeshOrder(int theOrder);

private:
    double myLinearDeflection;
    double myAngularDeflection;
    bool   myIsRelative;
    double myMinSize;
    double myMaxSize;
    int    myMeshOrder;
};

#endif // MeshModel_Attributes_hxx
