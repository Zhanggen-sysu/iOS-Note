//
//  hot100_49.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_49.hpp"

TreeNode* hot100_49::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if (!root) return nullptr;
    if (root == p || root == q) {
        return root;
    }
    // 左右子树找
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    if (!left) return right;
    if (!right) return left;
    return root;
}
