//
//  hot100_38.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_38.hpp"

TreeNode* hot100_38::invertTree(TreeNode* root)
{
    if (!root) return nullptr;
    TreeNode *tmp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(tmp);
    return root;
}
