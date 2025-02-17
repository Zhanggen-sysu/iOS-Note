//
//  hot100_100.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_100.hpp"

// i->nums[i]可以转换为链表，找环节点
int hot100_100::findDuplicate(vector<int>& nums)
{
    int slow = 0, fast = 0;
    do {
        slow = nums[slow];
        fast = nums[fast];
        fast = nums[fast];
    } while (nums[slow] != nums[fast]);
    slow = 0;
    while (nums[slow] != nums[fast]) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return nums[slow];
}
