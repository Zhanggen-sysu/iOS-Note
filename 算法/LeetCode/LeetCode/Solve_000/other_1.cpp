//
//  other_1.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/23.
//

#include "other_1.hpp"

void backtrace(string ipstr, vector<string> &result, vector<int> dotIndex, int curIndex)
{
    if (dotIndex.size() == 3) {
        if (ipstr.length() - curIndex <= 0) return;
        string numS = ipstr.substr(curIndex, ipstr.length() - curIndex);
        int num = stoi(numS);
        if (0 <= num && num <= 255) {
            string res = ipstr.substr(0, dotIndex[0]) + '.' + ipstr.substr(dotIndex[0], dotIndex[1]-dotIndex[0]) + '.' + ipstr.substr(dotIndex[1], dotIndex[2]-dotIndex[1]) + '.' + numS;
            result.push_back(res);
        }
        return;
    }
    for (int i = 1; i <= 3; i ++) {
        if (i > 1 && ipstr[curIndex] == '0')break;
        if (i + curIndex < ipstr.length()) {
            string numS = ipstr.substr(curIndex, i);
            int num = stoi(numS);
            if (0 <= num && num <= 255) {
                dotIndex.push_back(curIndex+i);
                backtrace(ipstr, result, dotIndex, curIndex+i);
                dotIndex.pop_back();
            }
        }
    }
}

vector<string> other_1::restoreIP(string ipstr)
{
    vector<string> ret;
    backtrace(ipstr, ret, {}, 0);
    return ret;
}
