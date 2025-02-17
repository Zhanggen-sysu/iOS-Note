//
//  hot100_15.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#include "hot100_15.hpp"

// 分两部分反转，再整体反转
void mReverse(vector<int> &vec, int start, int end) {
    int l = start, r = end;
    while (l < r) {
        int tmp = vec[l];
        vec[l] = vec[r];
        vec[r] = tmp;
        l++;
        r--;
    }
}

void hot100_15::rotate(vector<int>& nums, int k) {
    if (k > nums.size()) {
        k = k % nums.size();
    }
    mReverse(nums, 0, nums.size()-1);
    mReverse(nums, 0, k-1);
    mReverse(nums, k, nums.size()-1);
}
