//
//  hot100_71.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_71.hpp"

string hot100_71::decodeString(string s)
{
    stack<string> sta;
    stack<int> numSta;
    string num = "";
    string tmpS = "";
    for (int i = 0; i < s.length(); i ++) {
        if ('0' <= s[i] && s[i] <= '9') {
            num += s[i];
        } else if (s[i] == '[') {
            sta.push(tmpS + s[i]);
            numSta.push(stoi(num));
            num = "";
        } else if (s[i] == ']') {
            int cnt = numSta.top();
            numSta.pop();
            while (sta.top() != "[") {
                tmpS = sta.top() + tmpS;
                sta.pop();
            }
            sta.pop();
            string s = "";
            for (int k = 0; k < cnt; k ++) {
                s += tmpS;
            }
            sta.push(s);
            tmpS = "";
        } else {
            sta.push(tmpS + s[i]);
        }
    }
    string ret = "";
    while (!sta.empty()) {
        ret = sta.top() + ret;
        sta.pop();
    }
    return ret;
}
