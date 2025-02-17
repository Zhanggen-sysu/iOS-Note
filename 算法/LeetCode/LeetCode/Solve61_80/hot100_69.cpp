//
//  hot100_69.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/9.
//

#include "hot100_69.hpp"

bool hot100_69::isValid(string s)
{
    stack<int> sta;
    for (auto i : s) {
        if (i == '[' || i == '{' || i == '(') {
            sta.push(i);
        } else if ((i == ']' && !sta.empty() && sta.top() == '[') || (i == '}' && !sta.empty() && sta.top() == '{') || (i == ')' && !sta.empty() && sta.top() == '(')) {
            sta.pop();
        } else {
            return false;
        }
    }
    return sta.empty();
}
