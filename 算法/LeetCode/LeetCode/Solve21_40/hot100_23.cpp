//
//  hot100_23.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_23.hpp"

// 三指针
ListNode* hot100_23::reverseList(ListNode* head) {
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
