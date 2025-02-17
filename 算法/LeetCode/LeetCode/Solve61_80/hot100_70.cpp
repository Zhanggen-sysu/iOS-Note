//
//  hot100_70.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_70.hpp"
MinStack::MinStack()
{
    
}

void MinStack::push(int val)
{
    sta.push(val);
    if (minSta.empty() || minSta.top() >= val) {
        minSta.push(val);
    }
}

void MinStack::pop()
{
    if (sta.empty()) return;
    int top = sta.top();
    sta.pop();
    if (top == minSta.top()) {
        minSta.pop();
    }
}

int MinStack::top()
{
    return sta.top();
}

int MinStack::getMin()
{
    return minSta.top();
}
