#pragma once

#include <map>

#include <thrust/host_vector.h>

namespace XRTailor {

typedef int joint;

thrust::host_vector<int> GetJointDirByJointIndex(
    int index, std::map<joint, thrust::host_vector<int>> joint_id_joint_dir);

}  // namespace XRTailor
