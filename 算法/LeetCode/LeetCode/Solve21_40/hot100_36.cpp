//
//  hot100_36.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_36.hpp"

void hot100_36::inorder(TreeNode *root) {
    if (!root) {
        ret.push_back(10086);
        return;
    }
    inorder(root->left);
    ret.push_back(root->val);
    inorder(root->right);
}

vector<int> hot100_36::inorderTraversal(TreeNode* root)
{
    return inorderNoRecursive(root);
//    inorder(root);
//    return ret;
}

vector<int> hot100_36::inorderNoRecursive(TreeNode *root)
{
    if (!root) return {};
    stack<TreeNode *> sta;
    vector<int> ret;
    TreeNode *tmp = root;
    while (!sta.empty() || tmp) {
        while (tmp) {
            sta.push(tmp);
            tmp = tmp->left;
        }
        if (!sta.empty()) {
            TreeNode *node = sta.top();
            sta.pop();
            ret.push_back(node->val);
            tmp = node->right;
        }
    }
    return ret;
}
