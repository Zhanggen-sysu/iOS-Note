//
//  hot100_81.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_81.hpp"

int hot100_81::climbStairs(int n)
{
    vector<int> dp(n+1, 0);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i ++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
