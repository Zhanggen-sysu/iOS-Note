//
//  hot100_51.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_51.hpp"

void zeroIslands(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0') {
        return;
    }
    grid[i][j] = '0';
    zeroIslands(grid, i-1, j);
    zeroIslands(grid, i+1, j);
    zeroIslands(grid, i, j-1);
    zeroIslands(grid, i, j+1);
}
int hot100_51::numIslands(vector<vector<char>>& grid)
{
    int ret = 0;
    for (int i = 0; i < grid.size(); i ++) {
        for (int j = 0; j < grid[0].size(); j ++) {
            if (grid[i][j] == '1') {
                ret ++;
                zeroIslands(grid, i, j);
            }
        }
    }
    return ret;
}
