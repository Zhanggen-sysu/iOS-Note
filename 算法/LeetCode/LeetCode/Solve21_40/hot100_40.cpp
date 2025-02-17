//
//  hot100_40.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_40.hpp"

int hot100_40::maxDeepOfBinaryTree(TreeNode *root)
{
    if (!root) return 0;
    int leftD = maxDeepOfBinaryTree(root->left);
    int rightD = maxDeepOfBinaryTree(root->right);
    diameter = max(leftD+rightD, diameter);
    return max(leftD, rightD)+1;
}

int hot100_40::diameterOfBinaryTree(TreeNode* root)
{
    if (!root) return 0;
    maxDeepOfBinaryTree(root);
    return diameter;
}
