//
//  hot100_49.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_49_hpp
#define hot100_49_hpp

#include "TreeNode.hpp"

class hot100_49 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
};

/**
 236. 二叉树的最近公共祖先
 
 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。

 百度百科中最近公共祖先的定义为：“对于有根树 T 的两个节点 p、q，最近公共祖先表示为一个节点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
 
 输入：root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
 输出：3
 解释：节点 5 和节点 1 的最近公共祖先是节点 3 。
 */

#endif /* hot100_49_hpp */
