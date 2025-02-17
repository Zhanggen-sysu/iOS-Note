//
//  hot100_95.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_95.hpp"

void hot100_95::traceMinDistance(string word1, string word2, int i, int j, int cur) {
    if (i == word1.length()) {
        mindistance = mindistance > cur + word2.length() - j ? cur + word2.length() - j : mindistance;
        return;
    }
    if (j == word2.length()) {
        mindistance =  mindistance > cur + word1.length() - i ? cur + word1.length() - i : mindistance;
        return;
    }
    if (word1[i] == word2[j]) {
        traceMinDistance(word1, word2, i+1, j+1, cur);
    } else {
        traceMinDistance(word1, word2, i+1, j, cur+1);
        traceMinDistance(word1, word2, i, j+1, cur+1);
        traceMinDistance(word1, word2, i+1, j+1, cur+1);
    }
}

int hot100_95::minDistance(string word1, string word2)
{
    mindistance = INT_MAX;
    traceMinDistance(word1, word2, 0, 0, 0);
    
    return mindistance;
    // dp表示将word1的前i个字符变成word2的前i个字符所需要的步数
//    int l1 = word1.length(), l2 = word2.length();
//    vector<vector<int>> dp(l1+1, vector<int>(l2+1));
//    for (int i = 0; i <= l1; i ++) {
//        dp[i][0] = i;
//    }
//    for (int j = 0; j <= l2; j ++) {
//        dp[0][j] = j;
//    }
//    for (int i = 1; i <= l1; i ++) {
//        for (int j = 1; j <= l2; j ++) {
//            if (word1[i-1] == word2[j-1]) {
//                dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]-1)) + 1;
//            } else {
//                dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
//            }
//        }
//    }
//    return dp[l1][l2];
    
    
}



