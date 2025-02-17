//
//  hot100_43.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_43.hpp"

bool isBST(TreeNode *root, long long min, long long max) {
    if (!root) return true;
    if (root->val <= min || root->val >= max) {
        return false;
    }
    return isBST(root->left, min, root->val) && isBST(root->right, root->val, max);
}

bool hot100_43::isValidBST(TreeNode* root)
{
    return isBST(root, LONG_LONG_MIN, LONG_LONG_MAX);
}
