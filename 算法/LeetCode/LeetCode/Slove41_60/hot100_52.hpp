//
//  hot100_52.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_52_hpp
#define hot100_52_hpp

#include <vector>
#include <queue>
using namespace std;

class hot100_52 {
public:
    int orangesRotting(vector<vector<int>>& grid);
};

/**
 
 994. 腐烂的橘子
 
 在给定的 m x n 网格 grid 中，每个单元格可以有以下三个值之一：

 值 0 代表空单元格；
 值 1 代表新鲜橘子；
 值 2 代表腐烂的橘子。
 每分钟，腐烂的橘子 周围 4 个方向上相邻 的新鲜橘子都会腐烂。

 返回 直到单元格中没有新鲜橘子为止所必须经过的最小分钟数。如果不可能，返回 -1 。
 
 输入：grid = [[2,1,1],
              [0,1,1],
              [1,0,1]]
 输出：-1
 解释：左下角的橘子（第 2 行， 第 0 列）永远不会腐烂，因为腐烂只会发生在 4 个正向上。
 
 */

#endif /* hot100_52_hpp */
