//
//  hot100_31.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_31.hpp"

ListNode *mReverse(ListNode *b, ListNode *e) {
    ListNode *f = b->next, *m = b, *t = nullptr;
    while (m != e) {
        f = m->next;
        m->next = t;
        t = m;
        m = f;
    }
    return t;
}

// 迭代法，k个k个反转，需要用哨兵节点
ListNode* hot100_31::reverseKGroup(ListNode* head, int k)
{
    if (!head || !head->next || k <= 1) return head;
    ListNode *b = head, *e = head;
    ListNode *dummy = new ListNode(-1, nullptr);
    ListNode *tmp = dummy;
    
    while (b) {
        for (int i = 0; i < k; i ++) {
            if (!e) {
                tmp->next = b;
                ListNode *ret = dummy->next;
                delete dummy;
                return ret;
            }
            e = e->next;
        }
        tmp->next = mReverse(b, e);
        tmp = b;
        b = e;
    }
    ListNode *ret = dummy->next;
    delete dummy;
    return ret;
}
