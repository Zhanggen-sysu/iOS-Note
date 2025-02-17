//
//  hot100_20.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_20.hpp"

// 先对角线交换，再上下交换
void hot100_20::rotate(vector<vector<int>>& matrix) {
    int row = matrix.size(), col = matrix[0].size();
    for (int i = 0; i < row-1; i ++) {
        for (int j = 0; j < col-1-i; j ++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[col-1-j][row-1-i];
            matrix[col-1-j][row-1-i] = tmp;
        }
    }
    for (int i = 0; i < row / 2; i ++) {
        for (int j = 0; j < col; j ++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[row-1-i][j];
            matrix[row-1-i][j] = tmp;
        }
    }
}
