//
//  hot100_80.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_80_hpp
#define hot100_80_hpp

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class hot100_80 {
public:
    vector<int> partitionLabels(string s);
};

/**
 763. 划分字母区间

 给你一个字符串 s 。我们要把这个字符串划分为尽可能多的片段，同一字母最多出现在一个片段中。

 注意，划分结果需要满足：将所有划分结果按顺序连接，得到的字符串仍然是 s 。

 返回一个表示每个字符串片段的长度的列表。

 输入：s = "ababcbacadefegdehijhklij"
 输出：[9,7,8]
 解释：
 划分结果为 "ababcbaca"、"defegde"、"hijhklij" 。
 每个字母最多出现在一个片段中。
 像 "ababcbacadefegde", "hijhklij" 这样的划分是错误的，因为划分的片段数较少。
 */

#endif /* hot100_80_hpp */
