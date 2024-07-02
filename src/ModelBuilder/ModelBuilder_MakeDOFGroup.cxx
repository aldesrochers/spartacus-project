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
#include <ModelBuilder_MakeDOFGroup.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelExp.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeDOFGroup::ModelBuilder_MakeDOFGroup(const MeshDS_Vertex& theVertex)
    : myError(ModelBuilder_DOFGroupNoError)
{
    Initialize(theVertex);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeDOFGroup::~ModelBuilder_MakeDOFGroup()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelBuilder_MakeDOFGroup::AddDOF(const ModelDS_DOF &theDOF)
{
    // check if dof with same type already exists
    // if exists, setup error, do not add
    ModelAbs_TypeOfDOF aType1 = ModelDS_Tool::DOFType(theDOF);
    ModelTools_IndexedMapOfObject aMap;
    ModelExp::MapDOFs(ModelDS::DOFGroup(myObject), aMap);
    for(Standard_Integer i=1; i<=aMap.Size(); i++) {
        ModelDS_DOF aDOF = ModelDS::DOF(aMap.FindKey(i));
        ModelAbs_TypeOfDOF aType2 = ModelDS_Tool::DOFType(aDOF);
        if(aType1 == aType2) {
            myError = ModelBuilder_DOFGroupDOFExistsError;
            SetNotDone();
            return;
        }
    }

    // add to dof group
    ModelDS_Builder aBuilder;
    aBuilder.AddDOF(ModelDS::DOFGroup(myObject), theDOF);
    SetDone();
}

// ============================================================================
/*!
 *  \brief DOFGroup()
*/
// ============================================================================
const ModelDS_DOFGroup& ModelBuilder_MakeDOFGroup::DOFGroup() const
{
    return ModelDS::DOFGroup(Object());
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
ModelBuilder_DOFGroupError ModelBuilder_MakeDOFGroup::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeDOFGroup::Initialize(const MeshDS_Vertex &theVertex)
{
    ModelDS_Builder aBuilder;
    aBuilder.MakeDOFGroup(ModelDS::DOFGroup(myObject), theVertex);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeDOFGroup::Initialize(const ModelDS_DOFGroup &theGroup)
{

}

// ============================================================================
/*!
 *  \brief operator ModelDS_DOFGroup()
*/
// ============================================================================
ModelBuilder_MakeDOFGroup::operator ModelDS_DOFGroup() const
{
    return DOFGroup();
}
