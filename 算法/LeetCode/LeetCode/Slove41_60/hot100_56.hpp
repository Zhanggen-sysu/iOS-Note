//
//  hot100_56.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_56_hpp
#define hot100_56_hpp

#include <vector>
using namespace std;

class hot100_56 {
public:
    void backtrace(vector<vector<int>> &ret, vector<int> nums, vector<int> cur, vector<bool> visit, int index);
    vector<vector<int>> subsets(vector<int>& nums);
};

/**
 78. 子集
 给你一个整数数组 nums ，数组中的元素 互不相同 。返回该数组所有可能的子集（幂集）。

 解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。
 
 输入：nums = [1,2,3]
 输出：[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
 
 */

#endif /* hot100_56_hpp */
