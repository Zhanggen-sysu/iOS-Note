//
//  hot100_62.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_62_hpp
#define hot100_62_hpp

#include <vector>
#include <string>
using namespace std;

class hot100_62 {
public:
    vector<vector<string>> solveNQueens(int n);
};

/**
 51. N 皇后

 按照国际象棋的规则，皇后可以攻击与之处在同一行或同一列或同一斜线上的棋子。

 n 皇后问题 研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。

 给你一个整数 n ，返回所有不同的 n 皇后问题 的解决方案。

 每一种解法包含一个不同的 n 皇后问题 的棋子放置方案，该方案中 'Q' 和 '.' 分别代表了皇后和空位。

 输入：n = 4
 输出：[[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
 解释：如上图所示，4 皇后问题存在两个不同的解法。
 */

#endif /* hot100_62_hpp */
