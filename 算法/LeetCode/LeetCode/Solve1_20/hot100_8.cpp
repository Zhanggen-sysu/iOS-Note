//
//  hot100_8.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_8.hpp"

// 滑动窗口
int hot100_8::lengthOfLongestSubstring(string s) {
    int l = 0, r = 0, ret = 0;
    unordered_map<char, int> charMap;
    while (r < s.size()) {
        char c = s[r];
        charMap[c] ++;
        r ++;
        while (charMap[c] > 1) {
            charMap[s[l]] --;
            l ++;
        }
        ret = max(r - l, ret);
    }
    return ret;
}
