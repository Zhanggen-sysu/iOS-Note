//
//  hot100_87.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_87.hpp"

int hot100_87::lengthOfLIS(vector<int>& nums)
{
    // dp[i]表示前i个数的最长递增子序列长度
    vector<int> dp(nums.size(), 1);
    for (int i = 0; i < nums.size(); i ++) {
        for (int j = 0; j < i; j ++) {
            // 表示nums[i]可以拼接到序列中
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    int ret = 1;
    for (int i : dp) {
        ret = max(ret, i);
    }
    return ret;
}
