//
//  hot100_89.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_89.hpp"

bool hot100_89::canPartition(vector<int>& nums)
{
    int sum = 0;
    for (auto i : nums) {
        sum += i;
    }
    if (sum % 2) return false;
    int mid = sum / 2;
    vector<bool> dp(mid+1, false);
    dp[0] = true;
    for (int i = 0; i < nums.size(); i ++) {
        // 因为要用到上一行的值，从小到大的话用的dp[j - nums[i]]就是更新过的，而不是上一行的值，所以要从大到小
        for (int j = mid; j >= 1; j --) {
            if (nums[i] <= j) {
                dp[j] = dp[j] || dp[j - nums[i]];  
            }
        }
    }
    return dp[mid];
}
