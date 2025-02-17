//
//  hot100_52.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_52.hpp"

void rotOrange(vector<vector<int>>& grid, int i, int j, int& fresh, queue<vector<int>>& que) {
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) {
        return;
    }
    if (grid[i][j] == 1) {
        grid[i][j] = 2;
        fresh --;
    }
    que.push({i, j});
}

// 可以转换为层序遍历，计算层数
int hot100_52::orangesRotting(vector<vector<int>>& grid)
{
    queue<vector<int>> que;
    int row = grid.size(), col = grid[0].size();
    int fresh = 0;
    for (int i = 0; i < row; i ++) {
        for (int j = 0; j < col; j ++) {
            if (grid[i][j] == 2) {
                que.push({i, j});
            } else if (grid[i][j] == 1) {
                fresh ++;
            }
        }
    }
    int time = 0;
    while (!que.empty() && fresh) {
        int cnt = que.size();
        for (int i = 0; i < cnt; i ++) {
            vector<int> rot = que.front();
            que.pop();
            rotOrange(grid, rot[0], rot[1]-1, fresh, que);
            rotOrange(grid, rot[0], rot[1]+1, fresh, que);
            rotOrange(grid, rot[0]-1, rot[1], fresh, que);
            rotOrange(grid, rot[0]+1, rot[1], fresh, que);
        }
        time ++;
    }
    
    return fresh > 0 ? -1 : time;
}
