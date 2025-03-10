//
//  hot100_94.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_94_hpp
#define hot100_94_hpp

#include <vector>
#include <string>
using namespace std;

class hot100_94 {
public:
    int longestCommonSubsequence(string text1, string text2);
};

/**
 1143. 最长公共子序列

 给定两个字符串 text1 和 text2，返回这两个字符串的最长 公共子序列 的长度。如果不存在 公共子序列 ，返回 0 。

 一个字符串的 子序列 是指这样一个新的字符串：它是由原字符串在不改变字符的相对顺序的情况下删除某些字符（也可以不删除任何字符）后组成的新字符串。

 例如，"ace" 是 "abcde" 的子序列，但 "aec" 不是 "abcde" 的子序列。
 两个字符串的 公共子序列 是这两个字符串所共同拥有的子序列。

 输入：text1 = "abcde", text2 = "ace"
 输出：3
 解释：最长公共子序列是 "ace" ，它的长度为 3 。
 */
#endif /* hot100_94_hpp */
