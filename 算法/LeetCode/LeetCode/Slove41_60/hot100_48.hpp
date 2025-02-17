//
//  hot100_48.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_48_hpp
#define hot100_48_hpp

#include "TreeNode.hpp"
#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

// 回溯法
class hot100_48 {
private:
    // 表示当前经过的所有路径前缀和的数量
    unordered_map<long, int> preSum;
public:
    int findPathSumCnt(TreeNode* root, long targetSum, long pathSum);
    int pathSum(TreeNode* root, int targetSum);
};

/**
 437. 路径总和 III
 
 给定一个二叉树的根节点 root ，和一个整数 targetSum ，求该二叉树里节点值之和等于 targetSum 的 路径 的数目。

 路径 不需要从根节点开始，也不需要在叶子节点结束，但是路径方向必须是向下的（只能从父节点到子节点）。
 
                10
               /  \
              5    -3
             / \     \
            3   2     11
           / \   \
          3  -2   1
 
 输入：root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
 输出：3
 解释：和等于 8 的路径有 3 条，如图所示。
 
 */

#endif /* hot100_48_hpp */
