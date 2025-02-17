//
//  hot100_31.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef hot100_31_hpp
#define hot100_31_hpp
#include "ListNode.hpp"

class hot100_31 {
public:
    ListNode* reverseKGroup(ListNode* head, int k);
};

/**
 给你链表的头节点 head ，每 k 个节点一组进行翻转，请你返回修改后的链表。

 k 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。

 你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换。
 
 输入：head = [1,2,3,4,5], k = 2
 输出：[2,1,4,3,5]
 */

#endif /* hot100_31_hpp */
