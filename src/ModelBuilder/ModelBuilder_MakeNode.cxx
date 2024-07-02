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
#include <MeshDS_Tool.hxx>
#include <ModelBuilder_MakeDOF.hxx>
#include <ModelBuilder_MakeNode.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>


// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode::ModelBuilder_MakeNode(const MeshDS_Vertex& theVertex)
    : myError(ModelBuilder_NodeNoError),
    myVertex(theVertex)
{

}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeNode::~ModelBuilder_MakeNode()
{

}

// ============================================================================
/*!
 *  \brief Add()
*/
// ============================================================================
void ModelBuilder_MakeNode::Add(const ModelDS_DOF &theDOF)
{
    /*
    // retrieve mesh dimensionality
    MeshAbs_TypeOfDimensionality aDimensionalityType = MeshDS_Tool::DimensionalityType(myVertex);

    // retrieve dof type
    ModelAbs_TypeOfDOF aDOFType = ModelDS_Tool::DOFType(theDOF);

    // check if valid dof
    if(aDimensionalityType == MeshAbs_DIM_0D) {
        myError = ModelBuilder_NodeUnsupportedDOFError;
        return;
    } else if(aDimensionalityType == MeshAbs_DIM_1D) {
        if(aDOFType == ModelAbs_DOF_DX) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_TEMP) {
            myDOFs.Add(theDOF);
        }
    } else if(aDimensionalityType == MeshAbs_DIM_2D) {
        if(aDOFType == ModelAbs_DOF_DX) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DY) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DRZ) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_TEMP) {
            myDOFs.Add(theDOF);
        }
    } else if(aDimensionalityType == MeshAbs_DIM_3D) {
        if(aDOFType == ModelAbs_DOF_DX) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DY) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DZ) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DRX) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DRY) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_DRZ) {
            myDOFs.Add(theDOF);
        } else if(aDOFType == ModelAbs_DOF_TEMP) {
            myDOFs.Add(theDOF);
        }
    } else {
        myError = ModelBuilder_NodeUnsupportedDOFError;
        return;
    }
    */
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void ModelBuilder_MakeNode::Build()
{

    // initialize node data structure
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(ModelDS::Node(myObject), myVertex);

    // loop each successfully added dof, add to node data structure
    for(Standard_Integer i=1; i<=myDOFs.Size(); i++) {
        ModelDS_DOF aDOF = ModelDS::DOF(myDOFs.FindKey(i));
        aBuilder.AddDOF(ModelDS::Node(myObject), aDOF);
    }

    SetDone();
}

// ============================================================================
/*!
 *  \brief Error()
*/
// ============================================================================
ModelBuilder_NodeError ModelBuilder_MakeNode::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief NbDOFs()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeNode::NbDOFs() const
{
    return myDOFs.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelBuilder_MakeNode::Node() const
{
    return ModelDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Node()
*/
// ============================================================================
ModelBuilder_MakeNode::operator ModelDS_Node() const
{
    return Node();
}

// ============================================================================
/*!
 *  \brief Vertex()
*/
// ============================================================================
const MeshDS_Vertex& ModelBuilder_MakeNode::Vertex() const
{
    return myVertex;
}
