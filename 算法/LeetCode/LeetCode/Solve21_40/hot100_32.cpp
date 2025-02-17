//
//  hot100_32.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_32.hpp"

// 用hash将复制的节点地址和原节点映射起来
Node* hot100_32::copyRandomList(Node* head)
{
    unordered_map<Node *, Node *> mMap;
    Node *dummy = new Node(-1);
    Node *tmp = dummy, *temp = head;
    while (temp) {
        Node *node = new Node(temp->val);
        mMap[temp] = node;
        tmp->next = node;
        tmp = tmp->next;
        temp = temp->next;
    }
    temp = head;
    tmp = dummy->next;
    while (tmp) {
        tmp->random = mMap[temp->random];
        tmp = tmp->next;
        temp = temp->next;
    }
    Node *ret = dummy->next;
    delete dummy;
    return ret;
}
