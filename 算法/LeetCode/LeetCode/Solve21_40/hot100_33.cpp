//
//  hot100_33.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_33.hpp"

ListNode* findeMidNode(ListNode *head);
ListNode* mergeTwoList(ListNode *l1, ListNode *l2);
// 归并法，不断分割为两部分，分别排序，再合并
ListNode* hot100_33::sortList(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode *midNode = findeMidNode(head);
    ListNode *rightHead = midNode->next;
    // 断开两半
    midNode->next = nullptr;
    ListNode *left = sortList(head);
    ListNode *right = sortList(rightHead);
    
    return mergeTwoList(left, right);
}

ListNode* findeMidNode(ListNode *head) {
    ListNode *fast = head->next, *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* mergeTwoList(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(-1), *tmp = dummy;
    while (l1 && l2) {
        if (l1->val > l2->val) {
            tmp->next = l2;
            tmp = tmp->next;
            l2 = l2->next;
        } else {
            tmp->next = l1;
            tmp = tmp->next;
            l1 = l1->next;
        }
    }
    if (l1) {
        tmp->next = l1;
    } else {
        tmp->next = l2;
    }
    return dummy->next;
}
