//
//  hot100_73.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_73.hpp"

int hot100_73::largestRectangleArea(vector<int>& heights)
{
    stack<int> sta;
    // 以高度i能延伸的左右边界
    vector<int> left(heights.size(), 0), right(heights.size(), heights.size());
    for (int i = 0; i < heights.size(); i ++) {
        while (!sta.empty() && heights[i] <= heights[sta.top()]) {
            right[sta.top()] = i;
            sta.pop();
        }
        left[i] = sta.empty() ? -1 : sta.top();
        sta.push(i);
    }
    int maxArea = 0;
    for (int i = 0; i < heights.size(); i ++) {
        maxArea = max(maxArea, (right[i] - left[i] - 1) * heights[i]);
    }
    return maxArea;
}
