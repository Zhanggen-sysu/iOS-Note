//
//  hot100_92.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_92.hpp"

int hot100_92::minPathSum(vector<vector<int>>& grid)
{
    int row = grid.size(), col = grid[0].size();
    vector<vector<int>> dp(row, vector<int>(col, 0));
    dp[0][0] = grid[0][0];
    for (int i = 1; i < row; i++) {
        dp[i][0] = dp[i-1][0]+grid[i][0];
    }
    for (int i = 1; i < col; i++) {
        dp[0][i] = dp[0][i-1]+grid[0][i];
    }
    for (int i = 1; i < row; i ++) {
        for (int j = 1; j < col; j ++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    return dp[row-1][col-1];
}
