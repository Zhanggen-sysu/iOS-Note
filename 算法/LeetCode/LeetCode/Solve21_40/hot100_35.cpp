//
//  hot100_35.cpp
//  LeetCode
//
//  Created by GenZhang on 2023/12/22.
//

#include "hot100_35.hpp"

hot100_35::hot100_35(int capacity)
{
    _capacity = capacity;
}

int hot100_35::get(int key)
{
    if (mMap[key]) {
        if (dlist.head->nxt != mMap[key]) {
            dlist.remove(mMap[key]);
            dlist.addHead(mMap[key]);
        }
        return mMap[key]->val;
    }
    return -1;
}

void hot100_35::put(int key, int value)
{
    // 注意处理添加已有key的情况！
    if (mMap[key]) {
        dlist.remove(mMap[key]);
        dlist.addHead(mMap[key]);
        mMap[key]->val = value;
        return;
    }
    if (dlist.size == _capacity) {
        mMap[dlist.tail->pre->key] = nullptr;
        dlist.removeLast();
    }
    DListNode *node = new DListNode(key, value);
    dlist.addHead(node);
    mMap[key] = node;
}
