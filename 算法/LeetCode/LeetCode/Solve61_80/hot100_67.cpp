//
//  hot100_67.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_67.hpp"

int hot100_67::findMin(vector<int>& nums)
{
    int l = 0, r = nums.size()-1;
    int ret = nums[0];
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (nums[l] <= nums[mid]) {
            ret = min(nums[l], ret);
            l = mid + 1;
        } else {
            ret = min(nums[mid], ret);
            r = mid - 1;
        }
    }
    return ret;
}
