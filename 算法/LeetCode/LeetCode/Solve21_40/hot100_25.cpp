//
//  hot100_25.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_25.hpp"
// 快慢指针，相交即有环
bool hot100_25::hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
    ListNode *fast = head, *slow = head;
    while (fast) {
        slow = slow->next;
        fast = fast->next;
        if (fast) {
            fast = fast->next;
        }
        if (fast == slow) {
            return true;
        }
    }
    return false;
}
