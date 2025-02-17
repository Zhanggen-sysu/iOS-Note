//
//  hot100_79.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_79.hpp"

//void backtrace(vector<int>& nums, int &minStep, int i, int step) {
//    if (i >= nums.size()-1) {
//        minStep = min(step, minStep);
//        return;
//    }
//
//    for (int k = 1; k <= nums[i]; k ++) {
//        backtrace(nums, minStep, i + k, step+1);
//    }
//}
//// 2,3,1,1,4
//int hot100_79::jump(vector<int>& nums)
//{
//    int minStep = nums.size();
//    backtrace(nums, minStep, 0, 0);
//    return minStep;
//}
int hot100_79::jump(vector<int>& nums)
{
//    2 3 1 1 4
    // end是当前位置能走的最远距离，maxPos是下一步能走的最远距离
    int start = 0, end = 0, maxPos = 0, step = 0;
    for (int i = 0; i < nums.size()-1; i++) {
        maxPos = max(maxPos, i + nums[i]);
        if (i == end) {
            end = maxPos;
            step ++;
        }
    }
    return step;
}
