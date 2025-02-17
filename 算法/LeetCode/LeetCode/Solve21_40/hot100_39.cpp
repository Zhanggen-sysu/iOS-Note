//
//  hot100_39.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_39.hpp"

bool twoNodeSymmetric(TreeNode *left, TreeNode *right)
{
    if (!left && !right) return true;
    if (left && right) {
        return left->val == right->val && twoNodeSymmetric(left->left, right->right) && twoNodeSymmetric(left->right, right->left);
    }
    return false;
}

bool hot100_39::isSymmetric(TreeNode* root)
{
    return twoNodeSymmetric(root->left, root->right);
}
