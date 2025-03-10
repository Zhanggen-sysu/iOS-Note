//
//  hot100-1.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/11/28.
//

#ifndef hot100_1_hpp
#define hot100_1_hpp

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class hot100_1
{
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

/**
 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

 你可以按任意顺序返回答案。
 
 输入：nums = [2,7,11,15], target = 9
 输出：[0,1]
 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
 */

#endif /* hot100_1_hpp */
