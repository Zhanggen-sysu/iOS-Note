//
//  hot100_11.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/30.
//

#ifndef hot100_11_hpp
#define hot100_11_hpp

#include <vector>
#include <deque>
using namespace std;

class hot100_11 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
};

/**
 给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。

 返回 滑动窗口中的最大值 。
 
 输入：nums = [1,3,-1,-3,5,3,6,7], k = 3
 输出：[3,3,5,5,6,7]
 解释：
 滑动窗口的位置                最大值
 ---------------               -----
 [1  3  -1] -3  5  3  6  7       3
  1 [3  -1  -3] 5  3  6  7       3
  1  3 [-1  -3  5] 3  6  7       5
  1  3  -1 [-3  5  3] 6  7       5
  1  3  -1  -3 [5  3  6] 7       6
  1  3  -1  -3  5 [3  6  7]      7
 */

#endif /* hot100_11_hpp */
