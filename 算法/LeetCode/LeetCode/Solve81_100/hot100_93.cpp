//
//  hot100_93.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_93.hpp"

string hot100_93::longestPalindrome(string s)
{
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i ++) {
        if (i + 1 < s.length() && s[i] == s[i+1]) {
            int l = i, r = i + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                l--;
                r++;
            }
            if (r-l > end-start) {
                end = r-1;
                start = l+1;
            }
        } else if (i-1 >= 0 && i+1 < s.length() && s[i-1] == s[i+1]) {
            int l = i-1, r = i + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                l--;
                r++;
            }
            if (r-l > end-start) {
                end = r-1;
                start = l+1;
            }
        }
    }
    return s.substr(start, end-start+1);
}
