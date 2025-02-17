//
//  hot100-1.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_1.hpp"

// Hash
vector<int> hot100_1::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mMap;
    for (int i = 0; i < nums.size(); i ++) {
        // 注意value不能为0
        if (mMap[target-nums[i]]) {
            return {mMap[target-nums[i]]-1, i};
        }
        mMap[nums[i]] = i+1;
    }
    return {-1,-1};
}
