//
//  hot100_96.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_96.hpp"

int hot100_96::singleNumber(vector<int>& nums)
{
    int single = nums[0];
    for (int i = 1; i < nums.size(); i ++) {
        single ^= nums[i];
    }
    return single;
}
