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


#ifndef __ModelDS_SequenceOfObject_hxx__
#define __ModelDS_SequenceOfObject_hxx__

// OpenCascade
#include <NCollection_Sequence.hxx>

// Spartacus
#include <ModelDS_Object.hxx>

// Type definitions
typedef NCollection_Sequence<ModelDS_Object>            ModelDS_SequenceOfObject;
typedef NCollection_Sequence<ModelDS_Object>::Iterator  ModelDS_SequenceIteratorOfSequenceOfObject;

#endif // __ModelDS_SequenceOfObject_hxx__
