//
//  hot100_12.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/19.
//

#include "hot100_12.hpp"

string hot100_12::minWindow(string s, string t) {
    unordered_map<char, int> needMap;
    unordered_map<char, int> currentMap;
    int need = 0, valid = 0;
    int l = 0, r = 0;
    int minLen = INT_MAX, pos = 0;
    for (char c : t) {
        if (!needMap[c]) need ++;
        needMap[c] ++;
    }
    
    while (r < s.length()) {
        char c = s[r];
        r ++;
        if (needMap[c]) {
            currentMap[c] ++;
            if (currentMap[c] == needMap[c]) {
                valid ++;
            }
        }
        while (valid == need) {
            // 只记录起始点和长度即可，返回时才得出子串，否则会OOM
            if (r-l < minLen) {
                minLen = r - l;
                pos = l;
            }
            
            char ch = s[l];
            l ++;
            if (needMap[ch]) {
                if (currentMap[ch] == needMap[ch]) {
                    valid --;
                }
                currentMap[ch] --;
            }
        }
    }
    return minLen == INT_MAX ? "" : s.substr(pos, minLen);
}
