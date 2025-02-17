//
//  hot100_24.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_24.hpp"

ListNode* reverseList(ListNode *head) {
    if (!head) return nullptr;
    ListNode *tail = nullptr, *front = head->next, *mid = head;
    while (mid) {
        front = mid->next;
        mid->next = tail;
        tail = mid;
        mid = front;
    }
    return tail;
}

// 先反转后半段，在和前半段一起遍历比较
bool hot100_24::isPalindrome(ListNode* head) {
    int len = 0;
    ListNode *node = head;
    while (node) {
        len += 1;
        node = node->next;
    }
    int half = len / 2 + len % 2;
    node = head;
    while (half--) {
        node = node->next;
    }
    ListNode *rNode = reverseList(node);
    node = head;
    while (rNode) {
        if (rNode->val != node->val) {
            return false;
        }
        rNode = rNode->next;
        node = node->next;
    }
    return true;
}
