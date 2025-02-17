//
//  hot100_22.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_22.hpp"

// 一起遍历两个链表，一个链表遍历完后，跳到另一个链表继续遍历，直到两个指针一致
// 简单解法
ListNode * hot100_22::getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) {
        return nullptr;
    }
    ListNode *l1 = headA, *l2 = headB;
    while (l1 != l2) {
        l1 = l1 ? l1->next : headB;
        l2 = l2 ? l2->next : headA;
    }
    return l1;
}
// 复杂解法
//ListNode * hot100_22::getIntersectionNode(ListNode *headA, ListNode *headB) {
//    ListNode *nodeA = headA, *nodeB = headB;
//    int lenA = 0, lenB = 0;
//    while (nodeA) {
//        lenA ++;
//        nodeA = nodeA->next;
//    }
//    while (nodeB) {
//        lenB ++;
//        nodeB = nodeB->next;
//    }
//    if (lenA > lenB) {
//        nodeA = headA;
//        nodeB = headB;
//        for (int i = 0; i < lenA-lenB; i ++) {
//            nodeA = nodeA->next;
//        }
//        while (nodeA && nodeB) {
//            if (nodeA == nodeB) {
//                return nodeA;
//            }
//            nodeA = nodeA->next;
//            nodeB = nodeB->next;
//        }
//    } else {
//        nodeA = headA;
//        nodeB = headB;
//        for (int i = 0; i < lenB-lenA; i ++) {
//            nodeB = nodeB->next;
//        }
//        while (nodeA && nodeB) {
//            if (nodeA == nodeB) {
//                return nodeA;
//            }
//            nodeA = nodeA->next;
//            nodeB = nodeB->next;
//        }
//    }
//    return nullptr;
//}
