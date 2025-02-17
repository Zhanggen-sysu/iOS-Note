//
//  hot100_17.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_17.hpp"

// 置换将数字放到和其值对应的位置
int hot100_17::firstMissingPositive(vector<int>& nums) {
    
    int n = nums.size();
    // 置换，将n[i]放到其值的位置n[n[i]-1]
    for (int i = 0; i < n; i ++) {
        while (nums[i] >= 1 && nums[i] <= n && nums[nums[i]-1] != nums[i]) {
            // 注意顺序，先保留nums[nums[i]-1]，再赋值nums[i]
            int tmp = nums[nums[i]-1];
            nums[nums[i]-1] = nums[i];
            nums[i] = tmp;
        }
    }
    for (int i = 0; i < n; i ++) {
        if (i+1 != nums[i]) {
            return i+1;
        }
    }
    return n+1;
}
