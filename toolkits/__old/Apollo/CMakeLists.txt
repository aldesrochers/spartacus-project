# =============================================================================
# Copyright (C) 2021-
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
# Alexis L. Desrochers (alexisdesrochers@gmail.com)
#
# =============================================================================

set(Apollo_INCLUDE_DIRS
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/ACSR
    ${CMAKE_CURRENT_SOURCE_DIR}/CableLib
    ${CMAKE_CURRENT_SOURCE_DIR}/CreepTools
    ${CMAKE_CURRENT_SOURCE_DIR}/Crypto
    ${CMAKE_CURRENT_SOURCE_DIR}/DB
    ${CMAKE_CURRENT_SOURCE_DIR}/DBView
    ${CMAKE_CURRENT_SOURCE_DIR}/FWK
    ${CMAKE_CURRENT_SOURCE_DIR}/Icons
    ${CMAKE_CURRENT_SOURCE_DIR}/material
    ${CMAKE_CURRENT_SOURCE_DIR}/StdApp
    ${CMAKE_CURRENT_SOURCE_DIR}/XSF
    ${CMAKE_CURRENT_SOURCE_DIR}/XSM
    ${OpenCASCADE_INCLUDE_DIR}
    ${QtCore_INCLUDE_DIRS}
    ${QtGui_INCLUDE_DIRS}
    ${QtSql_INCLUDE_DIRS}
    ${QtWidgets_INCLUDE_DIRS}
)

set(Apollo_LINKED_LIBRARIES
    ${OpenCASCADE_FoundationClasses_LIBRARIES}
    ${QtCore_LIBRARIES}
    ${QtGui_LIBRARIES}
    ${QtSql_LIBRARIES}
    ${QtWidgets_LIBRARIES}
    ${QtSql_LIBRARIES}
)

set(Apollo_HEADERS
    ACSR/ACSR_ComponentParameters.hxx
    ACSR/ACSR_CreepTestData.hxx
    ACSR/ACSR_FitCreepTest.hxx
    ACSR/ACSR_StressStrainCurve.hxx
    CableLib/CableLib_Cable.hxx
    CableLib/CableLib_ElasticSection.hxx
    CableLib/CableLib_SaggingAnalysis.hxx
    CableLib/CableLib_Section.hxx
    CableLib/CableLib_Span.hxx
    CreepTools/CreepTools_FunctionCoefficients.hxx
    CreepTools/CreepTools_Solution.hxx
    Crypto/Crypto_XOR.hxx
    DB/DB.hxx
    DB/DB_Connection.hxx
    DB/DB_ConnectionsManager.hxx
    DBView/DBView_LoginDialog.hxx
    FWK/FWK.hxx
    FWK/FWK_Export.hxx
    FWK/FWK_StandardPaths.hxx
    Icons/Icons.hxx
    Icons/Icons_Manager.hxx
    material/material_Elastic.hxx
    material/material_ElasticWire.hxx
    XSF/XSF_ElasticWire.hxx
    XSM/XSM_ElasticCable.hxx
    XSM/XSM_Section.hxx
    XSM/XSM_UniaxialElastic.hxx
)

set(Apollo_SOURCES
    ACSR/ACSR_ComponentParameters.cxx
    ACSR/ACSR_CreepTestData.cxx
    ACSR/ACSR_FitCreepTest.cxx
    ACSR/ACSR_StressStrainCurve.cxx
    CableLib/CableLib_Cable.cxx
    CableLib/CableLib_ElasticSection.cxx
    CableLib/CableLib_SaggingAnalysis.cxx
    CableLib/CableLib_Section.cxx
    CableLib/CableLib_Span.cxx
    CreepTools/CreepTools_FunctionCoefficients.cxx
    CreepTools/CreepTools_Solution.cxx
    Crypto/Crypto_XOR.cxx
    DB/DB.cxx
    DB/DB_Connection.cxx
    DB/DB_ConnectionsManager.cxx
    DBView/DBView_LoginDialog.cxx
    FWK/FWK.cxx
    Icons/Icons_Manager.cxx
    material/material_Elastic.cxx
    material/material_ElasticWire.cxx
    XSF/XSF_ElasticWire.cxx
    XSM/XSM_ElasticCable.cxx
    XSM/XSM_Section.cxx
    XSM/XSM_UniaxialElastic.cxx
)

set(Apollo_UIS
    DBView/DBView_LoginDialog.ui
)

# icons
qt_add_binary_resources(Icons Icons/icons/Icons.qrc DESTINATION Icons.rcc)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/Icons.rcc DESTINATION ${Spartacus_INSTALL_RCCS})

# rules
add_library(Apollo SHARED ${Apollo_HEADERS} ${Apollo_SOURCES} ${Apollo_UIS})
target_include_directories(Apollo PUBLIC ${Apollo_INCLUDE_DIRS})
target_link_libraries(Apollo PUBLIC ${Apollo_LINKED_LIBRARIES})

# install library
install(
    TARGETS Apollo
    ARCHIVE DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    LIBRARY DESTINATION ${Spartacus_INSTALL_LIBRARIES}
    RUNTIME DESTINATION ${Spartacus_INSTALL_BINARIES}
)

# install header files
install(FILES
    ${Apollo_HEADERS}
    DESTINATION ${Spartacus_INSTALL_HEADERS}
)
