//
//  hot100_64.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#ifndef hot100_64_hpp
#define hot100_64_hpp

#include <vector>
using namespace std;

class hot100_64 {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target);
};

/**
 74. 搜索二维矩阵

 给你一个满足下述两条属性的 m x n 整数矩阵：

 每行中的整数从左到右按非严格递增顺序排列。
 每行的第一个整数大于前一行的最后一个整数。
 给你一个整数 target ，如果 target 在矩阵中，返回 true ；否则，返回 false 。

 输入：matrix = [[1, 3, 5, 7],
                [10,11,16,20],
                [23,30,34,60]], target = 3
 输出：true
 */

#endif /* hot100_64_hpp */
