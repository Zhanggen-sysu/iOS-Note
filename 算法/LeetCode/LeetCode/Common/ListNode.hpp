//
//  ListNode.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#ifndef ListNode_hpp
#define ListNode_hpp

typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {};
} ListNode;

#endif /* ListNode_hpp */
