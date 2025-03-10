//
//  hot100_42.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_42_hpp
#define hot100_42_hpp

#include "TreeNode.hpp"
#include <vector>
using namespace std;

class hot100_42 {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums);
};

/**
 108.将有序数组转换为二叉搜索树
 
 给你一个整数数组 nums ，其中元素已经按 升序 排列，请你将其转换为一棵 高度平衡 二叉搜索树。

 高度平衡 二叉树是一棵满足「每个节点的左右两个子树的高度差的绝对值不超过 1 」的二叉树。
 
 输入：nums = [-10,-3,0,5,9]
 输出：[0,-3,9,-10,null,5]
 解释：[0,-10,5,null,-3,null,9] 也将被视为正确答案：
 */

#endif /* hot100_42_hpp */
