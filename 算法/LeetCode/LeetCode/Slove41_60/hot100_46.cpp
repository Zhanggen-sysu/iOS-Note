//
//  hot100_46.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_46.hpp"
// MARK: 111
void hot100_46::flatten(TreeNode* root)
{
    if (!root) return;
    flatten(root->left);
    flatten(root->right);
    if (root->left) {
        TreeNode *tmp = root->left;
        while (tmp->right) {
            tmp = tmp->right;
        }
        tmp->right = root->right;
        root->right = root->left;
        root->left = nullptr;
    }
}
