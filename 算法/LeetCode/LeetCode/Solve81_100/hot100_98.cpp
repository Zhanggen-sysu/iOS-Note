//
//  hot100_98.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_98.hpp"

void hot100_98::sortColors(vector<int>& nums)
{
    int l = 0, r = nums.size()-1;
    int i = 0;
    do {
        // 先确定0，2的边界
        while (l < nums.size() && nums[l] == 0) {
            l ++;
            // !!!: 注意这里要一起增加
            i = l;
        }
        if (l == nums.size()) {
            return;
        }
        while (r >= 0 && nums[r] == 2) {
            r --;
        }
        if (r < 0) {
            return;
        }
        
        if (l >= r) return;
        
        if (nums[i] == 0) {
            int tmp = nums[l];
            nums[l] = nums[i];
            nums[i] = tmp;
        }  else if (nums[i] == 2) {
            int tmp = nums[r];
            nums[r] = nums[i];
            nums[i] = tmp;
        } else {
            i ++;
        }
    } while (i <= r);
}
