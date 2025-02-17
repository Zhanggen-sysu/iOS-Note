//
//  hot100_50.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_50.hpp"

int postOrder(TreeNode *root, int& maxSum)
{
    if (!root)return 0;
    int leftMax = max(postOrder(root->left, maxSum), 0);
    int rightMax = max(postOrder(root->right, maxSum), 0);
    maxSum = max(maxSum, leftMax + rightMax + root->val);
    return root->val + max(leftMax, rightMax);
}

// 采用后序遍历，返回以某节点为根节点的单边路径和的最大值，中间记录最大路径和
int hot100_50::maxPathSum(TreeNode* root)
{
    int maxSum = INT_MIN;
    postOrder(root, maxSum);
    return maxSum;
}
