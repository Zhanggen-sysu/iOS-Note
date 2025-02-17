//
//  hot100_30.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_30.hpp"

// 用哨兵节点，双指针迭代
ListNode* hot100_30::swapPairs(ListNode* head)
{
    if (!head || !head->next) return head;
    ListNode *dummy = new ListNode(-1, nullptr);
    ListNode *tmp = dummy, *slow = head, *fast = head->next;
    while (slow) {
        if (fast) {
            tmp->next = fast;
            tmp = tmp->next;
            fast = fast->next;
        }
        tmp->next = slow;
        tmp = tmp->next;
        tmp->next = nullptr;
        slow = fast;
        if (fast) {
            fast = fast->next;
        }
    }
    return dummy->next;
}
