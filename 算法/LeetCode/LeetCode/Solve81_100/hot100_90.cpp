//
//  hot100_90.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_90.hpp"

int hot100_90::longestValidParentheses(string s)
{
    int maxLen = 0;
    int left = 0, right = 0;
    // 从左往右统计左右括号
    for (auto c : s) {
        if (c == '(') {
            left ++;
        } else {
            right ++;
        }
        if (left == right) {
            maxLen = max(maxLen, left * 2);
        }
        else if (right > left) {
            left = 0;
            right = 0;
        }
    }
    left = 0;
    right = 0;
    // 从右往左统计左右括号
    for (int i = s.length()-1; i >= 0; i--) {
        char c = s[i];
        if (c == '(') {
            left ++;
        } else {
            right ++;
        }
        if (left == right) {
            maxLen = max(maxLen, left * 2);
        }
        else if (left > right) {
            left = 0;
            right = 0;
        }
    }
    return maxLen;
}
