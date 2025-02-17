//
//  hot100_16.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#include "hot100_16.hpp"

// 从左往右遍历，先算左积数组，再从右往左遍历乘右积
vector<int> hot100_16::productExceptSelf(vector<int>& nums)
{
    vector<int> ret = vector<int>(nums.size(), 1);
    long multi = 1;
    // 两个方向各遍历一次
    for (int i = 0; i < nums.size(); i ++) {
        ret[i] = multi;
        multi *= nums[i];
    }
    multi = 1;
    for (int i = nums.size() - 1; i >= 0; i --) {
        ret[i] *= multi;
        multi *= nums[i];
    }
    return ret;
}
