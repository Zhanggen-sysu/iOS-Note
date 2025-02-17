//
//  hot100_48.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_48.hpp"

int hot100_48::findPathSumCnt(TreeNode* root, long targetSum, long pathSum) {
    if (!root) return 0;
    int ret = 0;
    pathSum += root->val;
    // 这里注意不要弄反了，比如1->2路径，此时的pathSum是3，targetSum为2，此时preSum[3-2]=1，所以加1
    if (preSum[pathSum - targetSum]) {
        ret += preSum[pathSum - targetSum];
    }
    preSum[pathSum] ++;
    ret += findPathSumCnt(root->left, targetSum, pathSum);
    ret += findPathSumCnt(root->right, targetSum, pathSum);
    // 离开节点时，需要将前缀和数量减1
    preSum[pathSum] --;
    return ret;

}
int hot100_48::pathSum(TreeNode* root, int targetSum) {
    preSum[0] = 1;
    return findPathSumCnt(root, targetSum, 0);
}

// MARK: 111
//int findPathSumCnt(TreeNode* root, long targetSum) {
//    if (!root) return 0;
//    int l = findPathSumCnt(root->left, targetSum-root->val);
//    int r = findPathSumCnt(root->right, targetSum-root->val);
//    return l + r + (targetSum == root->val ? 1 : 0);
//}
//int pathSum(TreeNode* root, int targetSum) {
//    if (!root) return 0;
//    return findPathSumCnt(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
//}
