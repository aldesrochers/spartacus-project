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
#include <DOFAdaptor_DOF.hxx>
#include <ModelBuilder_MakeNode1d.hxx>
#include <ModelDS.hxx>
#include <ModelDS_Builder.hxx>
#include <ModelDS_Tool.hxx>
#include <ModelExp.hxx>



// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::ModelBuilder_MakeNode1d(const gp_Pnt1d& thePoint)
{
    Initialize(thePoint);
}

// ============================================================================
/*!
 *  \brief Constructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::ModelBuilder_MakeNode1d(const gp_Pnt1d& thePoint,
                                                 const ModelDS_DOF& theDOF1)
{
    Initialize(thePoint, theDOF1);
}

// ============================================================================
/*!
 *  \brief Destructor
*/
// ============================================================================
ModelBuilder_MakeNode1d::~ModelBuilder_MakeNode1d()
{

}

// ============================================================================
/*!
 *  \brief AddDOF()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::AddDOF(const ModelDS_DOF &theDOF)
{
    // retrieve type of DOF
    const Handle(DOF_DegreeOfFreedom)& aDegreeOfFreedom1 = ModelDS_Tool::DegreeOfFreedom(theDOF);
    DOFAdaptor_DOF anAdaptor1(aDegreeOfFreedom1);
    DOFAbs_TypeOfDOF aType1 = anAdaptor1.DOFType();

    // check if valid DOF type
    if(aType1 != DOFAbs_DOF_DX) {
        myError = ModelBuilder_NodeUnsupportedDOFError;
        return;
    }

    // check if DOF already bounded on node
    for(Standard_Integer i=1; i<=myDOFs.Size(); i++) {
        ModelDS_DOF aDOF = ModelDS::DOF(myDOFs.FindKey(i));
        const Handle(DOF_DegreeOfFreedom)& aDegreeOfFreedom2 = ModelDS_Tool::DegreeOfFreedom(aDOF);
        DOFAdaptor_DOF anAdaptor2(aDegreeOfFreedom2);
        DOFAbs_TypeOfDOF aType2 = anAdaptor2.DOFType();
        if(aType1 == aType2) {
            myError = ModelBuilder_NodeExistingDOFError;
            return;
        }
    }

    // if here, dof is valid, add to internal map
    myDOFs.Add(theDOF);
    SetDone();
}

// ============================================================================
/*!
 *  \brief Build()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Build()
{
    ModelDS_Builder aBuilder;
    aBuilder.MakeNode(ModelDS::Node(myObject), myPoint);
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
ModelBuilder_NodeError ModelBuilder_MakeNode1d::Error() const
{
    return myError;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Initialize(const gp_Pnt1d& thePoint)
{
    myError = ModelBuilder_NodeNoError;
    myPoint = thePoint;
}

// ============================================================================
/*!
 *  \brief Initialize()
*/
// ============================================================================
void ModelBuilder_MakeNode1d::Initialize(const gp_Pnt1d& thePoint,
                                         const ModelDS_DOF& theDOF1)
{
    Initialize(thePoint);
    AddDOF(theDOF1);
}

// ============================================================================
/*!
 *  \brief NbDOFs()
*/
// ============================================================================
Standard_Integer ModelBuilder_MakeNode1d::NbDOFs() const
{
    return myDOFs.Size();
}

// ============================================================================
/*!
 *  \brief Node()
*/
// ============================================================================
const ModelDS_Node& ModelBuilder_MakeNode1d::Node() const
{
    return ModelDS::Node(Object());
}

// ============================================================================
/*!
 *  \brief operator ModelDS_Node()
*/
// ============================================================================
ModelBuilder_MakeNode1d::operator ModelDS_Node() const
{
    return Node();
}

// ============================================================================
/*!
 *  \brief Point()
*/
// ============================================================================
const gp_Pnt1d& ModelBuilder_MakeNode1d::Point() const
{
    return myPoint;
}
