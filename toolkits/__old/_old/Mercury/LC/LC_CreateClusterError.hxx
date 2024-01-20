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


#ifndef __LC_CreateClusterError_hxx__
#define __LC_CreateClusterError_hxx__


// ============================================================================
/*!
 *  \brief LC_CreateClusterError
*/
// ============================================================================
enum LC_CreateClusterError
{
    LC_CreateCluster_ConnectionError,
    LC_CreateCluster_CreationError,
    LC_CreateCluster_InvalidDirectoryError,
    LC_CreateCluster_NoError,
    LC_CreateCluster_TableCreationError
};

#endif // __LC_CreateClusterError_hxx__
