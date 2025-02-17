//
//  hot100_56.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_56.hpp"

void hot100_56::backtrace(vector<vector<int>> &ret, vector<int> nums, vector<int> cur, vector<bool> visit, int index)
{
    ret.push_back(cur);
    for (int i = index; i < nums.size(); i ++) {
        if (!visit[i]) {
            visit[i] = true;
            cur.push_back(nums[i]);
            backtrace(ret, nums, cur, visit, i);
            cur.pop_back();
            visit[i] = false;
        }
    }
}

vector<vector<int>> hot100_56::subsets(vector<int>& nums)
{
    vector<vector<int>> ret;
    vector<bool> visit(nums.size(), false);
    backtrace(ret, nums, {}, visit, 0);
    return ret;
}
