//
//  hot100_28.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_28.hpp"

// 注意记录进位就行
ListNode* hot100_28::addTwoNumbers(ListNode* l1, ListNode* l2) {
    long sum = 0;
    int add = 0, var1 = 0, var2 = 0;
    ListNode *dummy = new ListNode(-1, nullptr);
    ListNode *tmp = dummy;
    while (l1 || l2 || add) {
        if (l1) {
            var1 = l1->val;
            l1 = l1->next;
        } else {
            var1 = 0;
        }
        if (l2) {
            var2 = l2->val;
            l2 = l2->next;
        } else {
            var2 = 0;
        }
        sum = var1 + var2 + add;
        add = sum / 10;
        tmp->next = new ListNode(sum % 10, nullptr);
        tmp = tmp->next;
    }
    return dummy->next;
}
