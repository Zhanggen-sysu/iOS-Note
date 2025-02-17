//
//  hot100_76.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_76.hpp"

MedianFinder::MedianFinder()
{
    size = 0;
}

void MedianFinder::addNum(int num)
{
    size ++;
    if (q1.empty() || q1.top() > num) {
        q1.push(num);
    } else {
        q2.push(num);
    }
    if (q2.size() > q1.size()) {
        q1.push(q2.top());
        q2.pop();
    }
    if (q1.size() > q2.size() + 1) {
        q2.push(q1.top());
        q1.pop();
    }
}

double MedianFinder::findMedian()
{
    if (size % 2) {
        return q1.top();
    }
    return q1.size() > 0 ? (q1.top() + q2.top()) / 2.0 : 0;
}
