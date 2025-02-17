//
//  hot100_77.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_77.hpp"

int hot100_77::maxProfit(vector<int>& prices)
{
//    dp[i][0] = dp[i-1][1] + prices[i], dp[i-1][0]
//    dp[i][1] = dp[i-1][0] - prices[i], dp[i-1][1] // 本题只能买一次，所以dp[i-1][0]一定是0
    vector<vector<int>> dp(prices.size(), vector<int>(2, 0));
    // [7,1,5,3,6,4]
    dp[0][0] = 0;
    dp[0][1] = -prices[0];
    for (int i = 1; i < prices.size(); i ++) {
        dp[i][0] = max(dp[i-1][1] + prices[i], dp[i-1][0]);
        dp[i][1] = max( - prices[i], dp[i-1][1]);
    }
    return dp[prices.size()-1][0];
}
