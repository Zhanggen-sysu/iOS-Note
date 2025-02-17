//
//  hot100_85.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_85.hpp"

//void backtrace(vector<int>& coins, int amount, int cur, int coin, int &minCoin)
//{
//    if (amount == cur) {
//        minCoin = min(coin, minCoin);
//    }
//    for (int i = 0; i < coins.size(); i ++) {
//        if (coins[i] + cur <= amount) {
//            backtrace(coins, amount, cur + coins[i], coin + 1, minCoin);
//        }
//    }
//}
//// 回溯法
//int hot100_85::coinChange(vector<int>& coins, int amount)
//{
//    int minCoin = INT_MAX;
//    backtrace(coins, amount, 0, 0, minCoin);
//    return minCoin == INT_MAX ? -1 : minCoin;
//}

int hot100_85::coinChange(vector<int>& coins, int amount)
{
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; i ++) {
        for (int j = 0; j < coins.size(); j ++) {
            if (coins[j] <= i) {
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}
