//
//  hot100_11.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/30.
//

#include "hot100_11.hpp"

// 滑动窗口，双向队列，最大元素下标始终在队首
vector<int> hot100_11::maxSlidingWindow(vector<int>& nums, int k)
{
    if (nums.size() < k || k <= 0) return vector<int>();
    deque<int> que;
    vector<int> ret;
    for (int i = 0; i < k; i ++) {
        while (!que.empty() && nums[que.back()] < nums[i]) {
            que.pop_back();
        }
        que.push_back(i);
    }
    ret.push_back(nums[que.front()]);
    
    int l = 0, r = k-1;
    while (r < nums.size()-1) {
        r ++;
        while (!que.empty() && nums[que.back()] < nums[r]) {
            que.pop_back();
        }
        que.push_back(r);
        if (l == que.front()) {
            que.pop_front();
        }
        l ++;
        ret.push_back(nums[que.front()]);
    }
    return ret;
}
