//
//  hot100_61.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_61.hpp"

bool isPalindrome(string s) {
    int mid = s.length() >> 1;
    int l, r;
    if (s.length() % 2) {
        l = mid-1;
        r = mid+1;
    } else {
        l = mid-1;
        r = mid;
    }
    while (l >= 0 && r < s.length() && s[l] == s[r]) {
        l--;
        r++;
    }
    return l < 0;
}

void backtrace(vector<vector<string>> &ret, string s, int index, vector<string> cur) {
    if (index >= s.length()) {
        ret.push_back(cur);
        return;
    }
    
    for (int i = index; i < s.length(); i ++) {
        string str = s.substr(index, i-index+1);
        if (isPalindrome(str)) {
            cur.push_back(str);
            backtrace(ret, s, i+1, cur);
            cur.pop_back();
        }
    }
}

vector<vector<string>> hot100_61::partition(string s)
{
    vector<vector<string>> ret;
    backtrace(ret, s, 0, {});
    return ret;
}
