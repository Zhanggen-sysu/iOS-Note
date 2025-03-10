//
//  hot100_46.hpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#ifndef hot100_46_hpp
#define hot100_46_hpp

#include "TreeNode.hpp"

class hot100_46 {
public:
    void flatten(TreeNode* root);
};

/**
 114. 二叉树展开为链表
 
 给你二叉树的根结点 root ，请你将它展开为一个单链表：

 展开后的单链表应该同样使用 TreeNode ，其中 right 子指针指向链表中下一个结点，而左子指针始终为 null 。
 展开后的单链表应该与二叉树 先序遍历 顺序相同。
 
 输入：root = [1,2,5,3,4,null,6]
 输出：[1,null,2,null,3,null,4,null,5,null,6]
 */

#endif /* hot100_46_hpp */
