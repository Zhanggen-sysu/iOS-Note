//
//  hot100_66.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_66.hpp"

int hot100_66::search(vector<int>& nums, int target)
{
    int l = 0, r = nums.size();
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (nums[mid] > target) {
            if (nums[l] < nums[mid]) {
                // 左边有序
                // nums[l] <= target < nums[mid]
                if (nums[l] <= target) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                // 右边有序
                // target < nums[mid] < nums[r]
                r = mid - 1;
            }
        } else if (nums[mid] < target) {
            if (nums[l] < nums[mid]) {
                // 左边有序
                // nums[l] < nums[mid] < target
                l = mid + 1;
            } else {
                // 右边有序
                // nums[mid] < target <= nums[r]
                if (nums[r] >= target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        } else {
            return mid;
        }
    }
    return -1;
}
