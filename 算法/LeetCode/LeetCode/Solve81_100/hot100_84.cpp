//
//  hot100_84.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_84.hpp"

//void backtrace(int amount, int cur, int &minNum)
//{
//    if (amount == 0) {
//        minNum = min(cur, minNum);
//        return;
//    }
//    for (int i = 1; i < amount; i ++) {
//        if (amount >= i*i) {
//            backtrace(amount-i*i, cur+1, minNum);
//        }
//    }
//}
//// 回溯法
//int hot100_84::numSquares(int n)
//{
//    int minNum = INT_MAX;
//    backtrace(n, 0, minNum);
//    return minNum;
//}

int hot100_84::numSquares(int n)
{
    vector<int> dp(n+1, 0);
    for (int i = 1; i <= n; i ++) {
        int minn = INT_MAX;
        for (int j = 1; j * j <= i; j ++) {
            minn = min(minn, dp[i - j*j] + 1);
        }
        dp[i] = minn;
    }
    return dp[n];
}
