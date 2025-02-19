// Copyright 2022 TIER IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "behavior_path_planner/scene_module/scene_module_visitor.hpp"

#ifdef USE_BEHAVIOR_TREE
#include "behavior_path_planner/scene_module/scene_module_interface.hpp"
#else
#include "behavior_path_planner/scene_module_v2/scene_module_interface.hpp"
#endif

namespace behavior_path_planner
{
std::shared_ptr<AvoidanceDebugMsgArray> SceneModuleVisitor::getAvoidanceModuleDebugMsg() const
{
  return avoidance_visitor_;
}

std::shared_ptr<LaneChangeDebugMsgArray> SceneModuleVisitor::getLaneChangeModuleDebugMsg() const
{
  return lane_change_visitor_;
}
}  // namespace behavior_path_planner
