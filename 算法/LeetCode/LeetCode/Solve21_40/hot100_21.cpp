//
//  hot100_21.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_21.hpp"

// 从右上角开始搜
bool hot100_21::searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size()-1;
    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] < target) {
            row ++;
        } else if (matrix[row][col] > target) {
            col --;
        } else {
            return true;
        }
    }
    return false;
}
