//
//  hot100_99.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_99.hpp"

void hot100_99::nextPermutation(vector<int>& nums)
{
    int i = nums.size()-1;
    while (i > 0) {
        // 从后往前找首个减序
        if (nums[i] > nums[i-1]) {
            break;
        }
        i --;
    }
    if (i == 0) {
        sort(nums.begin(), nums.end());
        return;
    }
    int j = nums.size()-1;
    while (j > i) {
        // 从后往前找首个大于减序的数
        if (nums[j] > nums[i-1]) {
            break;
        }
        j--;
    }
    // 交换
    int tmp = nums[j];
    nums[j] = nums[i-1];
    nums[i-1] = tmp;
    // 减序后面排序
    sort(nums.begin() + i, nums.end());
}
