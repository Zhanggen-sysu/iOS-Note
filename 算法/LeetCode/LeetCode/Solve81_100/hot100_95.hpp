//
//  hot100_95.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_95_hpp
#define hot100_95_hpp

#include <vector>
#include <string>
using namespace std;

class hot100_95 {
private:
    int mindistance;
public:
    void traceMinDistance(string word1, string word2, int i, int j, int cur);
    int minDistance(string word1, string word2);
};

/**
 72. 编辑距离

 给你两个单词 word1 和 word2， 请返回将 word1 转换成 word2 所使用的最少操作数  。

 你可以对一个单词进行如下三种操作：

 插入一个字符
 删除一个字符
 替换一个字符

 输入：word1 = "horse", word2 = "ros"
 输出：3
 解释：
 horse -> rorse (将 'h' 替换为 'r')
 rorse -> rose (删除 'r')
 rose -> ros (删除 'e')

 */

#endif /* hot100_95_hpp */
