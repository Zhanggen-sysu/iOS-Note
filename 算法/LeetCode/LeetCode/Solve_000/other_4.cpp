//
//  other_4.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#include "other_4.hpp"

int other_4::myAtoi(string s)
{
    int i = 0;
    bool isPositive = true;
    while (i < s.length() && (s[i] < '0' || s[i] > '9')) {
        if (s[i] == '-') {
            isPositive = false;
            i++;
            break;
        } else if (s[i] == '+') {
            i ++;
            break;
        } else if (s[i] != '+' && s[i] != ' ') {
            return 0;
        }
        i ++;
    }
    if (i >= s.length() || s[i] < '0' || s[i] > '9') return 0;
    long long ret = s[i] - '0';
    i ++;
    while (i < s.length() && '0' <= s[i] && s[i] <= '9') {
        ret = ret * 10 + (s[i] - '0');
        if (isPositive && ret > INT_MAX) {
            return INT_MAX;
        } else if (!isPositive && -ret < INT_MIN) {
            return INT_MIN;
        }
        i ++;
    }
    if (!isPositive) {
        ret = -ret;
        return ret < INT_MIN ? INT_MIN : (int)ret;
    }
    return ret > INT_MAX ? INT_MAX : (int)ret;
}
