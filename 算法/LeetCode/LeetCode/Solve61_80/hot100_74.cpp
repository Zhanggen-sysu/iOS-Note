//
//  hot100_74.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_74.hpp"

int hot100_74::findKthLargest(vector<int>& nums, int k)
{
    // 小根堆
    priority_queue<int, vector<int>, greater_equal<int>> que;
    int cnt = 0;
    for (auto i : nums) {
        if (cnt < k) {
            que.push(i);
            cnt ++;
        } else if (que.top() < i){
            que.pop();
            que.push(i);
        }
    }
    return que.top();
}
