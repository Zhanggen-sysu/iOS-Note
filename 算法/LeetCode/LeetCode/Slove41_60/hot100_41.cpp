//
//  hot100_41.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/2.
//

#include "hot100_41.hpp"

vector<vector<int>> hot100_41::levelOrder(TreeNode* root)
{
    if (!root) return {};
    queue<TreeNode *> que;
    vector<vector<int>> ret;
    que.push(root);
    while (!que.empty()) {
        int size = que.size();
        vector<int> levelNodes;
        for (int i = 0; i < size; i ++) {
            TreeNode *node = que.front();
            que.pop();
            levelNodes.push_back(node->val);
            if (node->left) {
                que.push(node->left);
            }
            if (node->right) {
                que.push(node->right);
            }
        }
        ret.push_back(levelNodes);
    }
    return ret;
}
