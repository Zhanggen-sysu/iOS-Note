//
//  hot100_53.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_53.hpp"

bool hot100_53::canFinish(int numCourses, vector<vector<int>>& prerequisites)
{
    vector<int> indegree(numCourses);
    queue<int> que;
    // 累加入度
    for (auto pre : prerequisites) {
        indegree[pre[0]] ++;
    }
    // 入度为0入队
    for (int i = 0; i < numCourses; i ++) {
        if (indegree[i] == 0) {
            que.push(i);
        }
    }
    while (!que.empty()) {
        // 处理入度为0的课程
        int i = que.front();
        que.pop();
        for (auto pre : prerequisites) {
            if (pre[1] == i) {
                indegree[pre[0]] --;
                if (indegree[pre[0]] == 0) {
                    que.push(pre[0]);
                }
            }
        }
    }
    // 如果能完成，则所有入度都应该为0
    for (int i = 0; i < numCourses; i ++) {
        if (indegree[i] != 0) {
            return false;
        }
    }
    return true;
}
