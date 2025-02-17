//
//  hot100_57.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_57.hpp"

void backtrace(unordered_map<char, string> keyboard, string digits, string cur, vector<string> &ret, int index)
{
    if (index == digits.length()) {
        ret.push_back(cur);
        return;
    }
    string str = keyboard[digits[index]];
    for (int i = 0; i < str.length(); i ++) {
        cur.push_back(str[i]);
        backtrace(keyboard, digits, cur, ret, index + 1);
        cur.pop_back();
    }
}

vector<string> hot100_57::letterCombinations(string digits)
{
    if (digits.length() <= 0) {
        return {};
    }
    unordered_map<char, string> keyboard = {
        {'2', "abc"}, {'3', "def"},
        {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"},
        {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };
    vector<string> ret;
    backtrace(keyboard, digits, "", ret, 0);
    return ret;
}
