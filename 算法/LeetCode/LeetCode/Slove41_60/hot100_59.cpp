//
//  hot100_59.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_59.hpp"

void backtrace(int left, int right, string cur, vector<string>& ret) {
    if (left == 0 && right == 0) {
        ret.push_back(cur);
    }
    // 两种可选项
    if (left > 0) {
        backtrace(left-1, right, cur + '(', ret);
    }
    if (right > left) {
        backtrace(left, right-1, cur + ')', ret);
    }
}

vector<string> hot100_59::generateParenthesis(int n)
{
    vector<string> ret;
    backtrace(n, n, "", ret);
    return ret;
}
