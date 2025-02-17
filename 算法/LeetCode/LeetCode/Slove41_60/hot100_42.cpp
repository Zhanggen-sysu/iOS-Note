//
//  hot100_42.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_42.hpp"

TreeNode *buildTree(vector<int>& nums, int begin, int end)
{
    if (begin == end) return new TreeNode(nums[begin]);
    if (begin > end || begin < 0 || end >= nums.size()) return nullptr;
    int mid = (begin + end) >> 1;
    TreeNode *node = new TreeNode(nums[mid]);
    node->left = buildTree(nums, begin, mid-1);
    node->right = buildTree(nums, mid+1, end);
    return node;
}

TreeNode* hot100_42::sortedArrayToBST(vector<int>& nums)
{
    return buildTree(nums, 0, nums.size()-1);
}

