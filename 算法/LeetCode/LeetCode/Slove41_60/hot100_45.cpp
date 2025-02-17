//
//  hot100_45.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_45.hpp"

vector<int> hot100_45::rightSideView(TreeNode* root)
{
    if (!root) {
        return {};
    }
    queue<TreeNode *> que;
    vector<int> ret;
    que.push(root);
    while (!que.empty()) {
        int size = que.size();
        for (int i = 0; i < size; i ++) {
            TreeNode *node = que.front();
            que.pop();
            if (i == size - 1) {
                ret.push_back(node->val);
            }
            if (node->left) {
                que.push(node->left);
            }
            if (node->right) {
                que.push(node->right);
            }
        }
    }
    return ret;
}
