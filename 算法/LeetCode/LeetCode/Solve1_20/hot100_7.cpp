//
//  hot100_7.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_7.hpp"

// 左右指针，记录左max和右max
int hot100_7::trap(vector<int>& height) {
    // 左右指针
    int l = 0, r = height.size()-1;
    int sum = 0;
    // 左右最大值，其实应该维护四个值，lleftMax，lrightMax，rleftMax，rrightMax，
    // 但是可以肯定lleftMax <= rleftMax，rrightMax <= lrightMax，所以维护两个值就行
    // 这里leftMax 就是 lleftMax，rightMax 就是 rrightMax
    int leftMax = INT_MIN, rightMax = INT_MIN;
    while (l < r) {
        leftMax = max(height[l], leftMax);
        rightMax = max(height[r], rightMax);
        // 柱子可接水 = min(leftMax,rightMax) - height
        if (leftMax < rightMax) {
            // 此时可以肯定lleftMax < lrightMax，此时确定了柱子l接水量
            sum += leftMax - height[l];
            l ++;
        } else {
            // 此时可以肯定 rleftMax >= rrightMax，此时确定了柱子r接水量
            sum += rightMax - height[r];
            r--;
        }
    }
    return sum;
}
