//
//  hot100_14.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#include "hot100_14.hpp"

bool compare(vector<int> first, vector<int> second) {
    return first[0] < second[0];
}

// 按每个区间的起点排序，再合并
vector<vector<int>> hot100_14::merge(vector<vector<int>>& intervals)
{
    vector<vector<int>> ret;
    sort(intervals.begin(), intervals.end(), compare);
    int start = intervals[0][0], end = intervals[0][1];
    for (int i = 1; i < intervals.size(); i ++) {
        if (end < intervals[i][0]) {
            ret.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        } else {
            end = max(end, intervals[i][1]);
        }
    }
    ret.push_back({start, end});
    return ret;
}
