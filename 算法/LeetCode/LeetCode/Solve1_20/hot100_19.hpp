//
//  hot100_19.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef hot100_19_hpp
#define hot100_19_hpp

#include <vector>
using namespace std;

class hot100_19 {
public:
    // 记录上下左右边界开始遍历
    vector<int> spiralOrder(vector<vector<int>>& matrix);
};

/**
 给你一个 m 行 n 列的矩阵 matrix ，请按照 顺时针螺旋顺序 ，返回矩阵中的所有元素。
 
 输入：matrix = [[1,2,3],[4,5,6],[7,8,9]]
 输出：[1,2,3,6,9,8,7,4,5]
 */

#endif /* hot100_19_hpp */
