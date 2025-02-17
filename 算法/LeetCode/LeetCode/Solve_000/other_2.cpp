//
//  other_2.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/3/22.
//

#include "other_2.hpp"

int other_2::findFirstMatch(string haystack, string needle)
{
    // 计算Hash，如abc = a * N^3 + b * N^2 + c
    if (haystack.length() < needle.length()) return -1;
    int N = 2;
    long long pHash = 0;
    long long strHash = 0;
    long long maxN = 1;
    for (int i = 0; i < needle.length(); i ++) {
        pHash = pHash * N + (needle[i] - '0');
        strHash = strHash * N + (haystack[i] - '0');
        if (i > 0) {
            maxN *= N;
        }
    }
    if (strHash == pHash && haystack.substr(0, needle.length()).compare(needle) == 0) {
        return 0;
    }
    
    for (int i = needle.length(); i < haystack.length(); i ++) {
        strHash = (strHash - maxN * (haystack[i - needle.length()] - '0')) * N + (haystack[i] - '0');
        // Hash值相同时，还需要再比较一下
        if (strHash == pHash && haystack.substr(i - needle.length() + 1, needle.length()).compare(needle) == 0) {
            return i - needle.length() + 1;
        }
    }
    return -1;
}
