//
//  hot100_27.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_27.hpp"


// 一起遍历，小值加入到新链表
ListNode* hot100_27::mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *dummy = new ListNode(-1, nullptr);
    ListNode *tmp = dummy;
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            tmp->next = list1;
            list1 = list1->next;
            tmp = tmp->next;
            tmp->next = nullptr;
        } else {
            tmp->next = list2;
            list2 = list2->next;
            tmp = tmp->next;
            tmp->next = nullptr;
        }
    }
    if (!list1) {
        tmp->next = list2;
    } else if (!list2) {
        tmp->next = list1;
    }
    return dummy->next;
}
