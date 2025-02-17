//
//  DListNode.hpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/28.
//

#ifndef DListNode_hpp
#define DListNode_hpp

typedef struct DListNode {
    int val, key;
    DListNode *pre, *nxt;
    DListNode(): val(0), key(0), pre(nullptr), nxt(nullptr) {}
    DListNode(int _key, int _val) : key(_key), val(_val), pre(nullptr), nxt(nullptr) {}
    DListNode(int _key, int _val, DListNode *_pre, DListNode *_nxt) : key(_key), val(_val), pre(_pre), nxt(_nxt) {}
} DListNode;

#endif /* DListNode_hpp */
