//
//  hot100_29.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_29.hpp"
// 先遍历n个，再双指针一起遍历，找要删除节点的前一个节点就行
ListNode* hot100_29::removeNthFromEnd(ListNode* head, int n) {
    ListNode *node = head;
    while (n--) {
        if (!node) return head;
        node = node->next;
    }
    ListNode *dNode = head, *lastNode = head;
    while (node) {
        lastNode = dNode;
        node = node->next;
        dNode = dNode->next;
    }
    if (dNode == head)return head->next;
    lastNode->next = dNode ? dNode->next : nullptr;
    delete dNode;
    return head;
}
