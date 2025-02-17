//
//  other_6.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#include "other_6.hpp"
string other_6::longestCommonPrefix(vector<string>& strs)
{
    int len = 0;
    for (int i = 0; i < strs[0].length(); i ++) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j ++) {
            if (i >= strs[j].length() || strs[j][i] != c) {
                return len > 0 ? strs[0].substr(0, len) : "";
            }
        }
        len++;
    }
    return len > 0 ? strs[0].substr(0, len) : "";
}
