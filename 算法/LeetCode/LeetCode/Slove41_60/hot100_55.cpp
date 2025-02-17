//
//  hot100_55.cpp
//  LeetCode
//
//  Created by GenZhang on 2024/1/3.
//

#include "hot100_55.hpp"
void backtrace(vector<vector<int>> &ret, vector<int> nums, vector<int> cur, vector<bool> visit)
{
    if (cur.size() == nums.size()) {
        ret.push_back(cur);
        return;
    }
    for (int i = 0; i < nums.size(); i ++) {
        if (!visit[i]) {
            visit[i] = true;
            cur.push_back(nums[i]);
            backtrace(ret, nums, cur, visit);
            cur.pop_back();
            visit[i] = false;
        }
    }
}

vector<vector<int>> hot100_55::permute(vector<int>& nums)
{
    vector<vector<int>> ret;
    vector<bool> visit(nums.size(), false);
    backtrace(ret, nums, {}, visit);
    return ret;
}
