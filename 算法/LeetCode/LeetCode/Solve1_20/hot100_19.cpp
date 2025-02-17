//
//  hot100_19.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_19.hpp"

vector<int> hot100_19::spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ret;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, bottom = row-1, left = 0, right = col-1;
    while (ret.size() < row * col) {
        for (int i = left; i <= right; i ++) {
            ret.push_back(matrix[top][i]);
        }
        if (ret.size() == row * col) break;
        top ++;
        for (int i = top; i <= bottom; i ++) {
            ret.push_back(matrix[i][right]);
        }
        if (ret.size() == row * col) break;
        right --;
        for (int i = right; i >= left; i --) {
            ret.push_back(matrix[bottom][i]);
        }
        if (ret.size() == row * col) break;
        bottom --;
        for (int i = bottom; i >= top; i --) {
            ret.push_back(matrix[i][left]);
        }
        if (ret.size() == row * col) break;
        left ++;
    }
    return ret;
}

