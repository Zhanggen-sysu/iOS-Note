//
//  hot100_9.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/29.
//

#include "hot100_9.hpp"

vector<int> hot100_9::findAnagrams(string s, string p)  {
    unordered_map<char, int> keyMap;
    unordered_map<char, int> strMap;
    vector<int> ret;
    for (char c: p) {
        keyMap[c] ++;
    }
    int l = 0, r = 0, valid = 0;
    while (r < s.length()) {
        char c = s[r];
        r ++;
        // 这里用count判断键是否存在，而不能用keyMap[c]来判断，因为后者对于没有的键会新建一个，值赋为0，会导致后面的size加1
        // 或者后面不用size，而是在上面keymap统计中加个不同字符数统计
        if (keyMap.count(c)) {
            // 注意顺序
            strMap[c] ++;
            if (keyMap[c] == strMap[c]) {
                valid ++;
            }
        }
        while (valid == keyMap.size()) {
            if (r - l == p.length()) {
                ret.push_back(l);
            }
            char ch = s[l];
            l ++;
            if (keyMap.count(ch)) {
                // 注意顺序！
                if (keyMap[ch] == strMap[ch]) {
                    valid --;
                }
                strMap[ch] --;
            }
        }
    }
    return ret;
}
