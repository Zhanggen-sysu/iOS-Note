//
//  hot100_78.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_78.hpp"

bool hot100_78::canJump(vector<int>& nums)
{
    if (nums.size() <= 1) return true;
    int len = 0;
    for (int i = 0; i < nums.size(); i ++) {
        if (i <= len) {
            len = max(len, i + nums[i]);
            if (len >= nums.size() - 1) {
                return true;
            }
        }
    }
    return false;
}

//void backtrace(vector<int>& nums, bool &can, int cur) {
//    if (cur >= nums.size()) {
//        can = true;
//        return;
//    }
//    for (int i = 1; i <= nums[cur]; i ++) {
//        backtrace(nums, can, cur + i);
//        if (can) {
//            break;
//        }
//    }
//}
//
//bool hot100_78::canJump(vector<int>& nums)
//{
//    bool ret = false;
//    backtrace(nums, ret, 0);
//    return ret;
//}
