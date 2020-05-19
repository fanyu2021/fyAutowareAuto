// Copyright 2019 Apex.AI, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Co-developed by Tier IV, Inc. and Apex.AI, Inc.

#ifndef LOCALIZATION_COMMON__VISIBILITY_CONTROL_HPP_
#define LOCALIZATION_COMMON__VISIBILITY_CONTROL_HPP_


////////////////////////////////////////////////////////////////////////////////
#if defined(__WIN32)
#if defined(LOCALIZATION_COMMON_BUILDING_DLL) || defined(LOCALIZATION_COMMON_EXPORTS)
    #define LOCALIZATION_COMMON_PUBLIC __declspec(dllexport)
    #define LOCALIZATION_COMMON_LOCAL
  #else  // defined(LOCALIZATION_COMMON_BUILDING_DLL) || defined(LOCALIZATION_COMMON_EXPORTS)
    #define LOCALIZATION_COMMON_PUBLIC __declspec(dllimport)
    #define LOCALIZATION_COMMON_LOCAL
  #endif  // defined(LOCALIZATION_COMMON_BUILDING_DLL) || defined(LOCALIZATION_COMMON_EXPORTS)
#elif defined(__linux__)
#define LOCALIZATION_COMMON_PUBLIC __attribute__((visibility("default")))
  #define LOCALIZATION_COMMON_LOCAL __attribute__((visibility("hidden")))
#elif defined(__APPLE__)
#define LOCALIZATION_COMMON_PUBLIC __attribute__((visibility("default")))
  #define LOCALIZATION_COMMON_LOCAL __attribute__((visibility("hidden")))
#else  // defined(_LINUX)
#error "Unsupported Build Configuration"
#endif  // defined(_WINDOWS)

#endif  // LOCALIZATION_COMMON__VISIBILITY_CONTROL_HPP_
