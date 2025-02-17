//
//  hot100_9.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/29.
//

#ifndef hot100_9_hpp
#define hot100_9_hpp

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class hot100_9 {
    
public:
    // 滑动窗口
    vector<int> findAnagrams(string s, string p);
};

/**
 给定两个字符串 s 和 p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。

 异位词 指由相同字母重排列形成的字符串（包括相同的字符串）。
 
 输入: s = "cbaebabacd", p = "abc"
 输出: [0,6]
 解释:
 起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
 起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
 */

#endif /* hot100_9_hpp */
