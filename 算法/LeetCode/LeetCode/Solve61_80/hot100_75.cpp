//
//  hot100_75.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_75.hpp"

struct cmp {
    bool operator ()(pair<int, int> &a, pair<int, int> &b) {
        // 大根堆
        return a.second < b.second;
    }
};

vector<int> hot100_75::topKFrequent(vector<int>& nums, int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> que;
    unordered_map<int, int> map;
    for (auto i : nums) {
        map[i] ++;
    }
    for (auto i : map) {
        que.push(i);
    }
    vector<int> ret;
    for (int i = 0; i < k; i ++) {
        ret.push_back(que.top().first);
        que.pop();
    }
    return ret;
}
