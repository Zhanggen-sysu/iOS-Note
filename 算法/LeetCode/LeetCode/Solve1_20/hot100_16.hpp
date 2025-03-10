//
//  hot100_16.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#ifndef hot100_16_hpp
#define hot100_16_hpp

#include <vector>
using namespace std;

class hot100_16 {
public:
    vector<int> productExceptSelf(vector<int>& nums);
};

/**
 给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。

 题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。

 请 不要使用除法，且在 O(n) 时间复杂度内完成此题。
 
 输入: nums = [1,2,3,4]
 输出: [24,12,8,6]
 */

#endif /* hot100_16_hpp */
