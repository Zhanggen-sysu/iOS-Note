//
//  hot100_65.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_65.hpp"


int findTarget(vector<int> & nums, int target, bool isFirst) {
    int l = 0, r = nums.size() - 1;
    int ret = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (nums[mid] < target) {
            l = mid + 1;
        } else if (nums[mid] > target) {
            r = mid - 1;
        } else {
            ret = mid;
            if (isFirst) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    return ret;
}

vector<int> hot100_65::searchRange(vector<int>& nums, int target)
{
    return {findTarget(nums, target, true), findTarget(nums, target, false)};
}
