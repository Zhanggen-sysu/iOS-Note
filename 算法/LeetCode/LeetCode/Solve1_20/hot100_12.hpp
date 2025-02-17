//
//  hot100_12.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/19.
//

#ifndef hot100_12_hpp
#define hot100_12_hpp

#include <string>
#include <unordered_map>
using namespace std;

class hot100_12 {
public:
    // 滑动窗口
    string minWindow(string s, string t);
};

/**
 给你一个字符串 s 、一个字符串 t 。返回 s 中涵盖 t 所有字符的最小子串。如果 s 中不存在涵盖 t 所有字符的子串，则返回空字符串 "" 。

 注意：

 对于 t 中重复字符，我们寻找的子字符串中该字符数量必须不少于 t 中该字符数量。
 如果 s 中存在这样的子串，我们保证它是唯一的答案。
 
 输入：s = "ADOBECODEBANC", t = "ABC"
 输出："BANC"
 解释：最小覆盖子串 "BANC" 包含来自字符串 t 的 'A'、'B' 和 'C'。

 */

#endif /* hot100_12_hpp */
