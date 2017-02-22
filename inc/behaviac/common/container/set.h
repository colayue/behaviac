/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015-2017 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _BEHAVIAC_COMMON_CONTAINER_SET_H_
#define _BEHAVIAC_COMMON_CONTAINER_SET_H_

#include "behaviac/common/config.h"
#include "behaviac/common/assert.h"

#include <set>
#include "behaviac/common/memory/stl_allocator.h"

namespace behaviac {
    template < class _Kty,
             class _Pr = std::less<_Kty>,
             class _Alloc = behaviac::stl_allocator<_Kty> >
    class set_t : public std::set<_Kty, _Pr, _Alloc> {
    };
}//namespace behaviac

#endif //#ifndef _BEHAVIAC_COMMON_CONTAINER_SET_H_
