//
//  hot100_86.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_86_hpp
#define hot100_86_hpp

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class hot100_86 {
public:
    bool wordBreak(string s, vector<string>& wordDict);
};

/**
 139. 单词拆分

 给你一个字符串 s 和一个字符串列表 wordDict 作为字典。请你判断是否可以利用字典中出现的单词拼接出 s 。

 注意：不要求字典中出现的单词全部都使用，并且字典中的单词可以重复使用。

 输入: s = "leetcode", wordDict = ["leet", "code"]
 输出: true
 解释: 返回 true 因为 "leetcode" 可以由 "leet" 和 "code" 拼接成。
 */

#endif /* hot100_86_hpp */
