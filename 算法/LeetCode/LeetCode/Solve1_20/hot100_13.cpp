//
//  hot100_13.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/19.
//

#include "hot100_13.hpp"
// 动态规划，每个元素计算的最大子数组和要么是加上一个dp，要么是自起一个dp
int hot100_13::maxSubArray(vector<int>& nums) {
    // dp 是连续子数组的最大和，因为只和前一个dp有关，所以用一个变量就行
    int dp = nums[0], maxSum = nums[0];
    for (int i = 1; i < nums.size(); i ++) {
        // 要么加入上一段连续子数组，要么另起一段
        dp = max(nums[i], dp+nums[i]);
        maxSum = max(dp, maxSum);
    }
    return maxSum;
}
