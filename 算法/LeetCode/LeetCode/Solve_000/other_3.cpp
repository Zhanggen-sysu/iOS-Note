//
//  other_3.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#include "other_3.hpp"

string other_3::convert(string s, int numRows)
{
    vector<string> strs(numRows, "");
    int row = 0;
    bool isAdd = true;
    for (int i = 0; i < s.length(); i ++) {
        if (isAdd) {
            strs[row++] += s[i];
            if (row == numRows-1) {
                isAdd = false;
            }
        } else {
            strs[row--] += s[i];
            if (row == 0) {
                isAdd = true;
            }
        }
    }
    string ret = "";
    for (string str : strs) {
        ret += str;
    }
    return ret;
}
