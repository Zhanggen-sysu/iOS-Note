//
//  TreeNode.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/28.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif /* TreeNode_hpp */
