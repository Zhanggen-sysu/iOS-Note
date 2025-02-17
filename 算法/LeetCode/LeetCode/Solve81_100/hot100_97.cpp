//
//  hot100_97.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_97.hpp"


int hot100_97::majorityElement(vector<int>& nums)
{
    int freq = 1;
    int majority = nums[0];
    for (int i = 1; i < nums.size(); i ++) {
        // 一样递增，不一样递减，因为多数元素个数大于n/2，所以最终一定有值
        if (nums[i] == majority) {
            freq ++;
        } else {
            freq --;
        }
        // 重新计算
        if (freq == 0) {
            freq = 1;
            majority = nums[i];
        }
    }
    return majority;
}
