//
//  hot100_15.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/21.
//

#ifndef hot100_15_hpp
#define hot100_15_hpp

#include <vector>
using namespace std;

class hot100_15 {
public:
    void rotate(vector<int>& nums, int k);
};

/**
 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

 输入: nums = [1,2,3,4,5,6,7], k = 3
 输出: [5,6,7,1,2,3,4]
 解释:
 向右轮转 1 步: [7,1,2,3,4,5,6]
 向右轮转 2 步: [6,7,1,2,3,4,5]
 向右轮转 3 步: [5,6,7,1,2,3,4]
 */
#endif /* hot100_15_hpp */
