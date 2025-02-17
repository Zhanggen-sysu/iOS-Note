//
//  hot100_37.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_37.hpp"

int hot100_37::maxDepth(TreeNode* root)
{
    if (!root) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
}
