//
//  hot100_60.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_60_hpp
#define hot100_60_hpp

#include <vector>
#include <string>
using namespace std;

class hot100_60 {
    vector<vector<bool>> visit;
public:
    bool backtrace(vector<vector<char>>& board, string word, int index, int i, int j);
    bool exist(vector<vector<char>>& board, string word);
};

/**
 79. 单词搜索

 给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。

 单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。

 输入：board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
 输出：true
 */

#endif /* hot100_60_hpp */
