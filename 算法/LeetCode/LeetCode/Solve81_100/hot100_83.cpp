//
//  hot100_83.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_83.hpp"

int hot100_83::rob(vector<int>& nums)
{
    int dp0 = 0, dp1 = nums[0];
    for (int i = 2; i <= nums.size(); i ++) {
        int dp = max(dp1, dp0 + nums[i-1]);
        dp0 = dp1;
        dp1 = dp;
    }
    return dp1;
}

//void backtrace(vector<int>& nums, int i, int cur, int& maxV)
//{
//    if (i >= nums.size()) {
//        maxV = max(cur, maxV);
//        return;
//    }
//    
//    backtrace(nums, i+2, cur + nums[i], maxV);
//    backtrace(nums, i+1, cur, maxV);
//}
//
//int hot100_83::rob(vector<int>& nums)
//{
//    int maxV = INT_MIN;
//    backtrace(nums, 0, 0, maxV);
//    return maxV;
//}
