//
//  hot100_26.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_26.hpp"

// 先快慢指针判断有环，再双指针，一个从快慢指针交点，一个从头开始遍历，直到交点
ListNode * hot100_26::detectCycle(ListNode *head) {
    if (!head || !head->next) return nullptr;
    ListNode *slow = head, *fast = head;
    ListNode *xNode = nullptr;
    while (fast) {
        slow = slow->next;
        fast = fast->next;
        if (fast) {
            fast = fast->next;
        }
        if (fast == slow) {
            xNode = fast;
            fast = head;
            break;
        }
    }
    if (xNode) {
        while (xNode != fast) {
            xNode = xNode->next;
            fast = fast->next;
        }
    }

    return xNode;
}
