//
//  hot100_72.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_72.hpp"

vector<int> hot100_72::dailyTemperatures(vector<int>& temperatures)
{
    stack<int> s;
    vector<int> ret = vector<int>(temperatures.size(), 0);
    for (int i = 0; i < temperatures.size(); i ++) {
        while (!s.empty() && (temperatures[s.top()] < temperatures[i])) {
            ret[s.top()] = i-s.top();
            s.pop();
        }
        s.push(i);
    }
    return ret;
}
