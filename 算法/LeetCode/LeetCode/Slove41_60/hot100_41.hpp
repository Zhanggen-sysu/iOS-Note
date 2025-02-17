//
//  hot100_41.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/2.
//

#ifndef hot100_41_hpp
#define hot100_41_hpp
#include <vector>
#include <queue>
#include "TreeNode.hpp"
using namespace std;

class hot100_41 {
public:
    vector<vector<int>> levelOrder(TreeNode* root);
};

/**
 给你二叉树的根节点 root ，返回其节点值的 层序遍历 。 （即逐层地，从左到右访问所有节点）。
 
        3
       / \
      9   20
          / \
        15   7
 
 输入：root = [3,9,20,null,null,15,7]
 输出：[[3],[9,20],[15,7]]
 */

#endif /* hot100_41_hpp */
