//
//  hot100_44.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_44.hpp"

int hot100_44::kthSmallest(TreeNode* root, int k)
{
    stack<TreeNode *> sta;
    TreeNode *tmp = root;
    int cur = 0;
    while (!sta.empty() || tmp) {
        while (tmp) {
            sta.push(tmp);
            tmp = tmp->left;
        }
        TreeNode *node = sta.top();
        sta.pop();
        cur ++;
        if (cur == k) {
            return node->val;
        }
        tmp = node->right;
    }
    return 0;
}
