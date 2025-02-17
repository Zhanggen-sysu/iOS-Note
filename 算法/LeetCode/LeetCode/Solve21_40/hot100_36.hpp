//
//  hot100_36.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef hot100_36_hpp
#define hot100_36_hpp

#include "TreeNode.hpp"
#include <vector>
#include <stack>
using namespace std;

class hot100_36 {
    
private:
    vector<int> ret;
public:
    void inorder(TreeNode *root);
    // 递归法
    vector<int> inorderTraversal(TreeNode* root);
    vector<int> inorderNoRecursive(TreeNode *root);
};

/**
 给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
    1
     \
      2
     /
 `  3
 
 输入：root = [1,null,2,3]
 输出：[1,3,2]
 */

#endif /* hot100_36_hpp */
