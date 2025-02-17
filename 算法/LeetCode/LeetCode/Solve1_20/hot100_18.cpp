//
//  hot100_18.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_18.hpp"

// 用数组记录0位置，如果不想用额外空间，可以用数组第一行和第一列来标记，注意处理原来第一行/第一列本身有0的情况
void hot100_18::setZeroes(vector<vector<int>>& matrix)
{
    vector<int> row;
    vector<int> col;
    for (int i = 0; i < matrix.size(); i ++) {
        for (int j = 0; j < matrix[i].size(); j ++) {
            if (!matrix[i][j]) {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    for (auto i : row) {
        for (int j = 0; j < matrix[i].size(); j ++) {
            matrix[i][j] = 0;
        }
    }
    
    for (auto j : col) {
        for (int i = 0; i < matrix.size(); i ++) {
            matrix[i][j] = 0;
        }
    }
}
