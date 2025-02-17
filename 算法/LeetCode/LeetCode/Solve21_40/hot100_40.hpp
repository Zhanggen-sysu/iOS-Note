//
//  hot100_40.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef hot100_40_hpp
#define hot100_40_hpp

#include "TreeNode.hpp"
#include <iostream>
using namespace std;

class hot100_40 {
private:
    int diameter;
public:
    int maxDeepOfBinaryTree(TreeNode *root);
    int diameterOfBinaryTree(TreeNode* root);
};

/**
 给你一棵二叉树的根节点，返回该树的 直径 。

 二叉树的 直径 是指树中任意两个节点之间最长路径的 长度 。这条路径可能经过也可能不经过根节点 root 。

 两节点之间路径的 长度 由它们之间边数表示。
 
        1
       / \
      2   3
     / \
    4   5
 
 输入：root = [1,2,3,4,5]
 输出：3
 解释：3 ，取路径 [4,2,1,3] 或 [5,2,1,3] 的长度。
 */

#endif /* hot100_40_hpp */
