//
//  hot100_34.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_34.hpp"

ListNode *hot100_34_mergeList(ListNode *l1, ListNode *l2) {
    ListNode *dummy = new ListNode(-1);
    ListNode *tmp = dummy;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tmp->next = l1;
            l1 = l1->next;
        } else {
            tmp->next = l2;
            l2 = l2->next;
        }
        tmp = tmp->next;
    }
    if (!l1) {
        tmp->next = l2;
    } else {
        tmp->next = l1;
    }
    tmp = dummy->next;
    delete dummy;
    return tmp;
}

ListNode* sortKList(vector<ListNode*>& lists, int begin, int end) {
    if (begin == end) return lists[begin];
    if (begin > end) return nullptr;
    int mid = (begin + end) / 2;
    return hot100_34_mergeList(sortKList(lists, begin, mid), sortKList(lists, mid + 1, end));
}

ListNode* hot100_34::mergeKLists(vector<ListNode*>& lists)
{
    return sortKList(lists, 0, lists.size()-1);
}
