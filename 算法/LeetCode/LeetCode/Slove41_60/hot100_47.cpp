//
//  hot100_47.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_47.hpp"


TreeNode *builATree(vector<int>& preorder, int pl, int pr, vector<int>& inorder, int il, int ir)
{
    if (pl < 0 || pl >= preorder.size() || pr < 0 || pr >= preorder.size() || pl > pr) {
        return nullptr;
    }
    if (pl == pr) {
        return new TreeNode(preorder[pl]);
    }
    // 先序遍历首个数就是根节点
    TreeNode *node = new TreeNode(preorder[pl]);
    int index = il;
    // 找根节点在中序遍历的位置
    while (index <= ir) {
        if (inorder[index] == preorder[pl]) {
            break;
        }
        index++;
    }
    // 中序遍历的根节点左右两边就是左右子树
    node->left = builATree(preorder, pl+1, pl+(index-il), inorder, il, index-1);
    node->right = builATree(preorder, pl+(index-il)+1, pr, inorder, index+1, ir);
    return node;
}

TreeNode* hot100_47::buildTree(vector<int>& preorder, vector<int>& inorder)
{
    return builATree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
}
