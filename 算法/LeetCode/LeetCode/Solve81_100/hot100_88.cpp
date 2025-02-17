//
//  hot100_88.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_88.hpp"

int hot100_88::maxProduct(vector<int>& nums)
{
    int maxN = nums[0], minN = nums[0], ret = nums[0];
    for (int i = 1; i < nums.size(); i ++) {
        maxN = max(max(maxN * nums[i], minN * nums[i]), nums[i]);
        minN = min(min(maxN * nums[i], minN * nums[i]), nums[i]);
        ret = max(ret, maxN);
    }
    return ret;
}
