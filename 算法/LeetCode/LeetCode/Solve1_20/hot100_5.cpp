//
//  hot100_5.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_5.hpp"

// 左右指针，向内靠近
int hot100_5::maxArea(vector<int>& height) {
    if (height.size() <= 1) return 0;
    int maxArea = 0;
    int l = 0, r = height.size()-1;
    while (l < r) {
        int area = min(height[l], height[r]) * (r-l);
        maxArea = max(maxArea, area);
        if (height[l] > height[r]) {
            r --;
        } else {
            l ++;
        }
    }
    return maxArea;
}
