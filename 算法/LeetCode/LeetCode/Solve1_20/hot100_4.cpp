//
//  hot100_4.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#include "hot100_4.hpp"

// 快慢指针，一起指向非0元素时，同步前进，到0时，快指针前进，慢指针继续指0，快指针找到非0，赋值给慢指针指向的0，然后再同步前进，把所有非0元素放到前面后，slow所在位置及后面的都是0
void hot100_4::moveZeroes(vector<int>& nums) {
    int slow = 0, fast = 0;
    while (fast < nums.size())
    {
        if (nums[fast] != 0)
        {
            nums[slow] = nums[fast];
            slow++;
            fast++;
        }
        else
        {
            fast++;
        }
    }
    while (slow < nums.size())
    {
        nums[slow++] = 0;
    }
}
