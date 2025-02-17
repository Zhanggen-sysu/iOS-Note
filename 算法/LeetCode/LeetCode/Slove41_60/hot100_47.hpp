//
//  hot100_47.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_47_hpp
#define hot100_47_hpp

#include "TreeNode.hpp"
#include <vector>
using namespace std;

class hot100_47 {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
};

/**
 105. 从前序与中序遍历序列构造二叉树
 
 给定两个整数数组 preorder 和 inorder ，其中 preorder 是二叉树的先序遍历， inorder 是同一棵树的中序遍历，请构造二叉树并返回其根节点。
 
        3
       / \
      9   20
         /  \
        15   7
 
 输入: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
 输出: [3,9,20,null,null,15,7]
 */

#endif /* hot100_47_hpp */
