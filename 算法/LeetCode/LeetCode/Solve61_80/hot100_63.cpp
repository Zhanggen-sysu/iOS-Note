//
//  hot100_63.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_63.hpp"

int hot100_63::searchInsert(vector<int>& nums, int target)
{
    int l = 0, r = nums.size()-1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (nums[mid] > target) {
            r = mid - 1;
        } else if (nums[mid] < target) {
            l = mid + 1;
        } else {
            return mid;
        }
    }
    return l;
}
